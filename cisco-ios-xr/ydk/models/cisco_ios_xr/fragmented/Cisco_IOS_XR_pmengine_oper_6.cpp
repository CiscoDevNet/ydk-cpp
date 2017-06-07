
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_6.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-ucast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutUcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-mcast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutMcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-errors"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInErrors' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatMulticastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatBroadcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pause-frame"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPauseFrame' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-bytes"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in8021q-frames"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-pkts"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-overrun"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOverrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-abort"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidVlan' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidDmac' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-encap"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidEncap' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-other"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-giant"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-jabber"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mibcrc"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibcrc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-collisions"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorCollisions' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-symbol"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorSymbol' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-bytes"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out8021q-frames"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pause-frames"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPauseFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-pkts"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-underrun"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropUnderrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-abort"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-other"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-error-other"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-giant"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-runt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorRunt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-jabbers"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorJabbers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-fragments"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-other"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkt64-octet"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts65To127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts128To255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts256To511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts512To1023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1024To1518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "outpkt64octet"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outpkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts65127-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts65127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts128255-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts128255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts256511-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts256511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts5121023-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts5121023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts10241518-octets"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts10241518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-util"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-util"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-undersized-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-oversized-pkt"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxOversizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-fragments"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-jabber"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-bad-fcs"; yang_parent_name = "second30-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxBadFcs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24History()
    :
    ethernet_hour24_ether_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories>())
{
    ethernet_hour24_ether_histories->parent = this;

    yang_name = "ethernet-hour24-history"; yang_parent_name = "ethernet-port-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::~EthernetHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::has_data() const
{
    return (ethernet_hour24_ether_histories !=  nullptr && ethernet_hour24_ether_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::has_operation() const
{
    return is_set(operation)
	|| (ethernet_hour24_ether_histories !=  nullptr && ethernet_hour24_ether_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-history";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24-ether-histories")
    {
        if(ethernet_hour24_ether_histories == nullptr)
        {
            ethernet_hour24_ether_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories>();
        }
        return ethernet_hour24_ether_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_hour24_ether_histories != nullptr)
    {
        children["ethernet-hour24-ether-histories"] = ethernet_hour24_ether_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistories()
{
    yang_name = "ethernet-hour24-ether-histories"; yang_parent_name = "ethernet-hour24-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::~EthernetHour24EtherHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::has_data() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether_history.size(); index++)
    {
        if(ethernet_hour24_ether_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::has_operation() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether_history.size(); index++)
    {
        if(ethernet_hour24_ether_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether-histories";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24EtherHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24-ether-history")
    {
        for(auto const & c : ethernet_hour24_ether_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory>();
        c->parent = this;
        ethernet_hour24_ether_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_hour24_ether_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherHistory()
    :
    number{YType::int32, "number"}
    	,
    ethernet_hour24_ether_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances>())
{
    ethernet_hour24_ether_time_line_instances->parent = this;

    yang_name = "ethernet-hour24-ether-history"; yang_parent_name = "ethernet-hour24-ether-histories";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::~EthernetHour24EtherHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::has_data() const
{
    return number.is_set
	|| (ethernet_hour24_ether_time_line_instances !=  nullptr && ethernet_hour24_ether_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (ethernet_hour24_ether_time_line_instances !=  nullptr && ethernet_hour24_ether_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24EtherHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24-ether-time-line-instances")
    {
        if(ethernet_hour24_ether_time_line_instances == nullptr)
        {
            ethernet_hour24_ether_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances>();
        }
        return ethernet_hour24_ether_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_hour24_ether_time_line_instances != nullptr)
    {
        children["ethernet-hour24-ether-time-line-instances"] = ethernet_hour24_ether_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstances()
{
    yang_name = "ethernet-hour24-ether-time-line-instances"; yang_parent_name = "ethernet-hour24-ether-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::~EthernetHour24EtherTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether_time_line_instance.size(); index++)
    {
        if(ethernet_hour24_ether_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether_time_line_instance.size(); index++)
    {
        if(ethernet_hour24_ether_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether-time-line-instances";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24EtherTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24-ether-time-line-instance")
    {
        for(auto const & c : ethernet_hour24_ether_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance>();
        c->parent = this;
        ethernet_hour24_ether_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_hour24_ether_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EthernetHour24EtherTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ether10241518_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil>())
{
    ether10241518_octet->parent = this;

    ether128255_octet->parent = this;

    ether256511_octet->parent = this;

    ether5121023_octet->parent = this;

    ether64_octets->parent = this;

    ether65127_octet->parent = this;

    ether_stat_broadcast_pkt->parent = this;

    ether_stat_multicast_pkt->parent = this;

    ether_stat_undersized_pkt->parent = this;

    fcs_errors_stat->parent = this;

    if_in_errors->parent = this;

    if_in_octets->parent = this;

    in8021q_frames->parent = this;

    in_bcast_pkt->parent = this;

    in_drop_abort->parent = this;

    in_drop_invalid_dmac->parent = this;

    in_drop_invalid_encap->parent = this;

    in_drop_invalid_vlan->parent = this;

    in_drop_other->parent = this;

    in_drop_overrun->parent = this;

    in_error_collisions->parent = this;

    in_error_fragments->parent = this;

    in_error_giant->parent = this;

    in_error_jabbers->parent = this;

    in_error_other->parent = this;

    in_error_runt->parent = this;

    in_error_symbol->parent = this;

    in_good_bytes->parent = this;

    in_good_pkts->parent = this;

    in_mcast_pkt->parent = this;

    in_mib_giant->parent = this;

    in_mib_jabber->parent = this;

    in_mibcrc->parent = this;

    in_pause_frame->parent = this;

    in_pkt64_octet->parent = this;

    in_pkts1024_to1518_octets->parent = this;

    in_pkts128_to255_octets->parent = this;

    in_pkts1519_max_octets->parent = this;

    in_pkts256_to511_octets->parent = this;

    in_pkts512_to1023_octets->parent = this;

    in_pkts65_to127_octets->parent = this;

    in_ucast_pkt->parent = this;

    jabber_stat->parent = this;

    long_frames_stat->parent = this;

    octet_stat->parent = this;

    out8021q_frames->parent = this;

    out_bcast_pkt->parent = this;

    out_drop_abort->parent = this;

    out_drop_other->parent = this;

    out_drop_underrun->parent = this;

    out_error_other->parent = this;

    out_good_bytes->parent = this;

    out_good_pkts->parent = this;

    out_mcast_pkt->parent = this;

    out_octets->parent = this;

    out_pause_frames->parent = this;

    out_pkts10241518_octets->parent = this;

    out_pkts128255_octets->parent = this;

    out_pkts1519_max_octets->parent = this;

    out_pkts256511_octets->parent = this;

    out_pkts5121023_octets->parent = this;

    out_pkts65127_octets->parent = this;

    out_ucast_pkt->parent = this;

    outpkt64octet->parent = this;

    oversize_pkt_stat->parent = this;

    rx_pkt->parent = this;

    rx_util->parent = this;

    stat_pkt->parent = this;

    tx_bad_fcs->parent = this;

    tx_fragments->parent = this;

    tx_jabber->parent = this;

    tx_oversized_pkt->parent = this;

    tx_pkt->parent = this;

    tx_undersized_pkt->parent = this;

    tx_util->parent = this;

    yang_name = "ethernet-hour24-ether-time-line-instance"; yang_parent_name = "ethernet-hour24-ether-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::~EthernetHour24EtherTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24EtherTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil>();
        }
        return tx_util;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(ether128255_octet != nullptr)
    {
        children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_mib_giant != nullptr)
    {
        children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        children["in-mibcrc"] = in_mibcrc;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "stat-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "octet-stat"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OctetStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "oversize-pkt-stat"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OversizePktStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "fcs-errors-stat"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcsErrorsStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "long-frames-stat"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LongFramesStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "jabber-stat"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::~JabberStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JabberStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether64-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether64Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether65127-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether65127Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether128255-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether128255Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether256511-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether256511Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether5121023-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether5121023Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether10241518-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether10241518Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-ucast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InUcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mcast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-bcast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-ucast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutUcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-bcast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-mcast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutMcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-errors"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInErrors' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatMulticastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatBroadcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pause-frame"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPauseFrame' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-bytes"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in8021q-frames"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-pkts"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-overrun"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOverrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-abort"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidVlan' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidDmac' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-encap"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidEncap' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-giant"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-jabber"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mibcrc"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibcrc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-collisions"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorCollisions' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-symbol"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorSymbol' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-bytes"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out8021q-frames"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pause-frames"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPauseFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-pkts"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-underrun"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropUnderrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-abort"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-error-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-giant"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-runt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorRunt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-jabbers"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorJabbers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-fragments"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkt64-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts65To127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts128To255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts256To511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts512To1023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1024To1518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "outpkt64octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outpkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts65127-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts65127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts128255-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts128255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts256511-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts256511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts5121023-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts5121023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts10241518-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts10241518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-util"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-util"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-oversized-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxOversizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-fragments"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-jabber"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-bad-fcs"; yang_parent_name = "ethernet-hour24-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxBadFcs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::EthernetMinute15History()
    :
    minute15_ether_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories>())
{
    minute15_ether_histories->parent = this;

    yang_name = "ethernet-minute15-history"; yang_parent_name = "ethernet-port-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::~EthernetMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::has_data() const
{
    return (minute15_ether_histories !=  nullptr && minute15_ether_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::has_operation() const
{
    return is_set(operation)
	|| (minute15_ether_histories !=  nullptr && minute15_ether_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15-history";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetMinute15History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-histories")
    {
        if(minute15_ether_histories == nullptr)
        {
            minute15_ether_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories>();
        }
        return minute15_ether_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_histories != nullptr)
    {
        children["minute15-ether-histories"] = minute15_ether_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistories()
{
    yang_name = "minute15-ether-histories"; yang_parent_name = "ethernet-minute15-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::~Minute15EtherHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_history.size(); index++)
    {
        if(minute15_ether_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_history.size(); index++)
    {
        if(minute15_ether_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-histories";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-history")
    {
        for(auto const & c : minute15_ether_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory>();
        c->parent = this;
        minute15_ether_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherHistory()
    :
    slot_number{YType::int32, "slot-number"}
    	,
    minute15_ether_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances>())
{
    minute15_ether_time_line_instances->parent = this;

    yang_name = "minute15-ether-history"; yang_parent_name = "minute15-ether-histories";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::~Minute15EtherHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::has_data() const
{
    return slot_number.is_set
	|| (minute15_ether_time_line_instances !=  nullptr && minute15_ether_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_number.operation)
	|| (minute15_ether_time_line_instances !=  nullptr && minute15_ether_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-history" <<"[slot-number='" <<slot_number <<"']";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.operation)) leaf_name_data.push_back(slot_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-time-line-instances")
    {
        if(minute15_ether_time_line_instances == nullptr)
        {
            minute15_ether_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances>();
        }
        return minute15_ether_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_time_line_instances != nullptr)
    {
        children["minute15-ether-time-line-instances"] = minute15_ether_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstances()
{
    yang_name = "minute15-ether-time-line-instances"; yang_parent_name = "minute15-ether-history";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::~Minute15EtherTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_time_line_instance.size(); index++)
    {
        if(minute15_ether_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_time_line_instance.size(); index++)
    {
        if(minute15_ether_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-time-line-instances";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-time-line-instance")
    {
        for(auto const & c : minute15_ether_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance>();
        c->parent = this;
        minute15_ether_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Minute15EtherTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ether10241518_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil>())
{
    ether10241518_octet->parent = this;

    ether128255_octet->parent = this;

    ether256511_octet->parent = this;

    ether5121023_octet->parent = this;

    ether64_octets->parent = this;

    ether65127_octet->parent = this;

    ether_stat_broadcast_pkt->parent = this;

    ether_stat_multicast_pkt->parent = this;

    ether_stat_undersized_pkt->parent = this;

    fcs_errors_stat->parent = this;

    if_in_errors->parent = this;

    if_in_octets->parent = this;

    in8021q_frames->parent = this;

    in_bcast_pkt->parent = this;

    in_drop_abort->parent = this;

    in_drop_invalid_dmac->parent = this;

    in_drop_invalid_encap->parent = this;

    in_drop_invalid_vlan->parent = this;

    in_drop_other->parent = this;

    in_drop_overrun->parent = this;

    in_error_collisions->parent = this;

    in_error_fragments->parent = this;

    in_error_giant->parent = this;

    in_error_jabbers->parent = this;

    in_error_other->parent = this;

    in_error_runt->parent = this;

    in_error_symbol->parent = this;

    in_good_bytes->parent = this;

    in_good_pkts->parent = this;

    in_mcast_pkt->parent = this;

    in_mib_giant->parent = this;

    in_mib_jabber->parent = this;

    in_mibcrc->parent = this;

    in_pause_frame->parent = this;

    in_pkt64_octet->parent = this;

    in_pkts1024_to1518_octets->parent = this;

    in_pkts128_to255_octets->parent = this;

    in_pkts1519_max_octets->parent = this;

    in_pkts256_to511_octets->parent = this;

    in_pkts512_to1023_octets->parent = this;

    in_pkts65_to127_octets->parent = this;

    in_ucast_pkt->parent = this;

    jabber_stat->parent = this;

    long_frames_stat->parent = this;

    octet_stat->parent = this;

    out8021q_frames->parent = this;

    out_bcast_pkt->parent = this;

    out_drop_abort->parent = this;

    out_drop_other->parent = this;

    out_drop_underrun->parent = this;

    out_error_other->parent = this;

    out_good_bytes->parent = this;

    out_good_pkts->parent = this;

    out_mcast_pkt->parent = this;

    out_octets->parent = this;

    out_pause_frames->parent = this;

    out_pkts10241518_octets->parent = this;

    out_pkts128255_octets->parent = this;

    out_pkts1519_max_octets->parent = this;

    out_pkts256511_octets->parent = this;

    out_pkts5121023_octets->parent = this;

    out_pkts65127_octets->parent = this;

    out_ucast_pkt->parent = this;

    outpkt64octet->parent = this;

    oversize_pkt_stat->parent = this;

    rx_pkt->parent = this;

    rx_util->parent = this;

    stat_pkt->parent = this;

    tx_bad_fcs->parent = this;

    tx_fragments->parent = this;

    tx_jabber->parent = this;

    tx_oversized_pkt->parent = this;

    tx_pkt->parent = this;

    tx_undersized_pkt->parent = this;

    tx_util->parent = this;

    yang_name = "minute15-ether-time-line-instance"; yang_parent_name = "minute15-ether-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::~Minute15EtherTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil>();
        }
        return tx_util;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(ether128255_octet != nullptr)
    {
        children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_mib_giant != nullptr)
    {
        children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        children["in-mibcrc"] = in_mibcrc;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-pkt"; yang_parent_name = "minute15-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "stat-pkt"; yang_parent_name = "minute15-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "octet-stat"; yang_parent_name = "minute15-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OctetStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "oversize-pkt-stat"; yang_parent_name = "minute15-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OversizePktStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "fcs-errors-stat"; yang_parent_name = "minute15-ether-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";

    return path_buffer.str();

}

const EntityPath PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcsErrorsStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}


}
}

