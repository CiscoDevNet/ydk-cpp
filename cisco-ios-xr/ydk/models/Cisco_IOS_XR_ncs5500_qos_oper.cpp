
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_qos_oper {

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::PolicyDetails()
    :
    	interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
	 interface_handle{YType::uint32, "interface-handle"},
	 interface_status{YType::enumeration, "interface-status"},
	 npu_id{YType::uint32, "npu-id"},
	 policy_name{YType::str, "policy-name"},
	 policy_status{YType::enumeration, "policy-status"},
	 stats_accounting_type{YType::enumeration, "stats-accounting-type"},
	 total_number_of_classes{YType::uint16, "total-number-of-classes"},
	 voq_base_address{YType::uint32, "voq-base-address"},
	 voq_stats_handle{YType::uint64, "voq-stats-handle"}
{
    yang_name = "policy-details"; yang_parent_name = "member-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::has_data() const
{
    return interface_bandwidth_kbps.is_set
	|| interface_handle.is_set
	|| interface_status.is_set
	|| npu_id.is_set
	|| policy_name.is_set
	|| policy_status.is_set
	|| stats_accounting_type.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_bandwidth_kbps.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_status.operation)
	|| is_set(npu_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(policy_status.operation)
	|| is_set(stats_accounting_type.operation)
	|| is_set(total_number_of_classes.operation)
	|| is_set(voq_base_address.operation)
	|| is_set(voq_stats_handle.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.operation)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.operation)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.operation)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.operation)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.operation)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.operation)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::ConfigMaxRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::ConfigMinRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::ConfigQueueLimit()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-queue-limit"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-average-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-peak-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-conform-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-excess-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "conform-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::ConformAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "conform-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "exceed-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::ExceedAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "exceed-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "violate-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::ViolateAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "violate-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::IpMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "ip-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::CommonMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "common-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::MplsMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mpls-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    	range_end{YType::uint8, "range-end"},
	 range_start{YType::uint8, "range-start"}
{
    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(operation)
	|| is_set(range_end.operation)
	|| is_set(range_start.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.operation)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range-end")
    {
        range_end = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::WredMatchValue()
{
    yang_name = "wred-match-value"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        for(auto const & c : dnx_qosea_show_red_match_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(std::move(c));
        children[segment_path] = dnx_qosea_show_red_match_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::get_children()
{
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::Wred()
    :
    	first_segment{YType::uint16, "first-segment"},
	 hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
	 hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
	 segment_size{YType::uint32, "segment-size"},
	 wred_match_type{YType::enumeration, "wred-match-type"}
    	,
    config_max_threshold(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold>())
	,config_min_threshold(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold>())
	,wred_match_value(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue>())
{
    config_max_threshold->parent = this;
    children["config-max-threshold"] = config_max_threshold.get();

    config_min_threshold->parent = this;
    children["config-min-threshold"] = config_min_threshold.get();

    wred_match_value->parent = this;
    children["wred-match-value"] = wred_match_value.get();

    yang_name = "wred"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::has_data() const
{
    return first_segment.is_set
	|| hardware_max_threshold_bytes.is_set
	|| hardware_min_threshold_bytes.is_set
	|| segment_size.is_set
	|| wred_match_type.is_set
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (wred_match_value !=  nullptr && wred_match_value->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::has_operation() const
{
    return is_set(operation)
	|| is_set(first_segment.operation)
	|| is_set(hardware_max_threshold_bytes.operation)
	|| is_set(hardware_min_threshold_bytes.operation)
	|| is_set(segment_size.operation)
	|| is_set(wred_match_type.operation)
	|| (config_max_threshold !=  nullptr && is_set(config_max_threshold->operation))
	|| (config_min_threshold !=  nullptr && is_set(config_min_threshold->operation))
	|| (wred_match_value !=  nullptr && is_set(wred_match_value->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_segment.is_set || is_set(first_segment.operation)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.operation)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.operation)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.operation)) leaf_name_data.push_back(segment_size.get_name_leafdata());
    if (wred_match_type.is_set || is_set(wred_match_type.operation)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
        else
        {
            config_max_threshold = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold>();
            config_max_threshold->parent = this;
            children["config-max-threshold"] = config_max_threshold.get();
        }
        return children.at("config-max-threshold");
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
        else
        {
            config_min_threshold = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold>();
            config_min_threshold->parent = this;
            children["config-min-threshold"] = config_min_threshold.get();
        }
        return children.at("config-min-threshold");
    }

    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
        else
        {
            wred_match_value = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue>();
            wred_match_value->parent = this;
            children["wred-match-value"] = wred_match_value.get();
        }
        return children.at("wred-match-value");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::get_children()
{
    if(children.find("config-max-threshold") == children.end())
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
    }

    if(children.find("config-min-threshold") == children.end())
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
    }

    if(children.find("wred-match-value") == children.end())
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-segment")
    {
        first_segment = value;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
    }
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Class_()
    :
    	level_one_class_name{YType::str, "level-one-class-name"},
	 class_level{YType::enumeration, "class-level"},
	 config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
	 config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
	 egress_queue_id{YType::int32, "egress-queue-id"},
	 hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
	 hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
	 hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
	 hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
	 hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
	 hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"},
	 hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
	 hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
	 hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
	 level_two_class_name{YType::str, "level-two-class-name"},
	 network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
	 policer_bucket_id{YType::uint32, "policer-bucket-id"},
	 policer_stats_handle{YType::uint64, "policer-stats-handle"},
	 priority_level{YType::enumeration, "priority-level"},
	 queue_type{YType::enumeration, "queue-type"}
    	,
    config_max_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate>())
	,config_min_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate>())
	,config_policer_average_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate>())
	,config_policer_conform_burst(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst>())
	,config_policer_peak_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate>())
	,config_queue_limit(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit>())
	,conform_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction>())
	,exceed_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction>())
	,violate_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction>())
{
    config_max_rate->parent = this;
    children["config-max-rate"] = config_max_rate.get();

    config_min_rate->parent = this;
    children["config-min-rate"] = config_min_rate.get();

    config_policer_average_rate->parent = this;
    children["config-policer-average-rate"] = config_policer_average_rate.get();

    config_policer_conform_burst->parent = this;
    children["config-policer-conform-burst"] = config_policer_conform_burst.get();

    config_policer_excess_burst->parent = this;
    children["config-policer-excess-burst"] = config_policer_excess_burst.get();

    config_policer_peak_rate->parent = this;
    children["config-policer-peak-rate"] = config_policer_peak_rate.get();

    config_queue_limit->parent = this;
    children["config-queue-limit"] = config_queue_limit.get();

    conform_action->parent = this;
    children["conform-action"] = conform_action.get();

    exceed_action->parent = this;
    children["exceed-action"] = exceed_action.get();

    violate_action->parent = this;
    children["violate-action"] = violate_action.get();

    yang_name = "class"; yang_parent_name = "classes";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::~Class_()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::has_data() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| class_level.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| egress_queue_id.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| level_two_class_name.is_set
	|| network_min_bandwidth_kbps.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| priority_level.is_set
	|| queue_type.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::has_operation() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(level_one_class_name.operation)
	|| is_set(class_level.operation)
	|| is_set(config_excess_bandwidth_percent.operation)
	|| is_set(config_excess_bandwidth_unit.operation)
	|| is_set(egress_queue_id.operation)
	|| is_set(hardware_excess_bandwidth_weight.operation)
	|| is_set(hardware_max_rate_kbps.operation)
	|| is_set(hardware_min_rate_kbps.operation)
	|| is_set(hardware_policer_average_rate_kbps.operation)
	|| is_set(hardware_policer_conform_burst_bytes.operation)
	|| is_set(hardware_policer_excess_burst_bytes.operation)
	|| is_set(hardware_policer_peak_rate_kbps.operation)
	|| is_set(hardware_queue_limit_bytes.operation)
	|| is_set(hardware_queue_limit_microseconds.operation)
	|| is_set(level_two_class_name.operation)
	|| is_set(network_min_bandwidth_kbps.operation)
	|| is_set(policer_bucket_id.operation)
	|| is_set(policer_stats_handle.operation)
	|| is_set(priority_level.operation)
	|| is_set(queue_type.operation)
	|| (config_max_rate !=  nullptr && is_set(config_max_rate->operation))
	|| (config_min_rate !=  nullptr && is_set(config_min_rate->operation))
	|| (config_policer_average_rate !=  nullptr && is_set(config_policer_average_rate->operation))
	|| (config_policer_conform_burst !=  nullptr && is_set(config_policer_conform_burst->operation))
	|| (config_policer_excess_burst !=  nullptr && is_set(config_policer_excess_burst->operation))
	|| (config_policer_peak_rate !=  nullptr && is_set(config_policer_peak_rate->operation))
	|| (config_queue_limit !=  nullptr && is_set(config_queue_limit->operation))
	|| (conform_action !=  nullptr && is_set(conform_action->operation))
	|| (exceed_action !=  nullptr && is_set(exceed_action->operation))
	|| (violate_action !=  nullptr && is_set(violate_action->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.operation)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.operation)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.operation)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.operation)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.operation)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.operation)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.operation)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.operation)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.operation)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.operation)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.operation)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.operation)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.operation)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-mark")
    {
        for(auto const & c : common_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark>();
        c->parent = this;
        common_mark.push_back(std::move(c));
        children[segment_path] = common_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
        else
        {
            config_max_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate>();
            config_max_rate->parent = this;
            children["config-max-rate"] = config_max_rate.get();
        }
        return children.at("config-max-rate");
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
        else
        {
            config_min_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate>();
            config_min_rate->parent = this;
            children["config-min-rate"] = config_min_rate.get();
        }
        return children.at("config-min-rate");
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        else
        {
            config_policer_average_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate>();
            config_policer_average_rate->parent = this;
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        return children.at("config-policer-average-rate");
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        else
        {
            config_policer_conform_burst = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst>();
            config_policer_conform_burst->parent = this;
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        return children.at("config-policer-conform-burst");
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        else
        {
            config_policer_excess_burst = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst>();
            config_policer_excess_burst->parent = this;
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        return children.at("config-policer-excess-burst");
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        else
        {
            config_policer_peak_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate>();
            config_policer_peak_rate->parent = this;
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        return children.at("config-policer-peak-rate");
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
        else
        {
            config_queue_limit = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit>();
            config_queue_limit->parent = this;
            children["config-queue-limit"] = config_queue_limit.get();
        }
        return children.at("config-queue-limit");
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
        else
        {
            conform_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction>();
            conform_action->parent = this;
            children["conform-action"] = conform_action.get();
        }
        return children.at("conform-action");
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
        else
        {
            exceed_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction>();
            exceed_action->parent = this;
            children["exceed-action"] = exceed_action.get();
        }
        return children.at("exceed-action");
    }

    if(child_yang_name == "ip-mark")
    {
        for(auto const & c : ip_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark>();
        c->parent = this;
        ip_mark.push_back(std::move(c));
        children[segment_path] = ip_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-mark")
    {
        for(auto const & c : mpls_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(std::move(c));
        children[segment_path] = mpls_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
        else
        {
            violate_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction>();
            violate_action->parent = this;
            children["violate-action"] = violate_action.get();
        }
        return children.at("violate-action");
    }

    if(child_yang_name == "wred")
    {
        for(auto const & c : wred)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred>();
        c->parent = this;
        wred.push_back(std::move(c));
        children[segment_path] = wred.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::get_children()
{
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("config-max-rate") == children.end())
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
    }

    if(children.find("config-min-rate") == children.end())
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
    }

    if(children.find("config-policer-average-rate") == children.end())
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
    }

    if(children.find("config-policer-conform-burst") == children.end())
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
    }

    if(children.find("config-policer-excess-burst") == children.end())
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
    }

    if(children.find("config-policer-peak-rate") == children.end())
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
    }

    if(children.find("config-queue-limit") == children.end())
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
    }

    if(children.find("conform-action") == children.end())
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
    }

    if(children.find("exceed-action") == children.end())
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
    }

    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("violate-action") == children.end())
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
    }

    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
    }
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "member-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    classes(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes>())
	,policy_details(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails>())
{
    classes->parent = this;
    children["classes"] = classes.get();

    policy_details->parent = this;
    children["policy-details"] = policy_details.get();

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (classes !=  nullptr && classes->has_data())
	|| (policy_details !=  nullptr && policy_details->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (classes !=  nullptr && is_set(classes->operation))
	|| (policy_details !=  nullptr && is_set(policy_details->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
        else
        {
            classes = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes>();
            classes->parent = this;
            children["classes"] = classes.get();
        }
        return children.at("classes");
    }

    if(child_yang_name == "policy-details")
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
        else
        {
            policy_details = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails>();
            policy_details->parent = this;
            children["policy-details"] = policy_details.get();
        }
        return children.at("policy-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
    }

    if(children.find("policy-details") == children.end())
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(std::move(c));
        children[segment_path] = member_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children()
{
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::PolicyDetails()
    :
    	interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
	 interface_handle{YType::uint32, "interface-handle"},
	 interface_status{YType::enumeration, "interface-status"},
	 npu_id{YType::uint32, "npu-id"},
	 policy_name{YType::str, "policy-name"},
	 policy_status{YType::enumeration, "policy-status"},
	 stats_accounting_type{YType::enumeration, "stats-accounting-type"},
	 total_number_of_classes{YType::uint16, "total-number-of-classes"},
	 voq_base_address{YType::uint32, "voq-base-address"},
	 voq_stats_handle{YType::uint64, "voq-stats-handle"}
{
    yang_name = "policy-details"; yang_parent_name = "bundle-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::has_data() const
{
    return interface_bandwidth_kbps.is_set
	|| interface_handle.is_set
	|| interface_status.is_set
	|| npu_id.is_set
	|| policy_name.is_set
	|| policy_status.is_set
	|| stats_accounting_type.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_bandwidth_kbps.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_status.operation)
	|| is_set(npu_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(policy_status.operation)
	|| is_set(stats_accounting_type.operation)
	|| is_set(total_number_of_classes.operation)
	|| is_set(voq_base_address.operation)
	|| is_set(voq_stats_handle.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.operation)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.operation)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.operation)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.operation)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.operation)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.operation)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::ConfigMaxRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::ConfigMinRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::ConfigQueueLimit()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-queue-limit"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-average-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-peak-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-conform-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-excess-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "conform-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::ConformAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "conform-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "exceed-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::ExceedAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "exceed-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "violate-action";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::ViolateAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "violate-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::IpMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "ip-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::CommonMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "common-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::MplsMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mpls-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    	range_end{YType::uint8, "range-end"},
	 range_start{YType::uint8, "range-start"}
{
    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(operation)
	|| is_set(range_end.operation)
	|| is_set(range_start.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.operation)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range-end")
    {
        range_end = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::WredMatchValue()
{
    yang_name = "wred-match-value"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        for(auto const & c : dnx_qosea_show_red_match_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(std::move(c));
        children[segment_path] = dnx_qosea_show_red_match_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::get_children()
{
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::Wred()
    :
    	first_segment{YType::uint16, "first-segment"},
	 hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
	 hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
	 segment_size{YType::uint32, "segment-size"},
	 wred_match_type{YType::enumeration, "wred-match-type"}
    	,
    config_max_threshold(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold>())
	,config_min_threshold(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold>())
	,wred_match_value(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue>())
{
    config_max_threshold->parent = this;
    children["config-max-threshold"] = config_max_threshold.get();

    config_min_threshold->parent = this;
    children["config-min-threshold"] = config_min_threshold.get();

    wred_match_value->parent = this;
    children["wred-match-value"] = wred_match_value.get();

    yang_name = "wred"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::has_data() const
{
    return first_segment.is_set
	|| hardware_max_threshold_bytes.is_set
	|| hardware_min_threshold_bytes.is_set
	|| segment_size.is_set
	|| wred_match_type.is_set
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (wred_match_value !=  nullptr && wred_match_value->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::has_operation() const
{
    return is_set(operation)
	|| is_set(first_segment.operation)
	|| is_set(hardware_max_threshold_bytes.operation)
	|| is_set(hardware_min_threshold_bytes.operation)
	|| is_set(segment_size.operation)
	|| is_set(wred_match_type.operation)
	|| (config_max_threshold !=  nullptr && is_set(config_max_threshold->operation))
	|| (config_min_threshold !=  nullptr && is_set(config_min_threshold->operation))
	|| (wred_match_value !=  nullptr && is_set(wred_match_value->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_segment.is_set || is_set(first_segment.operation)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.operation)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.operation)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.operation)) leaf_name_data.push_back(segment_size.get_name_leafdata());
    if (wred_match_type.is_set || is_set(wred_match_type.operation)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
        else
        {
            config_max_threshold = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold>();
            config_max_threshold->parent = this;
            children["config-max-threshold"] = config_max_threshold.get();
        }
        return children.at("config-max-threshold");
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
        else
        {
            config_min_threshold = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold>();
            config_min_threshold->parent = this;
            children["config-min-threshold"] = config_min_threshold.get();
        }
        return children.at("config-min-threshold");
    }

    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
        else
        {
            wred_match_value = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue>();
            wred_match_value->parent = this;
            children["wred-match-value"] = wred_match_value.get();
        }
        return children.at("wred-match-value");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::get_children()
{
    if(children.find("config-max-threshold") == children.end())
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
    }

    if(children.find("config-min-threshold") == children.end())
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
    }

    if(children.find("wred-match-value") == children.end())
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-segment")
    {
        first_segment = value;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
    }
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Class_()
    :
    	level_one_class_name{YType::str, "level-one-class-name"},
	 class_level{YType::enumeration, "class-level"},
	 config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
	 config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
	 egress_queue_id{YType::int32, "egress-queue-id"},
	 hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
	 hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
	 hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
	 hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
	 hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
	 hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"},
	 hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
	 hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
	 hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
	 level_two_class_name{YType::str, "level-two-class-name"},
	 network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
	 policer_bucket_id{YType::uint32, "policer-bucket-id"},
	 policer_stats_handle{YType::uint64, "policer-stats-handle"},
	 priority_level{YType::enumeration, "priority-level"},
	 queue_type{YType::enumeration, "queue-type"}
    	,
    config_max_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate>())
	,config_min_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate>())
	,config_policer_average_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate>())
	,config_policer_conform_burst(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst>())
	,config_policer_peak_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate>())
	,config_queue_limit(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit>())
	,conform_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction>())
	,exceed_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction>())
	,violate_action(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction>())
{
    config_max_rate->parent = this;
    children["config-max-rate"] = config_max_rate.get();

    config_min_rate->parent = this;
    children["config-min-rate"] = config_min_rate.get();

    config_policer_average_rate->parent = this;
    children["config-policer-average-rate"] = config_policer_average_rate.get();

    config_policer_conform_burst->parent = this;
    children["config-policer-conform-burst"] = config_policer_conform_burst.get();

    config_policer_excess_burst->parent = this;
    children["config-policer-excess-burst"] = config_policer_excess_burst.get();

    config_policer_peak_rate->parent = this;
    children["config-policer-peak-rate"] = config_policer_peak_rate.get();

    config_queue_limit->parent = this;
    children["config-queue-limit"] = config_queue_limit.get();

    conform_action->parent = this;
    children["conform-action"] = conform_action.get();

    exceed_action->parent = this;
    children["exceed-action"] = exceed_action.get();

    violate_action->parent = this;
    children["violate-action"] = violate_action.get();

    yang_name = "class"; yang_parent_name = "classes";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::~Class_()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::has_data() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| class_level.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| egress_queue_id.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| level_two_class_name.is_set
	|| network_min_bandwidth_kbps.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| priority_level.is_set
	|| queue_type.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::has_operation() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(level_one_class_name.operation)
	|| is_set(class_level.operation)
	|| is_set(config_excess_bandwidth_percent.operation)
	|| is_set(config_excess_bandwidth_unit.operation)
	|| is_set(egress_queue_id.operation)
	|| is_set(hardware_excess_bandwidth_weight.operation)
	|| is_set(hardware_max_rate_kbps.operation)
	|| is_set(hardware_min_rate_kbps.operation)
	|| is_set(hardware_policer_average_rate_kbps.operation)
	|| is_set(hardware_policer_conform_burst_bytes.operation)
	|| is_set(hardware_policer_excess_burst_bytes.operation)
	|| is_set(hardware_policer_peak_rate_kbps.operation)
	|| is_set(hardware_queue_limit_bytes.operation)
	|| is_set(hardware_queue_limit_microseconds.operation)
	|| is_set(level_two_class_name.operation)
	|| is_set(network_min_bandwidth_kbps.operation)
	|| is_set(policer_bucket_id.operation)
	|| is_set(policer_stats_handle.operation)
	|| is_set(priority_level.operation)
	|| is_set(queue_type.operation)
	|| (config_max_rate !=  nullptr && is_set(config_max_rate->operation))
	|| (config_min_rate !=  nullptr && is_set(config_min_rate->operation))
	|| (config_policer_average_rate !=  nullptr && is_set(config_policer_average_rate->operation))
	|| (config_policer_conform_burst !=  nullptr && is_set(config_policer_conform_burst->operation))
	|| (config_policer_excess_burst !=  nullptr && is_set(config_policer_excess_burst->operation))
	|| (config_policer_peak_rate !=  nullptr && is_set(config_policer_peak_rate->operation))
	|| (config_queue_limit !=  nullptr && is_set(config_queue_limit->operation))
	|| (conform_action !=  nullptr && is_set(conform_action->operation))
	|| (exceed_action !=  nullptr && is_set(exceed_action->operation))
	|| (violate_action !=  nullptr && is_set(violate_action->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.operation)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.operation)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.operation)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.operation)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.operation)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.operation)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.operation)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.operation)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.operation)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.operation)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.operation)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.operation)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.operation)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-mark")
    {
        for(auto const & c : common_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark>();
        c->parent = this;
        common_mark.push_back(std::move(c));
        children[segment_path] = common_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
        else
        {
            config_max_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate>();
            config_max_rate->parent = this;
            children["config-max-rate"] = config_max_rate.get();
        }
        return children.at("config-max-rate");
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
        else
        {
            config_min_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate>();
            config_min_rate->parent = this;
            children["config-min-rate"] = config_min_rate.get();
        }
        return children.at("config-min-rate");
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        else
        {
            config_policer_average_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate>();
            config_policer_average_rate->parent = this;
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        return children.at("config-policer-average-rate");
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        else
        {
            config_policer_conform_burst = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst>();
            config_policer_conform_burst->parent = this;
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        return children.at("config-policer-conform-burst");
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        else
        {
            config_policer_excess_burst = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst>();
            config_policer_excess_burst->parent = this;
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        return children.at("config-policer-excess-burst");
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        else
        {
            config_policer_peak_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate>();
            config_policer_peak_rate->parent = this;
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        return children.at("config-policer-peak-rate");
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
        else
        {
            config_queue_limit = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit>();
            config_queue_limit->parent = this;
            children["config-queue-limit"] = config_queue_limit.get();
        }
        return children.at("config-queue-limit");
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
        else
        {
            conform_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction>();
            conform_action->parent = this;
            children["conform-action"] = conform_action.get();
        }
        return children.at("conform-action");
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
        else
        {
            exceed_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction>();
            exceed_action->parent = this;
            children["exceed-action"] = exceed_action.get();
        }
        return children.at("exceed-action");
    }

    if(child_yang_name == "ip-mark")
    {
        for(auto const & c : ip_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark>();
        c->parent = this;
        ip_mark.push_back(std::move(c));
        children[segment_path] = ip_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-mark")
    {
        for(auto const & c : mpls_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(std::move(c));
        children[segment_path] = mpls_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
        else
        {
            violate_action = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction>();
            violate_action->parent = this;
            children["violate-action"] = violate_action.get();
        }
        return children.at("violate-action");
    }

    if(child_yang_name == "wred")
    {
        for(auto const & c : wred)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred>();
        c->parent = this;
        wred.push_back(std::move(c));
        children[segment_path] = wred.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::get_children()
{
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("config-max-rate") == children.end())
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
    }

    if(children.find("config-min-rate") == children.end())
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
    }

    if(children.find("config-policer-average-rate") == children.end())
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
    }

    if(children.find("config-policer-conform-burst") == children.end())
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
    }

    if(children.find("config-policer-excess-burst") == children.end())
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
    }

    if(children.find("config-policer-peak-rate") == children.end())
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
    }

    if(children.find("config-queue-limit") == children.end())
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
    }

    if(children.find("conform-action") == children.end())
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
    }

    if(children.find("exceed-action") == children.end())
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
    }

    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("violate-action") == children.end())
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
    }

    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
    }
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "bundle-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    	interface_name{YType::str, "interface-name"},
	 npu_id{YType::int32, "npu-id"},
	 qos_direction{YType::str, "qos-direction"}
    	,
    classes(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes>())
	,member_interfaces(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
	,policy_details(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>())
{
    classes->parent = this;
    children["classes"] = classes.get();

    member_interfaces->parent = this;
    children["member-interfaces"] = member_interfaces.get();

    policy_details->parent = this;
    children["policy-details"] = policy_details.get();

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| npu_id.is_set
	|| qos_direction.is_set
	|| (classes !=  nullptr && classes->has_data())
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (policy_details !=  nullptr && policy_details->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(npu_id.operation)
	|| is_set(qos_direction.operation)
	|| (classes !=  nullptr && is_set(classes->operation))
	|| (member_interfaces !=  nullptr && is_set(member_interfaces->operation))
	|| (policy_details !=  nullptr && is_set(policy_details->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (qos_direction.is_set || is_set(qos_direction.operation)) leaf_name_data.push_back(qos_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
        else
        {
            classes = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes>();
            classes->parent = this;
            children["classes"] = classes.get();
        }
        return children.at("classes");
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
        else
        {
            member_interfaces = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
            member_interfaces->parent = this;
            children["member-interfaces"] = member_interfaces.get();
        }
        return children.at("member-interfaces");
    }

    if(child_yang_name == "policy-details")
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
        else
        {
            policy_details = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>();
            policy_details->parent = this;
            children["policy-details"] = policy_details.get();
        }
        return children.at("policy-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
    }

    if(children.find("member-interfaces") == children.end())
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
    }

    if(children.find("policy-details") == children.end())
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "qos-direction")
    {
        qos_direction = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(std::move(c));
        children[segment_path] = bundle_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::get_children()
{
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::PolicyDetails()
    :
    	interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
	 interface_handle{YType::uint32, "interface-handle"},
	 interface_status{YType::enumeration, "interface-status"},
	 npu_id{YType::uint32, "npu-id"},
	 policy_name{YType::str, "policy-name"},
	 policy_status{YType::enumeration, "policy-status"},
	 stats_accounting_type{YType::enumeration, "stats-accounting-type"},
	 total_number_of_classes{YType::uint16, "total-number-of-classes"},
	 voq_base_address{YType::uint32, "voq-base-address"},
	 voq_stats_handle{YType::uint64, "voq-stats-handle"}
{
    yang_name = "policy-details"; yang_parent_name = "interface";
}

PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::has_data() const
{
    return interface_bandwidth_kbps.is_set
	|| interface_handle.is_set
	|| interface_status.is_set
	|| npu_id.is_set
	|| policy_name.is_set
	|| policy_status.is_set
	|| stats_accounting_type.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_bandwidth_kbps.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_status.operation)
	|| is_set(npu_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(policy_status.operation)
	|| is_set(stats_accounting_type.operation)
	|| is_set(total_number_of_classes.operation)
	|| is_set(voq_base_address.operation)
	|| is_set(voq_stats_handle.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.operation)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.operation)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.operation)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.operation)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.operation)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.operation)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::ConfigMaxRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::ConfigMinRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::ConfigQueueLimit()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-queue-limit"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-average-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-peak-rate"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-conform-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-policer-excess-burst"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "conform-action";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::ConformAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "conform-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "exceed-action";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::ExceedAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "exceed-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::Mark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mark"; yang_parent_name = "violate-action";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::ViolateAction()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "violate-action"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        for(auto const & c : mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(std::move(c));
        children[segment_path] = mark.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::get_children()
{
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::IpMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "ip-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::CommonMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "common-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::MplsMark()
    :
    	mark_type{YType::enumeration, "mark-type"},
	 mark_value{YType::uint16, "mark-value"}
{
    yang_name = "mpls-mark"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_type.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.operation)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    	range_end{YType::uint8, "range-end"},
	 range_start{YType::uint8, "range-start"}
{
    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(operation)
	|| is_set(range_end.operation)
	|| is_set(range_start.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.operation)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range-end")
    {
        range_end = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::WredMatchValue()
{
    yang_name = "wred-match-value"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        for(auto const & c : dnx_qosea_show_red_match_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(std::move(c));
        children[segment_path] = dnx_qosea_show_red_match_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::get_children()
{
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-min-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    	policy_unit{YType::enumeration, "policy-unit"},
	 policy_value{YType::uint32, "policy-value"}
{
    yang_name = "config-max-threshold"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_unit.is_set
	|| policy_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_unit.operation)
	|| is_set(policy_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_unit.is_set || is_set(policy_unit.operation)) leaf_name_data.push_back(policy_unit.get_name_leafdata());
    if (policy_value.is_set || is_set(policy_value.operation)) leaf_name_data.push_back(policy_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-unit")
    {
        policy_unit = value;
    }
    if(value_path == "policy-value")
    {
        policy_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::Wred()
    :
    	first_segment{YType::uint16, "first-segment"},
	 hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
	 hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
	 segment_size{YType::uint32, "segment-size"},
	 wred_match_type{YType::enumeration, "wred-match-type"}
    	,
    config_max_threshold(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold>())
	,config_min_threshold(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold>())
	,wred_match_value(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue>())
{
    config_max_threshold->parent = this;
    children["config-max-threshold"] = config_max_threshold.get();

    config_min_threshold->parent = this;
    children["config-min-threshold"] = config_min_threshold.get();

    wred_match_value->parent = this;
    children["wred-match-value"] = wred_match_value.get();

    yang_name = "wred"; yang_parent_name = "class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::has_data() const
{
    return first_segment.is_set
	|| hardware_max_threshold_bytes.is_set
	|| hardware_min_threshold_bytes.is_set
	|| segment_size.is_set
	|| wred_match_type.is_set
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (wred_match_value !=  nullptr && wred_match_value->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::has_operation() const
{
    return is_set(operation)
	|| is_set(first_segment.operation)
	|| is_set(hardware_max_threshold_bytes.operation)
	|| is_set(hardware_min_threshold_bytes.operation)
	|| is_set(segment_size.operation)
	|| is_set(wred_match_type.operation)
	|| (config_max_threshold !=  nullptr && is_set(config_max_threshold->operation))
	|| (config_min_threshold !=  nullptr && is_set(config_min_threshold->operation))
	|| (wred_match_value !=  nullptr && is_set(wred_match_value->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_segment.is_set || is_set(first_segment.operation)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.operation)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.operation)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.operation)) leaf_name_data.push_back(segment_size.get_name_leafdata());
    if (wred_match_type.is_set || is_set(wred_match_type.operation)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
        else
        {
            config_max_threshold = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold>();
            config_max_threshold->parent = this;
            children["config-max-threshold"] = config_max_threshold.get();
        }
        return children.at("config-max-threshold");
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
        else
        {
            config_min_threshold = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold>();
            config_min_threshold->parent = this;
            children["config-min-threshold"] = config_min_threshold.get();
        }
        return children.at("config-min-threshold");
    }

    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
        else
        {
            wred_match_value = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue>();
            wred_match_value->parent = this;
            children["wred-match-value"] = wred_match_value.get();
        }
        return children.at("wred-match-value");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::get_children()
{
    if(children.find("config-max-threshold") == children.end())
    {
        if(config_max_threshold != nullptr)
        {
            children["config-max-threshold"] = config_max_threshold.get();
        }
    }

    if(children.find("config-min-threshold") == children.end())
    {
        if(config_min_threshold != nullptr)
        {
            children["config-min-threshold"] = config_min_threshold.get();
        }
    }

    if(children.find("wred-match-value") == children.end())
    {
        if(wred_match_value != nullptr)
        {
            children["wred-match-value"] = wred_match_value.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-segment")
    {
        first_segment = value;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
    }
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Class_()
    :
    	level_one_class_name{YType::str, "level-one-class-name"},
	 class_level{YType::enumeration, "class-level"},
	 config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
	 config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
	 egress_queue_id{YType::int32, "egress-queue-id"},
	 hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
	 hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
	 hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
	 hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
	 hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
	 hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"},
	 hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
	 hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
	 hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
	 level_two_class_name{YType::str, "level-two-class-name"},
	 network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
	 policer_bucket_id{YType::uint32, "policer-bucket-id"},
	 policer_stats_handle{YType::uint64, "policer-stats-handle"},
	 priority_level{YType::enumeration, "priority-level"},
	 queue_type{YType::enumeration, "queue-type"}
    	,
    config_max_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate>())
	,config_min_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate>())
	,config_policer_average_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate>())
	,config_policer_conform_burst(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst>())
	,config_policer_peak_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate>())
	,config_queue_limit(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit>())
	,conform_action(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction>())
	,exceed_action(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction>())
	,violate_action(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction>())
{
    config_max_rate->parent = this;
    children["config-max-rate"] = config_max_rate.get();

    config_min_rate->parent = this;
    children["config-min-rate"] = config_min_rate.get();

    config_policer_average_rate->parent = this;
    children["config-policer-average-rate"] = config_policer_average_rate.get();

    config_policer_conform_burst->parent = this;
    children["config-policer-conform-burst"] = config_policer_conform_burst.get();

    config_policer_excess_burst->parent = this;
    children["config-policer-excess-burst"] = config_policer_excess_burst.get();

    config_policer_peak_rate->parent = this;
    children["config-policer-peak-rate"] = config_policer_peak_rate.get();

    config_queue_limit->parent = this;
    children["config-queue-limit"] = config_queue_limit.get();

    conform_action->parent = this;
    children["conform-action"] = conform_action.get();

    exceed_action->parent = this;
    children["exceed-action"] = exceed_action.get();

    violate_action->parent = this;
    children["violate-action"] = violate_action.get();

    yang_name = "class"; yang_parent_name = "classes";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::~Class_()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::has_data() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| class_level.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| egress_queue_id.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| level_two_class_name.is_set
	|| network_min_bandwidth_kbps.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| priority_level.is_set
	|| queue_type.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::has_operation() const
{
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(level_one_class_name.operation)
	|| is_set(class_level.operation)
	|| is_set(config_excess_bandwidth_percent.operation)
	|| is_set(config_excess_bandwidth_unit.operation)
	|| is_set(egress_queue_id.operation)
	|| is_set(hardware_excess_bandwidth_weight.operation)
	|| is_set(hardware_max_rate_kbps.operation)
	|| is_set(hardware_min_rate_kbps.operation)
	|| is_set(hardware_policer_average_rate_kbps.operation)
	|| is_set(hardware_policer_conform_burst_bytes.operation)
	|| is_set(hardware_policer_excess_burst_bytes.operation)
	|| is_set(hardware_policer_peak_rate_kbps.operation)
	|| is_set(hardware_queue_limit_bytes.operation)
	|| is_set(hardware_queue_limit_microseconds.operation)
	|| is_set(level_two_class_name.operation)
	|| is_set(network_min_bandwidth_kbps.operation)
	|| is_set(policer_bucket_id.operation)
	|| is_set(policer_stats_handle.operation)
	|| is_set(priority_level.operation)
	|| is_set(queue_type.operation)
	|| (config_max_rate !=  nullptr && is_set(config_max_rate->operation))
	|| (config_min_rate !=  nullptr && is_set(config_min_rate->operation))
	|| (config_policer_average_rate !=  nullptr && is_set(config_policer_average_rate->operation))
	|| (config_policer_conform_burst !=  nullptr && is_set(config_policer_conform_burst->operation))
	|| (config_policer_excess_burst !=  nullptr && is_set(config_policer_excess_burst->operation))
	|| (config_policer_peak_rate !=  nullptr && is_set(config_policer_peak_rate->operation))
	|| (config_queue_limit !=  nullptr && is_set(config_queue_limit->operation))
	|| (conform_action !=  nullptr && is_set(conform_action->operation))
	|| (exceed_action !=  nullptr && is_set(exceed_action->operation))
	|| (violate_action !=  nullptr && is_set(violate_action->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.operation)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.operation)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.operation)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.operation)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.operation)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.operation)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.operation)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.operation)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.operation)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.operation)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.operation)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.operation)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.operation)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.operation)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.operation)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-mark")
    {
        for(auto const & c : common_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark>();
        c->parent = this;
        common_mark.push_back(std::move(c));
        children[segment_path] = common_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
        else
        {
            config_max_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate>();
            config_max_rate->parent = this;
            children["config-max-rate"] = config_max_rate.get();
        }
        return children.at("config-max-rate");
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
        else
        {
            config_min_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate>();
            config_min_rate->parent = this;
            children["config-min-rate"] = config_min_rate.get();
        }
        return children.at("config-min-rate");
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        else
        {
            config_policer_average_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate>();
            config_policer_average_rate->parent = this;
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
        return children.at("config-policer-average-rate");
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        else
        {
            config_policer_conform_burst = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst>();
            config_policer_conform_burst->parent = this;
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
        return children.at("config-policer-conform-burst");
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        else
        {
            config_policer_excess_burst = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst>();
            config_policer_excess_burst->parent = this;
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
        return children.at("config-policer-excess-burst");
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        else
        {
            config_policer_peak_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate>();
            config_policer_peak_rate->parent = this;
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
        return children.at("config-policer-peak-rate");
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
        else
        {
            config_queue_limit = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit>();
            config_queue_limit->parent = this;
            children["config-queue-limit"] = config_queue_limit.get();
        }
        return children.at("config-queue-limit");
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
        else
        {
            conform_action = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction>();
            conform_action->parent = this;
            children["conform-action"] = conform_action.get();
        }
        return children.at("conform-action");
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
        else
        {
            exceed_action = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction>();
            exceed_action->parent = this;
            children["exceed-action"] = exceed_action.get();
        }
        return children.at("exceed-action");
    }

    if(child_yang_name == "ip-mark")
    {
        for(auto const & c : ip_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark>();
        c->parent = this;
        ip_mark.push_back(std::move(c));
        children[segment_path] = ip_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-mark")
    {
        for(auto const & c : mpls_mark)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(std::move(c));
        children[segment_path] = mpls_mark.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
        else
        {
            violate_action = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction>();
            violate_action->parent = this;
            children["violate-action"] = violate_action.get();
        }
        return children.at("violate-action");
    }

    if(child_yang_name == "wred")
    {
        for(auto const & c : wred)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred>();
        c->parent = this;
        wred.push_back(std::move(c));
        children[segment_path] = wred.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::get_children()
{
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("config-max-rate") == children.end())
    {
        if(config_max_rate != nullptr)
        {
            children["config-max-rate"] = config_max_rate.get();
        }
    }

    if(children.find("config-min-rate") == children.end())
    {
        if(config_min_rate != nullptr)
        {
            children["config-min-rate"] = config_min_rate.get();
        }
    }

    if(children.find("config-policer-average-rate") == children.end())
    {
        if(config_policer_average_rate != nullptr)
        {
            children["config-policer-average-rate"] = config_policer_average_rate.get();
        }
    }

    if(children.find("config-policer-conform-burst") == children.end())
    {
        if(config_policer_conform_burst != nullptr)
        {
            children["config-policer-conform-burst"] = config_policer_conform_burst.get();
        }
    }

    if(children.find("config-policer-excess-burst") == children.end())
    {
        if(config_policer_excess_burst != nullptr)
        {
            children["config-policer-excess-burst"] = config_policer_excess_burst.get();
        }
    }

    if(children.find("config-policer-peak-rate") == children.end())
    {
        if(config_policer_peak_rate != nullptr)
        {
            children["config-policer-peak-rate"] = config_policer_peak_rate.get();
        }
    }

    if(children.find("config-queue-limit") == children.end())
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit.get();
        }
    }

    if(children.find("conform-action") == children.end())
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
    }

    if(children.find("exceed-action") == children.end())
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
    }

    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("violate-action") == children.end())
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
    }

    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
    }
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "interface";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 qos_direction{YType::str, "qos-direction"}
    	,
    classes(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes>())
	,policy_details(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>())
{
    classes->parent = this;
    children["classes"] = classes.get();

    policy_details->parent = this;
    children["policy-details"] = policy_details.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

PlatformQos::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| qos_direction.is_set
	|| (classes !=  nullptr && classes->has_data())
	|| (policy_details !=  nullptr && policy_details->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(qos_direction.operation)
	|| (classes !=  nullptr && is_set(classes->operation))
	|| (policy_details !=  nullptr && is_set(policy_details->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (qos_direction.is_set || is_set(qos_direction.operation)) leaf_name_data.push_back(qos_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
        else
        {
            classes = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Classes>();
            classes->parent = this;
            children["classes"] = classes.get();
        }
        return children.at("classes");
    }

    if(child_yang_name == "policy-details")
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
        else
        {
            policy_details = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>();
            policy_details->parent = this;
            children["policy-details"] = policy_details.get();
        }
        return children.at("policy-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
    }

    if(children.find("policy-details") == children.end())
    {
        if(policy_details != nullptr)
        {
            children["policy-details"] = policy_details.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "qos-direction")
    {
        qos_direction = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQos::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::Wred()
    :
    	drop_probability{YType::uint32, "drop-probability"},
	 max_threshold{YType::uint32, "max-threshold"},
	 min_threshold{YType::uint32, "min-threshold"}
{
    yang_name = "wred"; yang_parent_name = "remote-class";
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_data() const
{
    return drop_probability.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_probability.operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_probability.is_set || is_set(drop_probability.operation)) leaf_name_data.push_back(drop_probability.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-probability")
    {
        drop_probability = value;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::HwWred()
    :
    	drop_probability{YType::uint32, "drop-probability"},
	 max_threshold{YType::uint32, "max-threshold"},
	 min_threshold{YType::uint32, "min-threshold"}
{
    yang_name = "hw-wred"; yang_parent_name = "remote-class";
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::~HwWred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_data() const
{
    return drop_probability.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_probability.operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_probability.is_set || is_set(drop_probability.operation)) leaf_name_data.push_back(drop_probability.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-probability")
    {
        drop_probability = value;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::RemoteClass()
    :
    	class_id{YType::uint32, "class-id"},
	 class_name{YType::str, "class-name"},
	 cos_q{YType::uint32, "cos-q"},
	 hardware_queue_limit{YType::uint32, "hardware-queue-limit"},
	 queue_limit{YType::uint32, "queue-limit"}
{
    yang_name = "remote-class"; yang_parent_name = "remote-interface";
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::~RemoteClass()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_data() const
{
    for (std::size_t index=0; index<hw_wred.size(); index++)
    {
        if(hw_wred[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return class_id.is_set
	|| class_name.is_set
	|| cos_q.is_set
	|| hardware_queue_limit.is_set
	|| queue_limit.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_operation() const
{
    for (std::size_t index=0; index<hw_wred.size(); index++)
    {
        if(hw_wred[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(class_id.operation)
	|| is_set(class_name.operation)
	|| is_set(cos_q.operation)
	|| is_set(hardware_queue_limit.operation)
	|| is_set(queue_limit.operation);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-class";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_id.is_set || is_set(class_id.operation)) leaf_name_data.push_back(class_id.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (cos_q.is_set || is_set(cos_q.operation)) leaf_name_data.push_back(cos_q.get_name_leafdata());
    if (hardware_queue_limit.is_set || is_set(hardware_queue_limit.operation)) leaf_name_data.push_back(hardware_queue_limit.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.operation)) leaf_name_data.push_back(queue_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-wred")
    {
        for(auto const & c : hw_wred)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred>();
        c->parent = this;
        hw_wred.push_back(std::move(c));
        children[segment_path] = hw_wred.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "wred")
    {
        for(auto const & c : wred)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred>();
        c->parent = this;
        wred.push_back(std::move(c));
        children[segment_path] = wred.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_children()
{
    for (auto const & c : hw_wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-id")
    {
        class_id = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "cos-q")
    {
        cos_q = value;
    }
    if(value_path == "hardware-queue-limit")
    {
        hardware_queue_limit = value;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
    }
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteInterface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface_handle{YType::uint32, "interface-handle"},
	 number_of_classes{YType::uint32, "number-of-classes"},
	 number_of_virtual_output_queues{YType::uint32, "number-of-virtual-output-queues"},
	 policy_name{YType::str, "policy-name"},
	 virtual_output_queue_statistics_handle{YType::uint64, "virtual-output-queue-statistics-handle"}
{
    yang_name = "remote-interface"; yang_parent_name = "remote-interfaces";
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::~RemoteInterface()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_data() const
{
    for (std::size_t index=0; index<remote_class.size(); index++)
    {
        if(remote_class[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_handle.is_set
	|| number_of_classes.is_set
	|| number_of_virtual_output_queues.is_set
	|| policy_name.is_set
	|| virtual_output_queue_statistics_handle.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_operation() const
{
    for (std::size_t index=0; index<remote_class.size(); index++)
    {
        if(remote_class[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_handle.operation)
	|| is_set(number_of_classes.operation)
	|| is_set(number_of_virtual_output_queues.operation)
	|| is_set(policy_name.operation)
	|| is_set(virtual_output_queue_statistics_handle.operation);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (number_of_classes.is_set || is_set(number_of_classes.operation)) leaf_name_data.push_back(number_of_classes.get_name_leafdata());
    if (number_of_virtual_output_queues.is_set || is_set(number_of_virtual_output_queues.operation)) leaf_name_data.push_back(number_of_virtual_output_queues.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (virtual_output_queue_statistics_handle.is_set || is_set(virtual_output_queue_statistics_handle.operation)) leaf_name_data.push_back(virtual_output_queue_statistics_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-class")
    {
        for(auto const & c : remote_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass>();
        c->parent = this;
        remote_class.push_back(std::move(c));
        children[segment_path] = remote_class.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_children()
{
    for (auto const & c : remote_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "number-of-classes")
    {
        number_of_classes = value;
    }
    if(value_path == "number-of-virtual-output-queues")
    {
        number_of_virtual_output_queues = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "virtual-output-queue-statistics-handle")
    {
        virtual_output_queue_statistics_handle = value;
    }
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterfaces()
{
    yang_name = "remote-interfaces"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::RemoteInterfaces::~RemoteInterfaces()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_data() const
{
    for (std::size_t index=0; index<remote_interface.size(); index++)
    {
        if(remote_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<remote_interface.size(); index++)
    {
        if(remote_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::RemoteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::RemoteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-interface")
    {
        for(auto const & c : remote_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface>();
        c->parent = this;
        remote_interface.push_back(std::move(c));
        children[segment_path] = remote_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::RemoteInterfaces::get_children()
{
    for (auto const & c : remote_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces>())
	,interfaces(std::make_unique<PlatformQos::Nodes::Node::Interfaces>())
	,remote_interfaces(std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces>())
{
    bundle_interfaces->parent = this;
    children["bundle-interfaces"] = bundle_interfaces.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    remote_interfaces->parent = this;
    children["remote-interfaces"] = remote_interfaces.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

PlatformQos::Nodes::Node::~Node()
{
}

bool PlatformQos::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (remote_interfaces !=  nullptr && remote_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (bundle_interfaces !=  nullptr && is_set(bundle_interfaces->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (remote_interfaces !=  nullptr && is_set(remote_interfaces->operation));
}

std::string PlatformQos::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        else
        {
            bundle_interfaces = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces>();
            bundle_interfaces->parent = this;
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        return children.at("bundle-interfaces");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<PlatformQos::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "remote-interfaces")
    {
        if(remote_interfaces != nullptr)
        {
            children["remote-interfaces"] = remote_interfaces.get();
        }
        else
        {
            remote_interfaces = std::make_unique<PlatformQos::Nodes::Node::RemoteInterfaces>();
            remote_interfaces->parent = this;
            children["remote-interfaces"] = remote_interfaces.get();
        }
        return children.at("remote-interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::get_children()
{
    if(children.find("bundle-interfaces") == children.end())
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("remote-interfaces") == children.end())
    {
        if(remote_interfaces != nullptr)
        {
            children["remote-interfaces"] = remote_interfaces.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PlatformQos::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "platform-qos";
}

PlatformQos::Nodes::~Nodes()
{
}

bool PlatformQos::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::PlatformQos()
    :
    nodes(std::make_unique<PlatformQos::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "platform-qos"; yang_parent_name = "Cisco-IOS-XR-ncs5500-qos-oper";
}

PlatformQos::~PlatformQos()
{
}

bool PlatformQos::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformQos::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string PlatformQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos";

    return path_buffer.str();

}

EntityPath PlatformQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<PlatformQos::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void PlatformQos::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PlatformQos::clone_ptr()
{
    return std::make_unique<PlatformQos>();
}

const Enum::Value DnxQoseaShowActionEnum::action_none {0, "action-none"};
const Enum::Value DnxQoseaShowActionEnum::action_transmit {1, "action-transmit"};
const Enum::Value DnxQoseaShowActionEnum::action_drop {2, "action-drop"};
const Enum::Value DnxQoseaShowActionEnum::action_mark {3, "action-mark"};

const Enum::Value PolicyParamUnitEnum::policy_param_unit_invalid {0, "policy-param-unit-invalid"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_bytes {1, "policy-param-unit-bytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_kbytes {2, "policy-param-unit-kbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mbytes {3, "policy-param-unit-mbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_gbytes {4, "policy-param-unit-gbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_bitsps {5, "policy-param-unit-bitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_kbitsps {6, "policy-param-unit-kbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mbitsps {7, "policy-param-unit-mbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_gbitsps {8, "policy-param-unit-gbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_cells_ps {9, "policy-param-unit-cells-ps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_packets_ps {10, "policy-param-unit-packets-ps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_us {11, "policy-param-unit-us"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_ms {12, "policy-param-unit-ms"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_seconds {13, "policy-param-unit-seconds"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_packets {14, "policy-param-unit-packets"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_cells {15, "policy-param-unit-cells"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_percent {16, "policy-param-unit-percent"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_per_thousand {17, "policy-param-unit-per-thousand"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_per_million {18, "policy-param-unit-per-million"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_hz {19, "policy-param-unit-hz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_khz {20, "policy-param-unit-khz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mhz {21, "policy-param-unit-mhz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_ratio {22, "policy-param-unit-ratio"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_max {23, "policy-param-unit-max"};

const Enum::Value DnxQoseaShowWredEnum::wred_cos {0, "wred-cos"};
const Enum::Value DnxQoseaShowWredEnum::wred_dscp {1, "wred-dscp"};
const Enum::Value DnxQoseaShowWredEnum::wred_precedence {2, "wred-precedence"};
const Enum::Value DnxQoseaShowWredEnum::wred_discard_class {3, "wred-discard-class"};
const Enum::Value DnxQoseaShowWredEnum::wred_mpls_exp {4, "wred-mpls-exp"};
const Enum::Value DnxQoseaShowWredEnum::red_with_user_min_max {5, "red-with-user-min-max"};
const Enum::Value DnxQoseaShowWredEnum::red_with_default_min_max {6, "red-with-default-min-max"};
const Enum::Value DnxQoseaShowWredEnum::wred_invalid {7, "wred-invalid"};

const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level1 {0, "high-priority-level1"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level2 {1, "high-priority-level2"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level3 {2, "high-priority-level3"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level4 {3, "high-priority-level4"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level5 {4, "high-priority-level5"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level6 {5, "high-priority-level6"};
const Enum::Value DnxQoseaShowHpLevelEnum::high_priority_level7 {6, "high-priority-level7"};
const Enum::Value DnxQoseaShowHpLevelEnum::unknown {7, "unknown"};

const Enum::Value QosPolicyAccountEnumEnum::qos_serv_policy_no_ac_count_pref {0, "qos-serv-policy-no-ac-count-pref"};
const Enum::Value QosPolicyAccountEnumEnum::qos_serv_policy_ac_count_l2 {1, "qos-serv-policy-ac-count-l2"};
const Enum::Value QosPolicyAccountEnumEnum::qos_serv_policy_no_ac_count_l2 {2, "qos-serv-policy-no-ac-count-l2"};
const Enum::Value QosPolicyAccountEnumEnum::qos_serv_policy_ac_count_user_def {3, "qos-serv-policy-ac-count-user-def"};
const Enum::Value QosPolicyAccountEnumEnum::qos_serv_policy_ac_count_l1 {4, "qos-serv-policy-ac-count-l1"};

const Enum::Value DnxQoseaShowMarkEnum::mark_none {0, "mark-none"};
const Enum::Value DnxQoseaShowMarkEnum::dscp {1, "dscp"};
const Enum::Value DnxQoseaShowMarkEnum::precedence {2, "precedence"};
const Enum::Value DnxQoseaShowMarkEnum::mpls_topmost {3, "mpls-topmost"};
const Enum::Value DnxQoseaShowMarkEnum::mpls_imposition {4, "mpls-imposition"};
const Enum::Value DnxQoseaShowMarkEnum::qos_group {5, "qos-group"};
const Enum::Value DnxQoseaShowMarkEnum::discard_class {6, "discard-class"};
const Enum::Value DnxQoseaShowMarkEnum::cos {7, "cos"};
const Enum::Value DnxQoseaShowMarkEnum::inner_cos {8, "inner-cos"};
const Enum::Value DnxQoseaShowMarkEnum::un_supported9 {9, "un-supported9"};
const Enum::Value DnxQoseaShowMarkEnum::un_supported10 {10, "un-supported10"};
const Enum::Value DnxQoseaShowMarkEnum::dscp_tunnel {11, "dscp-tunnel"};
const Enum::Value DnxQoseaShowMarkEnum::precedence_tunnel {12, "precedence-tunnel"};
const Enum::Value DnxQoseaShowMarkEnum::dei {13, "dei"};
const Enum::Value DnxQoseaShowMarkEnum::dei_imposition {14, "dei-imposition"};

const Enum::Value DnxQoseaShowPolicyStatusEnum::no_error {0, "no-error"};
const Enum::Value DnxQoseaShowPolicyStatusEnum::policy_in_reset {1, "policy-in-reset"};

const Enum::Value DnxQoseaShowIntfStatusEnum::state_unknown {0, "state-unknown"};
const Enum::Value DnxQoseaShowIntfStatusEnum::state_down {1, "state-down"};

const Enum::Value DnxQoseaShowLevelEnum::level1 {0, "level1"};
const Enum::Value DnxQoseaShowLevelEnum::level2 {1, "level2"};
const Enum::Value DnxQoseaShowLevelEnum::level3 {2, "level3"};
const Enum::Value DnxQoseaShowLevelEnum::level4 {3, "level4"};
const Enum::Value DnxQoseaShowLevelEnum::level5 {4, "level5"};

const Enum::Value DnxQoseaShowQueueEnum::low_priority_default_queue {0, "low-priority-default-queue"};
const Enum::Value DnxQoseaShowQueueEnum::low_priority_queue {1, "low-priority-queue"};
const Enum::Value DnxQoseaShowQueueEnum::high_priority_queue {2, "high-priority-queue"};
const Enum::Value DnxQoseaShowQueueEnum::unknown_queue_type {3, "unknown-queue-type"};


}
}

