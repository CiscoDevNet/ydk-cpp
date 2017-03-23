
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::InitMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "init-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-msgs-rcvd";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "label-release-msgs-sent"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-release-msgs-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelReleaseMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "init-msgs-sent"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-msgs-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "label-mapping-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mapping-msgs-rcvd";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelMappingMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "keepalive-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-msgs-rcvd";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "label-mapping-msgs-sent"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mapping-msgs-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelMappingMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "keepalive-msgs-sent"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-msgs-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "address-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-msgs-rcvd";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "address-msgs-sent"; yang_parent_name = "ldp-mpls-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-msgs-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterface()
    :
    basic_counter_interface_templates(std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>())
{
    basic_counter_interface_templates->parent = this;
    children["basic-counter-interface-templates"] = basic_counter_interface_templates;

    yang_name = "basic-counter-interface"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (basic_counter_interface_templates !=  nullptr && basic_counter_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-counter-interface-templates")
    {
        if(basic_counter_interface_templates != nullptr)
        {
            children["basic-counter-interface-templates"] = basic_counter_interface_templates;
        }
        else
        {
            basic_counter_interface_templates = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>();
            basic_counter_interface_templates->parent = this;
            children["basic-counter-interface-templates"] = basic_counter_interface_templates;
        }
        return children.at("basic-counter-interface-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::get_children()
{
    if(children.find("basic-counter-interface-templates") == children.end())
    {
        if(basic_counter_interface_templates != nullptr)
        {
            children["basic-counter-interface-templates"] = basic_counter_interface_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplates()
{
    yang_name = "basic-counter-interface-templates"; yang_parent_name = "basic-counter-interface";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-counter-interface-template")
    {
        for(auto const & c : basic_counter_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate>();
        c->parent = this;
        basic_counter_interface_template.push_back(std::move(c));
        children[segment_path] = basic_counter_interface_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_children()
{
    for (auto const & c : basic_counter_interface_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::BasicCounterInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    in_octets(nullptr) // presence node
	,in_packets(nullptr) // presence node
	,input_queue_drops(nullptr) // presence node
	,input_total_drops(nullptr) // presence node
	,input_total_errors(nullptr) // presence node
	,out_octets(nullptr) // presence node
	,out_packets(nullptr) // presence node
	,output_queue_drops(nullptr) // presence node
	,output_total_drops(nullptr) // presence node
	,output_total_errors(nullptr) // presence node
{
    yang_name = "basic-counter-interface-template"; yang_parent_name = "basic-counter-interface-templates";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::~BasicCounterInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (in_octets !=  nullptr && in_octets->has_data())
	|| (in_packets !=  nullptr && in_packets->has_data())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_data())
	|| (input_total_drops !=  nullptr && input_total_drops->has_data())
	|| (input_total_errors !=  nullptr && input_total_errors->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_packets !=  nullptr && out_packets->has_data())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_data())
	|| (output_total_drops !=  nullptr && output_total_drops->has_data())
	|| (output_total_errors !=  nullptr && output_total_errors->has_data());
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(vrf_group.operation)
	|| (in_octets !=  nullptr && in_octets->has_operation())
	|| (in_packets !=  nullptr && in_packets->has_operation())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_operation())
	|| (input_total_drops !=  nullptr && input_total_drops->has_operation())
	|| (input_total_errors !=  nullptr && input_total_errors->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_packets !=  nullptr && out_packets->has_operation())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_operation())
	|| (output_total_drops !=  nullptr && output_total_drops->has_operation())
	|| (output_total_errors !=  nullptr && output_total_errors->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/basic-counter-interface-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in-octets")
    {
        if(in_octets != nullptr)
        {
            children["in-octets"] = in_octets;
        }
        else
        {
            in_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets>();
            in_octets->parent = this;
            children["in-octets"] = in_octets;
        }
        return children.at("in-octets");
    }

    if(child_yang_name == "in-packets")
    {
        if(in_packets != nullptr)
        {
            children["in-packets"] = in_packets;
        }
        else
        {
            in_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets>();
            in_packets->parent = this;
            children["in-packets"] = in_packets;
        }
        return children.at("in-packets");
    }

    if(child_yang_name == "input-queue-drops")
    {
        if(input_queue_drops != nullptr)
        {
            children["input-queue-drops"] = input_queue_drops;
        }
        else
        {
            input_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops>();
            input_queue_drops->parent = this;
            children["input-queue-drops"] = input_queue_drops;
        }
        return children.at("input-queue-drops");
    }

    if(child_yang_name == "input-total-drops")
    {
        if(input_total_drops != nullptr)
        {
            children["input-total-drops"] = input_total_drops;
        }
        else
        {
            input_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops>();
            input_total_drops->parent = this;
            children["input-total-drops"] = input_total_drops;
        }
        return children.at("input-total-drops");
    }

    if(child_yang_name == "input-total-errors")
    {
        if(input_total_errors != nullptr)
        {
            children["input-total-errors"] = input_total_errors;
        }
        else
        {
            input_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors>();
            input_total_errors->parent = this;
            children["input-total-errors"] = input_total_errors;
        }
        return children.at("input-total-errors");
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets != nullptr)
        {
            children["out-octets"] = out_octets;
        }
        else
        {
            out_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets>();
            out_octets->parent = this;
            children["out-octets"] = out_octets;
        }
        return children.at("out-octets");
    }

    if(child_yang_name == "out-packets")
    {
        if(out_packets != nullptr)
        {
            children["out-packets"] = out_packets;
        }
        else
        {
            out_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets>();
            out_packets->parent = this;
            children["out-packets"] = out_packets;
        }
        return children.at("out-packets");
    }

    if(child_yang_name == "output-queue-drops")
    {
        if(output_queue_drops != nullptr)
        {
            children["output-queue-drops"] = output_queue_drops;
        }
        else
        {
            output_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops>();
            output_queue_drops->parent = this;
            children["output-queue-drops"] = output_queue_drops;
        }
        return children.at("output-queue-drops");
    }

    if(child_yang_name == "output-total-drops")
    {
        if(output_total_drops != nullptr)
        {
            children["output-total-drops"] = output_total_drops;
        }
        else
        {
            output_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops>();
            output_total_drops->parent = this;
            children["output-total-drops"] = output_total_drops;
        }
        return children.at("output-total-drops");
    }

    if(child_yang_name == "output-total-errors")
    {
        if(output_total_errors != nullptr)
        {
            children["output-total-errors"] = output_total_errors;
        }
        else
        {
            output_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors>();
            output_total_errors->parent = this;
            children["output-total-errors"] = output_total_errors;
        }
        return children.at("output-total-errors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_children()
{
    if(children.find("in-octets") == children.end())
    {
        if(in_octets != nullptr)
        {
            children["in-octets"] = in_octets;
        }
    }

    if(children.find("in-packets") == children.end())
    {
        if(in_packets != nullptr)
        {
            children["in-packets"] = in_packets;
        }
    }

    if(children.find("input-queue-drops") == children.end())
    {
        if(input_queue_drops != nullptr)
        {
            children["input-queue-drops"] = input_queue_drops;
        }
    }

    if(children.find("input-total-drops") == children.end())
    {
        if(input_total_drops != nullptr)
        {
            children["input-total-drops"] = input_total_drops;
        }
    }

    if(children.find("input-total-errors") == children.end())
    {
        if(input_total_errors != nullptr)
        {
            children["input-total-errors"] = input_total_errors;
        }
    }

    if(children.find("out-octets") == children.end())
    {
        if(out_octets != nullptr)
        {
            children["out-octets"] = out_octets;
        }
    }

    if(children.find("out-packets") == children.end())
    {
        if(out_packets != nullptr)
        {
            children["out-packets"] = out_packets;
        }
    }

    if(children.find("output-queue-drops") == children.end())
    {
        if(output_queue_drops != nullptr)
        {
            children["output-queue-drops"] = output_queue_drops;
        }
    }

    if(children.find("output-total-drops") == children.end())
    {
        if(output_total_drops != nullptr)
        {
            children["output-total-drops"] = output_total_drops;
        }
    }

    if(children.find("output-total-errors") == children.end())
    {
        if(output_total_errors != nullptr)
        {
            children["output-total-errors"] = output_total_errors;
        }
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::InOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-octets"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::~InOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InOctets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::OutOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-octets"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::~OutOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutOctets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::OutputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-queue-drops"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::~OutputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-queue-drops";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputQueueDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::InputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-total-errors"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::~InputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-errors";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputTotalErrors' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::OutputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-total-drops"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::~OutputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-drops";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputTotalDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::OutPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-packets"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::~OutPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::OutputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-total-errors"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::~OutputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-errors";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputTotalErrors' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::InPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-packets"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::~InPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::InputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-queue-drops"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::~InputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-queue-drops";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputQueueDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::InputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-total-drops"; yang_parent_name = "basic-counter-interface-template";
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::~InputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-drops";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputTotalDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_children()
{
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::Bgp()
    :
    bgp_templates(std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>())
{
    bgp_templates->parent = this;
    children["bgp-templates"] = bgp_templates;

    yang_name = "bgp"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (bgp_templates !=  nullptr && bgp_templates->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-templates")
    {
        if(bgp_templates != nullptr)
        {
            children["bgp-templates"] = bgp_templates;
        }
        else
        {
            bgp_templates = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>();
            bgp_templates->parent = this;
            children["bgp-templates"] = bgp_templates;
        }
        return children.at("bgp-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::get_children()
{
    if(children.find("bgp-templates") == children.end())
    {
        if(bgp_templates != nullptr)
        {
            children["bgp-templates"] = bgp_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplates()
{
    yang_name = "bgp-templates"; yang_parent_name = "bgp";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-template")
    {
        for(auto const & c : bgp_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate>();
        c->parent = this;
        bgp_template.push_back(std::move(c));
        children[segment_path] = bgp_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::get_children()
{
    for (auto const & c : bgp_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::BgpTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    conn_dropped(nullptr) // presence node
	,conn_established(nullptr) // presence node
	,errors_received(nullptr) // presence node
	,errors_sent(nullptr) // presence node
	,input_messages(nullptr) // presence node
	,input_update_messages(nullptr) // presence node
	,output_messages(nullptr) // presence node
	,output_update_messages(nullptr) // presence node
{
    yang_name = "bgp-template"; yang_parent_name = "bgp-templates";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::~BgpTemplate()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (conn_dropped !=  nullptr && conn_dropped->has_data())
	|| (conn_established !=  nullptr && conn_established->has_data())
	|| (errors_received !=  nullptr && errors_received->has_data())
	|| (errors_sent !=  nullptr && errors_sent->has_data())
	|| (input_messages !=  nullptr && input_messages->has_data())
	|| (input_update_messages !=  nullptr && input_update_messages->has_data())
	|| (output_messages !=  nullptr && output_messages->has_data())
	|| (output_update_messages !=  nullptr && output_update_messages->has_data());
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
	|| (conn_dropped !=  nullptr && conn_dropped->has_operation())
	|| (conn_established !=  nullptr && conn_established->has_operation())
	|| (errors_received !=  nullptr && errors_received->has_operation())
	|| (errors_sent !=  nullptr && errors_sent->has_operation())
	|| (input_messages !=  nullptr && input_messages->has_operation())
	|| (input_update_messages !=  nullptr && input_update_messages->has_operation())
	|| (output_messages !=  nullptr && output_messages->has_operation())
	|| (output_update_messages !=  nullptr && output_update_messages->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/bgp-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "conn-dropped")
    {
        if(conn_dropped != nullptr)
        {
            children["conn-dropped"] = conn_dropped;
        }
        else
        {
            conn_dropped = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped>();
            conn_dropped->parent = this;
            children["conn-dropped"] = conn_dropped;
        }
        return children.at("conn-dropped");
    }

    if(child_yang_name == "conn-established")
    {
        if(conn_established != nullptr)
        {
            children["conn-established"] = conn_established;
        }
        else
        {
            conn_established = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished>();
            conn_established->parent = this;
            children["conn-established"] = conn_established;
        }
        return children.at("conn-established");
    }

    if(child_yang_name == "errors-received")
    {
        if(errors_received != nullptr)
        {
            children["errors-received"] = errors_received;
        }
        else
        {
            errors_received = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived>();
            errors_received->parent = this;
            children["errors-received"] = errors_received;
        }
        return children.at("errors-received");
    }

    if(child_yang_name == "errors-sent")
    {
        if(errors_sent != nullptr)
        {
            children["errors-sent"] = errors_sent;
        }
        else
        {
            errors_sent = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent>();
            errors_sent->parent = this;
            children["errors-sent"] = errors_sent;
        }
        return children.at("errors-sent");
    }

    if(child_yang_name == "input-messages")
    {
        if(input_messages != nullptr)
        {
            children["input-messages"] = input_messages;
        }
        else
        {
            input_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages>();
            input_messages->parent = this;
            children["input-messages"] = input_messages;
        }
        return children.at("input-messages");
    }

    if(child_yang_name == "input-update-messages")
    {
        if(input_update_messages != nullptr)
        {
            children["input-update-messages"] = input_update_messages;
        }
        else
        {
            input_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages>();
            input_update_messages->parent = this;
            children["input-update-messages"] = input_update_messages;
        }
        return children.at("input-update-messages");
    }

    if(child_yang_name == "output-messages")
    {
        if(output_messages != nullptr)
        {
            children["output-messages"] = output_messages;
        }
        else
        {
            output_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages>();
            output_messages->parent = this;
            children["output-messages"] = output_messages;
        }
        return children.at("output-messages");
    }

    if(child_yang_name == "output-update-messages")
    {
        if(output_update_messages != nullptr)
        {
            children["output-update-messages"] = output_update_messages;
        }
        else
        {
            output_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages>();
            output_update_messages->parent = this;
            children["output-update-messages"] = output_update_messages;
        }
        return children.at("output-update-messages");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_children()
{
    if(children.find("conn-dropped") == children.end())
    {
        if(conn_dropped != nullptr)
        {
            children["conn-dropped"] = conn_dropped;
        }
    }

    if(children.find("conn-established") == children.end())
    {
        if(conn_established != nullptr)
        {
            children["conn-established"] = conn_established;
        }
    }

    if(children.find("errors-received") == children.end())
    {
        if(errors_received != nullptr)
        {
            children["errors-received"] = errors_received;
        }
    }

    if(children.find("errors-sent") == children.end())
    {
        if(errors_sent != nullptr)
        {
            children["errors-sent"] = errors_sent;
        }
    }

    if(children.find("input-messages") == children.end())
    {
        if(input_messages != nullptr)
        {
            children["input-messages"] = input_messages;
        }
    }

    if(children.find("input-update-messages") == children.end())
    {
        if(input_update_messages != nullptr)
        {
            children["input-update-messages"] = input_update_messages;
        }
    }

    if(children.find("output-messages") == children.end())
    {
        if(output_messages != nullptr)
        {
            children["output-messages"] = output_messages;
        }
    }

    if(children.find("output-update-messages") == children.end())
    {
        if(output_update_messages != nullptr)
        {
            children["output-update-messages"] = output_update_messages;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::OutputUpdateMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-update-messages"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::~OutputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-update-messages";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputUpdateMessages' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::ErrorsReceived()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "errors-received"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::~ErrorsReceived()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-received";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorsReceived' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::ConnEstablished()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "conn-established"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::~ConnEstablished()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-established";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnEstablished' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::OutputMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-messages"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::~OutputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-messages";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputMessages' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::ConnDropped()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "conn-dropped"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::~ConnDropped()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-dropped";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnDropped' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::InputUpdateMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-update-messages"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::~InputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-update-messages";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputUpdateMessages' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::ErrorsSent()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "errors-sent"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::~ErrorsSent()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-sent";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::InputMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-messages"; yang_parent_name = "bgp-template";
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::~InputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-messages";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputMessages' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2Protocol()
    :
    ospfv2_protocol_templates(std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates>())
{
    ospfv2_protocol_templates->parent = this;
    children["ospfv2-protocol-templates"] = ospfv2_protocol_templates;

    yang_name = "ospfv2-protocol"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (ospfv2_protocol_templates !=  nullptr && ospfv2_protocol_templates->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv2-protocol-templates")
    {
        if(ospfv2_protocol_templates != nullptr)
        {
            children["ospfv2-protocol-templates"] = ospfv2_protocol_templates;
        }
        else
        {
            ospfv2_protocol_templates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates>();
            ospfv2_protocol_templates->parent = this;
            children["ospfv2-protocol-templates"] = ospfv2_protocol_templates;
        }
        return children.at("ospfv2-protocol-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::get_children()
{
    if(children.find("ospfv2-protocol-templates") == children.end())
    {
        if(ospfv2_protocol_templates != nullptr)
        {
            children["ospfv2-protocol-templates"] = ospfv2_protocol_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplates()
{
    yang_name = "ospfv2-protocol-templates"; yang_parent_name = "ospfv2-protocol";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv2-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv2-protocol-template")
    {
        for(auto const & c : ospfv2_protocol_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate>();
        c->parent = this;
        ospfv2_protocol_template.push_back(std::move(c));
        children[segment_path] = ospfv2_protocol_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_children()
{
    for (auto const & c : ospfv2_protocol_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "ospfv2-protocol-template"; yang_parent_name = "ospfv2-protocol-templates";
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
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
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

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv2-protocol/ospfv2-protocol-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checksum-errors")
    {
        if(checksum_errors != nullptr)
        {
            children["checksum-errors"] = checksum_errors;
        }
        else
        {
            checksum_errors = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors>();
            checksum_errors->parent = this;
            children["checksum-errors"] = checksum_errors;
        }
        return children.at("checksum-errors");
    }

    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds != nullptr)
        {
            children["input-db-ds"] = input_db_ds;
        }
        else
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs>();
            input_db_ds->parent = this;
            children["input-db-ds"] = input_db_ds;
        }
        return children.at("input-db-ds");
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa != nullptr)
        {
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
        else
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa>();
            input_db_ds_lsa->parent = this;
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
        return children.at("input-db-ds-lsa");
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets != nullptr)
        {
            children["input-hello-packets"] = input_hello_packets;
        }
        else
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets>();
            input_hello_packets->parent = this;
            children["input-hello-packets"] = input_hello_packets;
        }
        return children.at("input-hello-packets");
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests != nullptr)
        {
            children["input-ls-requests"] = input_ls_requests;
        }
        else
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests>();
            input_ls_requests->parent = this;
            children["input-ls-requests"] = input_ls_requests;
        }
        return children.at("input-ls-requests");
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa != nullptr)
        {
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
        else
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa>();
            input_ls_requests_lsa->parent = this;
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
        return children.at("input-ls-requests-lsa");
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks != nullptr)
        {
            children["input-lsa-acks"] = input_lsa_acks;
        }
        else
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks>();
            input_lsa_acks->parent = this;
            children["input-lsa-acks"] = input_lsa_acks;
        }
        return children.at("input-lsa-acks");
    }

    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa != nullptr)
        {
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
        else
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa>();
            input_lsa_acks_lsa->parent = this;
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
        return children.at("input-lsa-acks-lsa");
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates != nullptr)
        {
            children["input-lsa-updates"] = input_lsa_updates;
        }
        else
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates>();
            input_lsa_updates->parent = this;
            children["input-lsa-updates"] = input_lsa_updates;
        }
        return children.at("input-lsa-updates");
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa != nullptr)
        {
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
        else
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa>();
            input_lsa_updates_lsa->parent = this;
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
        return children.at("input-lsa-updates-lsa");
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets != nullptr)
        {
            children["input-packets"] = input_packets;
        }
        else
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets>();
            input_packets->parent = this;
            children["input-packets"] = input_packets;
        }
        return children.at("input-packets");
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds != nullptr)
        {
            children["output-db-ds"] = output_db_ds;
        }
        else
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs>();
            output_db_ds->parent = this;
            children["output-db-ds"] = output_db_ds;
        }
        return children.at("output-db-ds");
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa != nullptr)
        {
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
        else
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa>();
            output_db_ds_lsa->parent = this;
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
        return children.at("output-db-ds-lsa");
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets != nullptr)
        {
            children["output-hello-packets"] = output_hello_packets;
        }
        else
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets>();
            output_hello_packets->parent = this;
            children["output-hello-packets"] = output_hello_packets;
        }
        return children.at("output-hello-packets");
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests != nullptr)
        {
            children["output-ls-requests"] = output_ls_requests;
        }
        else
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests>();
            output_ls_requests->parent = this;
            children["output-ls-requests"] = output_ls_requests;
        }
        return children.at("output-ls-requests");
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa != nullptr)
        {
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
        else
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa>();
            output_ls_requests_lsa->parent = this;
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
        return children.at("output-ls-requests-lsa");
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks != nullptr)
        {
            children["output-lsa-acks"] = output_lsa_acks;
        }
        else
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks>();
            output_lsa_acks->parent = this;
            children["output-lsa-acks"] = output_lsa_acks;
        }
        return children.at("output-lsa-acks");
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa != nullptr)
        {
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
        else
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa>();
            output_lsa_acks_lsa->parent = this;
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
        return children.at("output-lsa-acks-lsa");
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates != nullptr)
        {
            children["output-lsa-updates"] = output_lsa_updates;
        }
        else
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates>();
            output_lsa_updates->parent = this;
            children["output-lsa-updates"] = output_lsa_updates;
        }
        return children.at("output-lsa-updates");
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa != nullptr)
        {
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
        else
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa>();
            output_lsa_updates_lsa->parent = this;
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
        return children.at("output-lsa-updates-lsa");
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets != nullptr)
        {
            children["output-packets"] = output_packets;
        }
        else
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets>();
            output_packets->parent = this;
            children["output-packets"] = output_packets;
        }
        return children.at("output-packets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_children()
{
    if(children.find("checksum-errors") == children.end())
    {
        if(checksum_errors != nullptr)
        {
            children["checksum-errors"] = checksum_errors;
        }
    }

    if(children.find("input-db-ds") == children.end())
    {
        if(input_db_ds != nullptr)
        {
            children["input-db-ds"] = input_db_ds;
        }
    }

    if(children.find("input-db-ds-lsa") == children.end())
    {
        if(input_db_ds_lsa != nullptr)
        {
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
    }

    if(children.find("input-hello-packets") == children.end())
    {
        if(input_hello_packets != nullptr)
        {
            children["input-hello-packets"] = input_hello_packets;
        }
    }

    if(children.find("input-ls-requests") == children.end())
    {
        if(input_ls_requests != nullptr)
        {
            children["input-ls-requests"] = input_ls_requests;
        }
    }

    if(children.find("input-ls-requests-lsa") == children.end())
    {
        if(input_ls_requests_lsa != nullptr)
        {
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
    }

    if(children.find("input-lsa-acks") == children.end())
    {
        if(input_lsa_acks != nullptr)
        {
            children["input-lsa-acks"] = input_lsa_acks;
        }
    }

    if(children.find("input-lsa-acks-lsa") == children.end())
    {
        if(input_lsa_acks_lsa != nullptr)
        {
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
    }

    if(children.find("input-lsa-updates") == children.end())
    {
        if(input_lsa_updates != nullptr)
        {
            children["input-lsa-updates"] = input_lsa_updates;
        }
    }

    if(children.find("input-lsa-updates-lsa") == children.end())
    {
        if(input_lsa_updates_lsa != nullptr)
        {
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
    }

    if(children.find("input-packets") == children.end())
    {
        if(input_packets != nullptr)
        {
            children["input-packets"] = input_packets;
        }
    }

    if(children.find("output-db-ds") == children.end())
    {
        if(output_db_ds != nullptr)
        {
            children["output-db-ds"] = output_db_ds;
        }
    }

    if(children.find("output-db-ds-lsa") == children.end())
    {
        if(output_db_ds_lsa != nullptr)
        {
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
    }

    if(children.find("output-hello-packets") == children.end())
    {
        if(output_hello_packets != nullptr)
        {
            children["output-hello-packets"] = output_hello_packets;
        }
    }

    if(children.find("output-ls-requests") == children.end())
    {
        if(output_ls_requests != nullptr)
        {
            children["output-ls-requests"] = output_ls_requests;
        }
    }

    if(children.find("output-ls-requests-lsa") == children.end())
    {
        if(output_ls_requests_lsa != nullptr)
        {
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
    }

    if(children.find("output-lsa-acks") == children.end())
    {
        if(output_lsa_acks != nullptr)
        {
            children["output-lsa-acks"] = output_lsa_acks;
        }
    }

    if(children.find("output-lsa-acks-lsa") == children.end())
    {
        if(output_lsa_acks_lsa != nullptr)
        {
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
    }

    if(children.find("output-lsa-updates") == children.end())
    {
        if(output_lsa_updates != nullptr)
        {
            children["output-lsa-updates"] = output_lsa_updates;
        }
    }

    if(children.find("output-lsa-updates-lsa") == children.end())
    {
        if(output_lsa_updates_lsa != nullptr)
        {
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
    }

    if(children.find("output-packets") == children.end())
    {
        if(output_packets != nullptr)
        {
            children["output-packets"] = output_packets;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
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
    yang_name = "checksum-errors"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checksum-errors";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChecksumErrors' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaAcksLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputDbDsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputDbDsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaUpdates' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-db-ds"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputDbDs' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaUpdatesLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-db-ds"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputDbDs' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaUpdatesLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-packets"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-packets"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-hello-packets"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-hello-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputHelloPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-hello-packets"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-hello-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputHelloPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-ls-requests"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsRequests' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaAcksLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaAcks' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaAcks' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaUpdates' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsRequestsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsRequestsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-ls-requests"; yang_parent_name = "ospfv2-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsRequests' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::CpuNode::CpuNode()
    :
    cpu_node_templates(std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>())
{
    cpu_node_templates->parent = this;
    children["cpu-node-templates"] = cpu_node_templates;

    yang_name = "cpu-node"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (cpu_node_templates !=  nullptr && cpu_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::CpuNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cpu-node-templates")
    {
        if(cpu_node_templates != nullptr)
        {
            children["cpu-node-templates"] = cpu_node_templates;
        }
        else
        {
            cpu_node_templates = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>();
            cpu_node_templates->parent = this;
            children["cpu-node-templates"] = cpu_node_templates;
        }
        return children.at("cpu-node-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::CpuNode::get_children()
{
    if(children.find("cpu-node-templates") == children.end())
    {
        if(cpu_node_templates != nullptr)
        {
            children["cpu-node-templates"] = cpu_node_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplates()
{
    yang_name = "cpu-node-templates"; yang_parent_name = "cpu-node";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cpu-node-template")
    {
        for(auto const & c : cpu_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate>();
        c->parent = this;
        cpu_node_template.push_back(std::move(c));
        children[segment_path] = cpu_node_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_children()
{
    for (auto const & c : cpu_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::CpuNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    average_cpu_used(nullptr) // presence node
	,no_processes(nullptr) // presence node
{
    yang_name = "cpu-node-template"; yang_parent_name = "cpu-node-templates";
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
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (no_processes !=  nullptr && no_processes->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/cpu-node-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "average-cpu-used")
    {
        if(average_cpu_used != nullptr)
        {
            children["average-cpu-used"] = average_cpu_used;
        }
        else
        {
            average_cpu_used = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed>();
            average_cpu_used->parent = this;
            children["average-cpu-used"] = average_cpu_used;
        }
        return children.at("average-cpu-used");
    }

    if(child_yang_name == "no-processes")
    {
        if(no_processes != nullptr)
        {
            children["no-processes"] = no_processes;
        }
        else
        {
            no_processes = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses>();
            no_processes->parent = this;
            children["no-processes"] = no_processes;
        }
        return children.at("no-processes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_children()
{
    if(children.find("average-cpu-used") == children.end())
    {
        if(average_cpu_used != nullptr)
        {
            children["average-cpu-used"] = average_cpu_used;
        }
    }

    if(children.find("no-processes") == children.end())
    {
        if(no_processes != nullptr)
        {
            children["no-processes"] = no_processes;
        }
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::AverageCpuUsed()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "average-cpu-used"; yang_parent_name = "cpu-node-template";
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::~AverageCpuUsed()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-cpu-used";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AverageCpuUsed' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_children()
{
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::NoProcesses()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "no-processes"; yang_parent_name = "cpu-node-template";
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::~NoProcesses()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-processes";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoProcesses' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_children()
{
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterface()
    :
    data_rate_interface_templates(std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>())
{
    data_rate_interface_templates->parent = this;
    children["data-rate-interface-templates"] = data_rate_interface_templates;

    yang_name = "data-rate-interface"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (data_rate_interface_templates !=  nullptr && data_rate_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data-rate-interface-templates")
    {
        if(data_rate_interface_templates != nullptr)
        {
            children["data-rate-interface-templates"] = data_rate_interface_templates;
        }
        else
        {
            data_rate_interface_templates = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>();
            data_rate_interface_templates->parent = this;
            children["data-rate-interface-templates"] = data_rate_interface_templates;
        }
        return children.at("data-rate-interface-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::get_children()
{
    if(children.find("data-rate-interface-templates") == children.end())
    {
        if(data_rate_interface_templates != nullptr)
        {
            children["data-rate-interface-templates"] = data_rate_interface_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplates()
{
    yang_name = "data-rate-interface-templates"; yang_parent_name = "data-rate-interface";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data-rate-interface-template")
    {
        for(auto const & c : data_rate_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate>();
        c->parent = this;
        data_rate_interface_template.push_back(std::move(c));
        children[segment_path] = data_rate_interface_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_children()
{
    for (auto const & c : data_rate_interface_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::DataRateInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    bandwidth(nullptr) // presence node
	,input_data_rate(nullptr) // presence node
	,input_packet_rate(nullptr) // presence node
	,input_peak_pkts(nullptr) // presence node
	,input_peak_rate(nullptr) // presence node
	,output_data_rate(nullptr) // presence node
	,output_packet_rate(nullptr) // presence node
	,output_peak_pkts(nullptr) // presence node
	,output_peak_rate(nullptr) // presence node
{
    yang_name = "data-rate-interface-template"; yang_parent_name = "data-rate-interface-templates";
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::~DataRateInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (input_data_rate !=  nullptr && input_data_rate->has_data())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_data())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_data())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_data())
	|| (output_data_rate !=  nullptr && output_data_rate->has_data())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_data())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_data())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_data());
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(vrf_group.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (input_data_rate !=  nullptr && input_data_rate->has_operation())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_operation())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_operation())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_operation())
	|| (output_data_rate !=  nullptr && output_data_rate->has_operation())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_operation())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_operation())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/data-rate-interface-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "input-data-rate")
    {
        if(input_data_rate != nullptr)
        {
            children["input-data-rate"] = input_data_rate;
        }
        else
        {
            input_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate>();
            input_data_rate->parent = this;
            children["input-data-rate"] = input_data_rate;
        }
        return children.at("input-data-rate");
    }

    if(child_yang_name == "input-packet-rate")
    {
        if(input_packet_rate != nullptr)
        {
            children["input-packet-rate"] = input_packet_rate;
        }
        else
        {
            input_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate>();
            input_packet_rate->parent = this;
            children["input-packet-rate"] = input_packet_rate;
        }
        return children.at("input-packet-rate");
    }

    if(child_yang_name == "input-peak-pkts")
    {
        if(input_peak_pkts != nullptr)
        {
            children["input-peak-pkts"] = input_peak_pkts;
        }
        else
        {
            input_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts>();
            input_peak_pkts->parent = this;
            children["input-peak-pkts"] = input_peak_pkts;
        }
        return children.at("input-peak-pkts");
    }

    if(child_yang_name == "input-peak-rate")
    {
        if(input_peak_rate != nullptr)
        {
            children["input-peak-rate"] = input_peak_rate;
        }
        else
        {
            input_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate>();
            input_peak_rate->parent = this;
            children["input-peak-rate"] = input_peak_rate;
        }
        return children.at("input-peak-rate");
    }

    if(child_yang_name == "output-data-rate")
    {
        if(output_data_rate != nullptr)
        {
            children["output-data-rate"] = output_data_rate;
        }
        else
        {
            output_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate>();
            output_data_rate->parent = this;
            children["output-data-rate"] = output_data_rate;
        }
        return children.at("output-data-rate");
    }

    if(child_yang_name == "output-packet-rate")
    {
        if(output_packet_rate != nullptr)
        {
            children["output-packet-rate"] = output_packet_rate;
        }
        else
        {
            output_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate>();
            output_packet_rate->parent = this;
            children["output-packet-rate"] = output_packet_rate;
        }
        return children.at("output-packet-rate");
    }

    if(child_yang_name == "output-peak-pkts")
    {
        if(output_peak_pkts != nullptr)
        {
            children["output-peak-pkts"] = output_peak_pkts;
        }
        else
        {
            output_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts>();
            output_peak_pkts->parent = this;
            children["output-peak-pkts"] = output_peak_pkts;
        }
        return children.at("output-peak-pkts");
    }

    if(child_yang_name == "output-peak-rate")
    {
        if(output_peak_rate != nullptr)
        {
            children["output-peak-rate"] = output_peak_rate;
        }
        else
        {
            output_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate>();
            output_peak_rate->parent = this;
            children["output-peak-rate"] = output_peak_rate;
        }
        return children.at("output-peak-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("input-data-rate") == children.end())
    {
        if(input_data_rate != nullptr)
        {
            children["input-data-rate"] = input_data_rate;
        }
    }

    if(children.find("input-packet-rate") == children.end())
    {
        if(input_packet_rate != nullptr)
        {
            children["input-packet-rate"] = input_packet_rate;
        }
    }

    if(children.find("input-peak-pkts") == children.end())
    {
        if(input_peak_pkts != nullptr)
        {
            children["input-peak-pkts"] = input_peak_pkts;
        }
    }

    if(children.find("input-peak-rate") == children.end())
    {
        if(input_peak_rate != nullptr)
        {
            children["input-peak-rate"] = input_peak_rate;
        }
    }

    if(children.find("output-data-rate") == children.end())
    {
        if(output_data_rate != nullptr)
        {
            children["output-data-rate"] = output_data_rate;
        }
    }

    if(children.find("output-packet-rate") == children.end())
    {
        if(output_packet_rate != nullptr)
        {
            children["output-packet-rate"] = output_packet_rate;
        }
    }

    if(children.find("output-peak-pkts") == children.end())
    {
        if(output_peak_pkts != nullptr)
        {
            children["output-peak-pkts"] = output_peak_pkts;
        }
    }

    if(children.find("output-peak-rate") == children.end())
    {
        if(output_peak_rate != nullptr)
        {
            children["output-peak-rate"] = output_peak_rate;
        }
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::InputDataRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-data-rate"; yang_parent_name = "data-rate-interface-template";
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::~InputDataRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-data-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputDataRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::Bandwidth()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "data-rate-interface-template";
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::~Bandwidth()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-packet-rate"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packet-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPacketRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::InputPeakPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-peak-pkts"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-peak-pkts";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPeakPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-peak-rate"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-peak-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPeakRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-data-rate"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-data-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputDataRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::InputPacketRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-packet-rate"; yang_parent_name = "data-rate-interface-template";
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::~InputPacketRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packet-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPacketRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-peak-pkts"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-peak-pkts";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPeakPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-peak-rate"; yang_parent_name = "data-rate-interface-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-peak-rate";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPeakRate' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_children()
{
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::ProcessNode::ProcessNode()
    :
    process_node_templates(std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates>())
{
    process_node_templates->parent = this;
    children["process-node-templates"] = process_node_templates;

    yang_name = "process-node"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (process_node_templates !=  nullptr && process_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-node-templates")
    {
        if(process_node_templates != nullptr)
        {
            children["process-node-templates"] = process_node_templates;
        }
        else
        {
            process_node_templates = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates>();
            process_node_templates->parent = this;
            children["process-node-templates"] = process_node_templates;
        }
        return children.at("process-node-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::get_children()
{
    if(children.find("process-node-templates") == children.end())
    {
        if(process_node_templates != nullptr)
        {
            children["process-node-templates"] = process_node_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplates()
{
    yang_name = "process-node-templates"; yang_parent_name = "process-node";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-node-template")
    {
        for(auto const & c : process_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate>();
        c->parent = this;
        process_node_template.push_back(std::move(c));
        children[segment_path] = process_node_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_children()
{
    for (auto const & c : process_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "process-node-template"; yang_parent_name = "process-node-templates";
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
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (no_threads !=  nullptr && no_threads->has_operation())
	|| (peak_memory !=  nullptr && peak_memory->has_operation());
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/process-node/process-node-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "average-cpu-used")
    {
        if(average_cpu_used != nullptr)
        {
            children["average-cpu-used"] = average_cpu_used;
        }
        else
        {
            average_cpu_used = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed>();
            average_cpu_used->parent = this;
            children["average-cpu-used"] = average_cpu_used;
        }
        return children.at("average-cpu-used");
    }

    if(child_yang_name == "no-threads")
    {
        if(no_threads != nullptr)
        {
            children["no-threads"] = no_threads;
        }
        else
        {
            no_threads = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads>();
            no_threads->parent = this;
            children["no-threads"] = no_threads;
        }
        return children.at("no-threads");
    }

    if(child_yang_name == "peak-memory")
    {
        if(peak_memory != nullptr)
        {
            children["peak-memory"] = peak_memory;
        }
        else
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory>();
            peak_memory->parent = this;
            children["peak-memory"] = peak_memory;
        }
        return children.at("peak-memory");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_children()
{
    if(children.find("average-cpu-used") == children.end())
    {
        if(average_cpu_used != nullptr)
        {
            children["average-cpu-used"] = average_cpu_used;
        }
    }

    if(children.find("no-threads") == children.end())
    {
        if(no_threads != nullptr)
        {
            children["no-threads"] = no_threads;
        }
    }

    if(children.find("peak-memory") == children.end())
    {
        if(peak_memory != nullptr)
        {
            children["peak-memory"] = peak_memory;
        }
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
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
    yang_name = "average-cpu-used"; yang_parent_name = "process-node-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-cpu-used";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AverageCpuUsed' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_children()
{
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "peak-memory"; yang_parent_name = "process-node-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-memory";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeakMemory' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_children()
{
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "no-threads"; yang_parent_name = "process-node-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-threads";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoThreads' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_children()
{
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::MemoryNode::MemoryNode()
    :
    memory_node_templates(std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates>())
{
    memory_node_templates->parent = this;
    children["memory-node-templates"] = memory_node_templates;

    yang_name = "memory-node"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (memory_node_templates !=  nullptr && memory_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::MemoryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-node-templates")
    {
        if(memory_node_templates != nullptr)
        {
            children["memory-node-templates"] = memory_node_templates;
        }
        else
        {
            memory_node_templates = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates>();
            memory_node_templates->parent = this;
            children["memory-node-templates"] = memory_node_templates;
        }
        return children.at("memory-node-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::MemoryNode::get_children()
{
    if(children.find("memory-node-templates") == children.end())
    {
        if(memory_node_templates != nullptr)
        {
            children["memory-node-templates"] = memory_node_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplates()
{
    yang_name = "memory-node-templates"; yang_parent_name = "memory-node";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-node-template")
    {
        for(auto const & c : memory_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate>();
        c->parent = this;
        memory_node_template.push_back(std::move(c));
        children[segment_path] = memory_node_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_children()
{
    for (auto const & c : memory_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::MemoryNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    curr_memory(nullptr) // presence node
	,peak_memory(nullptr) // presence node
{
    yang_name = "memory-node-template"; yang_parent_name = "memory-node-templates";
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
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
	|| (curr_memory !=  nullptr && curr_memory->has_operation())
	|| (peak_memory !=  nullptr && peak_memory->has_operation());
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/memory-node/memory-node-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "curr-memory")
    {
        if(curr_memory != nullptr)
        {
            children["curr-memory"] = curr_memory;
        }
        else
        {
            curr_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory>();
            curr_memory->parent = this;
            children["curr-memory"] = curr_memory;
        }
        return children.at("curr-memory");
    }

    if(child_yang_name == "peak-memory")
    {
        if(peak_memory != nullptr)
        {
            children["peak-memory"] = peak_memory;
        }
        else
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory>();
            peak_memory->parent = this;
            children["peak-memory"] = peak_memory;
        }
        return children.at("peak-memory");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_children()
{
    if(children.find("curr-memory") == children.end())
    {
        if(curr_memory != nullptr)
        {
            children["curr-memory"] = curr_memory;
        }
    }

    if(children.find("peak-memory") == children.end())
    {
        if(peak_memory != nullptr)
        {
            children["peak-memory"] = peak_memory;
        }
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
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
    yang_name = "peak-memory"; yang_parent_name = "memory-node-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-memory";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeakMemory' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_children()
{
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "curr-memory"; yang_parent_name = "memory-node-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curr-memory";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrMemory' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_children()
{
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3Protocol()
    :
    ospfv3_protocol_templates(std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates>())
{
    ospfv3_protocol_templates->parent = this;
    children["ospfv3-protocol-templates"] = ospfv3_protocol_templates;

    yang_name = "ospfv3-protocol"; yang_parent_name = "threshold";
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
    return is_set(operation)
	|| (ospfv3_protocol_templates !=  nullptr && ospfv3_protocol_templates->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv3-protocol-templates")
    {
        if(ospfv3_protocol_templates != nullptr)
        {
            children["ospfv3-protocol-templates"] = ospfv3_protocol_templates;
        }
        else
        {
            ospfv3_protocol_templates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates>();
            ospfv3_protocol_templates->parent = this;
            children["ospfv3-protocol-templates"] = ospfv3_protocol_templates;
        }
        return children.at("ospfv3-protocol-templates");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::get_children()
{
    if(children.find("ospfv3-protocol-templates") == children.end())
    {
        if(ospfv3_protocol_templates != nullptr)
        {
            children["ospfv3-protocol-templates"] = ospfv3_protocol_templates;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplates()
{
    yang_name = "ospfv3-protocol-templates"; yang_parent_name = "ospfv3-protocol";
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
    return is_set(operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-templates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv3-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv3-protocol-template")
    {
        for(auto const & c : ospfv3_protocol_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate>();
        c->parent = this;
        ospfv3_protocol_template.push_back(std::move(c));
        children[segment_path] = ospfv3_protocol_template.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_children()
{
    for (auto const & c : ospfv3_protocol_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "ospfv3-protocol-template"; yang_parent_name = "ospfv3-protocol-templates";
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
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
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

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv3-protocol/ospfv3-protocol-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds != nullptr)
        {
            children["input-db-ds"] = input_db_ds;
        }
        else
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs>();
            input_db_ds->parent = this;
            children["input-db-ds"] = input_db_ds;
        }
        return children.at("input-db-ds");
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa != nullptr)
        {
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
        else
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa>();
            input_db_ds_lsa->parent = this;
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
        return children.at("input-db-ds-lsa");
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets != nullptr)
        {
            children["input-hello-packets"] = input_hello_packets;
        }
        else
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets>();
            input_hello_packets->parent = this;
            children["input-hello-packets"] = input_hello_packets;
        }
        return children.at("input-hello-packets");
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests != nullptr)
        {
            children["input-ls-requests"] = input_ls_requests;
        }
        else
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests>();
            input_ls_requests->parent = this;
            children["input-ls-requests"] = input_ls_requests;
        }
        return children.at("input-ls-requests");
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa != nullptr)
        {
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
        else
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa>();
            input_ls_requests_lsa->parent = this;
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
        return children.at("input-ls-requests-lsa");
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks != nullptr)
        {
            children["input-lsa-acks"] = input_lsa_acks;
        }
        else
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks>();
            input_lsa_acks->parent = this;
            children["input-lsa-acks"] = input_lsa_acks;
        }
        return children.at("input-lsa-acks");
    }

    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa != nullptr)
        {
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
        else
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa>();
            input_lsa_acks_lsa->parent = this;
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
        return children.at("input-lsa-acks-lsa");
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates != nullptr)
        {
            children["input-lsa-updates"] = input_lsa_updates;
        }
        else
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates>();
            input_lsa_updates->parent = this;
            children["input-lsa-updates"] = input_lsa_updates;
        }
        return children.at("input-lsa-updates");
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa != nullptr)
        {
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
        else
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa>();
            input_lsa_updates_lsa->parent = this;
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
        return children.at("input-lsa-updates-lsa");
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets != nullptr)
        {
            children["input-packets"] = input_packets;
        }
        else
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets>();
            input_packets->parent = this;
            children["input-packets"] = input_packets;
        }
        return children.at("input-packets");
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds != nullptr)
        {
            children["output-db-ds"] = output_db_ds;
        }
        else
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs>();
            output_db_ds->parent = this;
            children["output-db-ds"] = output_db_ds;
        }
        return children.at("output-db-ds");
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa != nullptr)
        {
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
        else
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa>();
            output_db_ds_lsa->parent = this;
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
        return children.at("output-db-ds-lsa");
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets != nullptr)
        {
            children["output-hello-packets"] = output_hello_packets;
        }
        else
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets>();
            output_hello_packets->parent = this;
            children["output-hello-packets"] = output_hello_packets;
        }
        return children.at("output-hello-packets");
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests != nullptr)
        {
            children["output-ls-requests"] = output_ls_requests;
        }
        else
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests>();
            output_ls_requests->parent = this;
            children["output-ls-requests"] = output_ls_requests;
        }
        return children.at("output-ls-requests");
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa != nullptr)
        {
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
        else
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa>();
            output_ls_requests_lsa->parent = this;
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
        return children.at("output-ls-requests-lsa");
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks != nullptr)
        {
            children["output-lsa-acks"] = output_lsa_acks;
        }
        else
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks>();
            output_lsa_acks->parent = this;
            children["output-lsa-acks"] = output_lsa_acks;
        }
        return children.at("output-lsa-acks");
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa != nullptr)
        {
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
        else
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa>();
            output_lsa_acks_lsa->parent = this;
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
        return children.at("output-lsa-acks-lsa");
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates != nullptr)
        {
            children["output-lsa-updates"] = output_lsa_updates;
        }
        else
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates>();
            output_lsa_updates->parent = this;
            children["output-lsa-updates"] = output_lsa_updates;
        }
        return children.at("output-lsa-updates");
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa != nullptr)
        {
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
        else
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa>();
            output_lsa_updates_lsa->parent = this;
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
        return children.at("output-lsa-updates-lsa");
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets != nullptr)
        {
            children["output-packets"] = output_packets;
        }
        else
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets>();
            output_packets->parent = this;
            children["output-packets"] = output_packets;
        }
        return children.at("output-packets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_children()
{
    if(children.find("input-db-ds") == children.end())
    {
        if(input_db_ds != nullptr)
        {
            children["input-db-ds"] = input_db_ds;
        }
    }

    if(children.find("input-db-ds-lsa") == children.end())
    {
        if(input_db_ds_lsa != nullptr)
        {
            children["input-db-ds-lsa"] = input_db_ds_lsa;
        }
    }

    if(children.find("input-hello-packets") == children.end())
    {
        if(input_hello_packets != nullptr)
        {
            children["input-hello-packets"] = input_hello_packets;
        }
    }

    if(children.find("input-ls-requests") == children.end())
    {
        if(input_ls_requests != nullptr)
        {
            children["input-ls-requests"] = input_ls_requests;
        }
    }

    if(children.find("input-ls-requests-lsa") == children.end())
    {
        if(input_ls_requests_lsa != nullptr)
        {
            children["input-ls-requests-lsa"] = input_ls_requests_lsa;
        }
    }

    if(children.find("input-lsa-acks") == children.end())
    {
        if(input_lsa_acks != nullptr)
        {
            children["input-lsa-acks"] = input_lsa_acks;
        }
    }

    if(children.find("input-lsa-acks-lsa") == children.end())
    {
        if(input_lsa_acks_lsa != nullptr)
        {
            children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
        }
    }

    if(children.find("input-lsa-updates") == children.end())
    {
        if(input_lsa_updates != nullptr)
        {
            children["input-lsa-updates"] = input_lsa_updates;
        }
    }

    if(children.find("input-lsa-updates-lsa") == children.end())
    {
        if(input_lsa_updates_lsa != nullptr)
        {
            children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
        }
    }

    if(children.find("input-packets") == children.end())
    {
        if(input_packets != nullptr)
        {
            children["input-packets"] = input_packets;
        }
    }

    if(children.find("output-db-ds") == children.end())
    {
        if(output_db_ds != nullptr)
        {
            children["output-db-ds"] = output_db_ds;
        }
    }

    if(children.find("output-db-ds-lsa") == children.end())
    {
        if(output_db_ds_lsa != nullptr)
        {
            children["output-db-ds-lsa"] = output_db_ds_lsa;
        }
    }

    if(children.find("output-hello-packets") == children.end())
    {
        if(output_hello_packets != nullptr)
        {
            children["output-hello-packets"] = output_hello_packets;
        }
    }

    if(children.find("output-ls-requests") == children.end())
    {
        if(output_ls_requests != nullptr)
        {
            children["output-ls-requests"] = output_ls_requests;
        }
    }

    if(children.find("output-ls-requests-lsa") == children.end())
    {
        if(output_ls_requests_lsa != nullptr)
        {
            children["output-ls-requests-lsa"] = output_ls_requests_lsa;
        }
    }

    if(children.find("output-lsa-acks") == children.end())
    {
        if(output_lsa_acks != nullptr)
        {
            children["output-lsa-acks"] = output_lsa_acks;
        }
    }

    if(children.find("output-lsa-acks-lsa") == children.end())
    {
        if(output_lsa_acks_lsa != nullptr)
        {
            children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
        }
    }

    if(children.find("output-lsa-updates") == children.end())
    {
        if(output_lsa_updates != nullptr)
        {
            children["output-lsa-updates"] = output_lsa_updates;
        }
    }

    if(children.find("output-lsa-updates-lsa") == children.end())
    {
        if(output_lsa_updates_lsa != nullptr)
        {
            children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
        }
    }

    if(children.find("output-packets") == children.end())
    {
        if(output_packets != nullptr)
        {
            children["output-packets"] = output_packets;
        }
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
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
    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaAcksLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputDbDsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputDbDsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaUpdates' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-db-ds"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputDbDs' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaUpdatesLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-db-ds"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputDbDs' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaUpdatesLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-packets"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-packets"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-hello-packets"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-hello-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputHelloPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-hello-packets"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-hello-packets";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputHelloPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-ls-requests"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsRequests' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaAcksLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaAcks' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsaAcks' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsaUpdates' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputLsRequestsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests-lsa";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsRequestsLsa' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    yang_name = "input-ls-requests"; yang_parent_name = "ospfv3-protocol-template";
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
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests";

    return path_buffer.str();

}

EntityPath PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputLsRequests' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_children()
{
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}


}
}

