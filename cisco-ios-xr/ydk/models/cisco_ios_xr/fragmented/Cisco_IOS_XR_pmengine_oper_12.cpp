
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_12.hpp"
#include "Cisco_IOS_XR_pmengine_oper_13.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::~JabberStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "macsec-second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistories()
{

    yang_name = "macsec-second30secyif-histories"; yang_parent_name = "macsec-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::~MacsecSecond30SecyifHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyif_history.size(); index++)
    {
        if(macsec_second30secyif_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyif_history.size(); index++)
    {
        if(macsec_second30secyif_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyif-history")
    {
        for(auto const & c : macsec_second30secyif_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory>();
        c->parent = this;
        macsec_second30secyif_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyif_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyif-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifHistory()
    :
    number{YType::int32, "number"}
    	,
    macsec_second30secyif_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances>())
{
    macsec_second30secyif_time_line_instances->parent = this;

    yang_name = "macsec-second30secyif-history"; yang_parent_name = "macsec-second30secyif-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::~MacsecSecond30SecyifHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::has_data() const
{
    return number.is_set
	|| (macsec_second30secyif_time_line_instances !=  nullptr && macsec_second30secyif_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (macsec_second30secyif_time_line_instances !=  nullptr && macsec_second30secyif_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyif-time-line-instances")
    {
        if(macsec_second30secyif_time_line_instances == nullptr)
        {
            macsec_second30secyif_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances>();
        }
        return macsec_second30secyif_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_second30secyif_time_line_instances != nullptr)
    {
        children["macsec-second30secyif-time-line-instances"] = macsec_second30secyif_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyif-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstances()
{

    yang_name = "macsec-second30secyif-time-line-instances"; yang_parent_name = "macsec-second30secyif-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::~MacsecSecond30SecyifTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyif_time_line_instance.size(); index++)
    {
        if(macsec_second30secyif_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyif_time_line_instance.size(); index++)
    {
        if(macsec_second30secyif_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyif-time-line-instance")
    {
        for(auto const & c : macsec_second30secyif_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance>();
        c->parent = this;
        macsec_second30secyif_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyif_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyif-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::MacsecSecond30SecyifTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sample_count{YType::uint64, "sample-count"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    in_octets_decrypted(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted>())
	,in_octets_validated(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated>())
	,in_pkts_bad_tag(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag>())
	,in_pkts_no_sci(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci>())
	,in_pkts_no_tag(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag>())
	,in_pkts_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun>())
	,in_pkts_unknown_sci(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci>())
	,in_pkts_untagged(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged>())
	,out_octets_encrypted(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected>())
	,out_pkts_too_long(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong>())
	,out_pkts_untagged(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged>())
{
    in_octets_decrypted->parent = this;
    in_octets_validated->parent = this;
    in_pkts_bad_tag->parent = this;
    in_pkts_no_sci->parent = this;
    in_pkts_no_tag->parent = this;
    in_pkts_overrun->parent = this;
    in_pkts_unknown_sci->parent = this;
    in_pkts_untagged->parent = this;
    out_octets_encrypted->parent = this;
    out_octets_protected->parent = this;
    out_pkts_too_long->parent = this;
    out_pkts_untagged->parent = this;

    yang_name = "macsec-second30secyif-time-line-instance"; yang_parent_name = "macsec-second30secyif-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::~MacsecSecond30SecyifTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sample_count.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_data())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_data())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_data())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_data())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_data())
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_data())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_operation())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_operation())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_operation())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_operation())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_operation())
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_operation())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-pkts-bad-tag")
    {
        if(in_pkts_bad_tag == nullptr)
        {
            in_pkts_bad_tag = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag>();
        }
        return in_pkts_bad_tag;
    }

    if(child_yang_name == "in-pkts-no-sci")
    {
        if(in_pkts_no_sci == nullptr)
        {
            in_pkts_no_sci = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci>();
        }
        return in_pkts_no_sci;
    }

    if(child_yang_name == "in-pkts-no-tag")
    {
        if(in_pkts_no_tag == nullptr)
        {
            in_pkts_no_tag = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag>();
        }
        return in_pkts_no_tag;
    }

    if(child_yang_name == "in-pkts-overrun")
    {
        if(in_pkts_overrun == nullptr)
        {
            in_pkts_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun>();
        }
        return in_pkts_overrun;
    }

    if(child_yang_name == "in-pkts-unknown-sci")
    {
        if(in_pkts_unknown_sci == nullptr)
        {
            in_pkts_unknown_sci = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci>();
        }
        return in_pkts_unknown_sci;
    }

    if(child_yang_name == "in-pkts-untagged")
    {
        if(in_pkts_untagged == nullptr)
        {
            in_pkts_untagged = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged>();
        }
        return in_pkts_untagged;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    if(child_yang_name == "out-pkts-untagged")
    {
        if(out_pkts_untagged == nullptr)
        {
            out_pkts_untagged = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged>();
        }
        return out_pkts_untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_pkts_bad_tag != nullptr)
    {
        children["in-pkts-bad-tag"] = in_pkts_bad_tag;
    }

    if(in_pkts_no_sci != nullptr)
    {
        children["in-pkts-no-sci"] = in_pkts_no_sci;
    }

    if(in_pkts_no_tag != nullptr)
    {
        children["in-pkts-no-tag"] = in_pkts_no_tag;
    }

    if(in_pkts_overrun != nullptr)
    {
        children["in-pkts-overrun"] = in_pkts_overrun;
    }

    if(in_pkts_unknown_sci != nullptr)
    {
        children["in-pkts-unknown-sci"] = in_pkts_unknown_sci;
    }

    if(in_pkts_untagged != nullptr)
    {
        children["in-pkts-untagged"] = in_pkts_untagged;
    }

    if(out_octets_encrypted != nullptr)
    {
        children["out-octets-encrypted"] = out_octets_encrypted;
    }

    if(out_octets_protected != nullptr)
    {
        children["out-octets-protected"] = out_octets_protected;
    }

    if(out_pkts_too_long != nullptr)
    {
        children["out-pkts-too-long"] = out_pkts_too_long;
    }

    if(out_pkts_untagged != nullptr)
    {
        children["out-pkts-untagged"] = out_pkts_untagged;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets-decrypted" || name == "in-octets-validated" || name == "in-pkts-bad-tag" || name == "in-pkts-no-sci" || name == "in-pkts-no-tag" || name == "in-pkts-overrun" || name == "in-pkts-unknown-sci" || name == "in-pkts-untagged" || name == "out-octets-encrypted" || name == "out-octets-protected" || name == "out-pkts-too-long" || name == "out-pkts-untagged" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::InPktsBadTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-bad-tag"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::~InPktsBadTag()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-bad-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::InPktsNoSci()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-sci"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::~InPktsNoSci()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::InPktsNoTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-tag"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::~InPktsNoTag()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::InPktsOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-overrun"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::~InPktsOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::InPktsUnknownSci()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unknown-sci"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::~InPktsUnknownSci()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unknown-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::InPktsUntagged()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::~InPktsUntagged()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::OutPktsUntagged()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-untagged"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::~OutPktsUntagged()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistories()
{

    yang_name = "macsec-second30secyrx-histories"; yang_parent_name = "macsec-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::~MacsecSecond30SecyrxHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyrx_history.size(); index++)
    {
        if(macsec_second30secyrx_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyrx_history.size(); index++)
    {
        if(macsec_second30secyrx_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyrx-history")
    {
        for(auto const & c : macsec_second30secyrx_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory>();
        c->parent = this;
        macsec_second30secyrx_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyrx_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyrx-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxHistory()
    :
    number{YType::int32, "number"}
    	,
    macsec_second30secyrx_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances>())
{
    macsec_second30secyrx_time_line_instances->parent = this;

    yang_name = "macsec-second30secyrx-history"; yang_parent_name = "macsec-second30secyrx-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::~MacsecSecond30SecyrxHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::has_data() const
{
    return number.is_set
	|| (macsec_second30secyrx_time_line_instances !=  nullptr && macsec_second30secyrx_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (macsec_second30secyrx_time_line_instances !=  nullptr && macsec_second30secyrx_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyrx-time-line-instances")
    {
        if(macsec_second30secyrx_time_line_instances == nullptr)
        {
            macsec_second30secyrx_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances>();
        }
        return macsec_second30secyrx_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_second30secyrx_time_line_instances != nullptr)
    {
        children["macsec-second30secyrx-time-line-instances"] = macsec_second30secyrx_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyrx-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstances()
{

    yang_name = "macsec-second30secyrx-time-line-instances"; yang_parent_name = "macsec-second30secyrx-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::~MacsecSecond30SecyrxTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyrx_time_line_instance.size(); index++)
    {
        if(macsec_second30secyrx_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyrx_time_line_instance.size(); index++)
    {
        if(macsec_second30secyrx_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyrx-time-line-instance")
    {
        for(auto const & c : macsec_second30secyrx_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance>();
        c->parent = this;
        macsec_second30secyrx_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyrx_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyrx-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::MacsecSecond30SecyrxTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sample_count{YType::uint64, "sample-count"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    in_octets_decrypted(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted>())
	,in_octets_validated(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated>())
	,in_pkts_delayed(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed>())
	,in_pkts_invalid(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid>())
	,in_pkts_late(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate>())
	,in_pkts_not_using_sa(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa>())
	,in_pkts_not_valid(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid>())
	,in_pkts_ok(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk>())
	,in_pkts_unchecked(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked>())
	,in_pkts_untagged_hit(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit>())
	,in_pkts_unused_sa(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa>())
{
    in_octets_decrypted->parent = this;
    in_octets_validated->parent = this;
    in_pkts_delayed->parent = this;
    in_pkts_invalid->parent = this;
    in_pkts_late->parent = this;
    in_pkts_not_using_sa->parent = this;
    in_pkts_not_valid->parent = this;
    in_pkts_ok->parent = this;
    in_pkts_unchecked->parent = this;
    in_pkts_untagged_hit->parent = this;
    in_pkts_unused_sa->parent = this;

    yang_name = "macsec-second30secyrx-time-line-instance"; yang_parent_name = "macsec-second30secyrx-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::~MacsecSecond30SecyrxTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sample_count.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_data())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_data())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_data())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_data())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_data())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_data())
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_data())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_data())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_operation())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_operation())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_operation())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_operation())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_operation())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_operation())
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_operation())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_operation())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-pkts-delayed")
    {
        if(in_pkts_delayed == nullptr)
        {
            in_pkts_delayed = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed>();
        }
        return in_pkts_delayed;
    }

    if(child_yang_name == "in-pkts-invalid")
    {
        if(in_pkts_invalid == nullptr)
        {
            in_pkts_invalid = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid>();
        }
        return in_pkts_invalid;
    }

    if(child_yang_name == "in-pkts-late")
    {
        if(in_pkts_late == nullptr)
        {
            in_pkts_late = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate>();
        }
        return in_pkts_late;
    }

    if(child_yang_name == "in-pkts-not-using-sa")
    {
        if(in_pkts_not_using_sa == nullptr)
        {
            in_pkts_not_using_sa = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa>();
        }
        return in_pkts_not_using_sa;
    }

    if(child_yang_name == "in-pkts-not-valid")
    {
        if(in_pkts_not_valid == nullptr)
        {
            in_pkts_not_valid = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid>();
        }
        return in_pkts_not_valid;
    }

    if(child_yang_name == "in-pkts-ok")
    {
        if(in_pkts_ok == nullptr)
        {
            in_pkts_ok = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk>();
        }
        return in_pkts_ok;
    }

    if(child_yang_name == "in-pkts-unchecked")
    {
        if(in_pkts_unchecked == nullptr)
        {
            in_pkts_unchecked = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked>();
        }
        return in_pkts_unchecked;
    }

    if(child_yang_name == "in-pkts-untagged-hit")
    {
        if(in_pkts_untagged_hit == nullptr)
        {
            in_pkts_untagged_hit = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit>();
        }
        return in_pkts_untagged_hit;
    }

    if(child_yang_name == "in-pkts-unused-sa")
    {
        if(in_pkts_unused_sa == nullptr)
        {
            in_pkts_unused_sa = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa>();
        }
        return in_pkts_unused_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_pkts_delayed != nullptr)
    {
        children["in-pkts-delayed"] = in_pkts_delayed;
    }

    if(in_pkts_invalid != nullptr)
    {
        children["in-pkts-invalid"] = in_pkts_invalid;
    }

    if(in_pkts_late != nullptr)
    {
        children["in-pkts-late"] = in_pkts_late;
    }

    if(in_pkts_not_using_sa != nullptr)
    {
        children["in-pkts-not-using-sa"] = in_pkts_not_using_sa;
    }

    if(in_pkts_not_valid != nullptr)
    {
        children["in-pkts-not-valid"] = in_pkts_not_valid;
    }

    if(in_pkts_ok != nullptr)
    {
        children["in-pkts-ok"] = in_pkts_ok;
    }

    if(in_pkts_unchecked != nullptr)
    {
        children["in-pkts-unchecked"] = in_pkts_unchecked;
    }

    if(in_pkts_untagged_hit != nullptr)
    {
        children["in-pkts-untagged-hit"] = in_pkts_untagged_hit;
    }

    if(in_pkts_unused_sa != nullptr)
    {
        children["in-pkts-unused-sa"] = in_pkts_unused_sa;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets-decrypted" || name == "in-octets-validated" || name == "in-pkts-delayed" || name == "in-pkts-invalid" || name == "in-pkts-late" || name == "in-pkts-not-using-sa" || name == "in-pkts-not-valid" || name == "in-pkts-ok" || name == "in-pkts-unchecked" || name == "in-pkts-untagged-hit" || name == "in-pkts-unused-sa" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::InPktsDelayed()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-delayed"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::~InPktsDelayed()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::InPktsInvalid()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-invalid"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::~InPktsInvalid()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::InPktsLate()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-late"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::~InPktsLate()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-late";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::InPktsNotUsingSa()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-using-sa"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::~InPktsNotUsingSa()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-using-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::InPktsNotValid()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-valid"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::~InPktsNotValid()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::InPktsOk()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-ok"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::~InPktsOk()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-ok";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::InPktsUnchecked()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unchecked"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::~InPktsUnchecked()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unchecked";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::InPktsUntaggedHit()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged-hit"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::~InPktsUntaggedHit()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged-hit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::InPktsUnusedSa()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unused-sa"; yang_parent_name = "macsec-second30secyrx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::~InPktsUnusedSa()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unused-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistories()
{

    yang_name = "macsec-second30secytx-histories"; yang_parent_name = "macsec-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::~MacsecSecond30SecytxHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secytx_history.size(); index++)
    {
        if(macsec_second30secytx_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secytx_history.size(); index++)
    {
        if(macsec_second30secytx_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secytx-history")
    {
        for(auto const & c : macsec_second30secytx_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory>();
        c->parent = this;
        macsec_second30secytx_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secytx_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secytx-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxHistory()
    :
    number{YType::int32, "number"}
    	,
    macsec_second30secytx_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances>())
{
    macsec_second30secytx_time_line_instances->parent = this;

    yang_name = "macsec-second30secytx-history"; yang_parent_name = "macsec-second30secytx-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::~MacsecSecond30SecytxHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::has_data() const
{
    return number.is_set
	|| (macsec_second30secytx_time_line_instances !=  nullptr && macsec_second30secytx_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (macsec_second30secytx_time_line_instances !=  nullptr && macsec_second30secytx_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secytx-time-line-instances")
    {
        if(macsec_second30secytx_time_line_instances == nullptr)
        {
            macsec_second30secytx_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances>();
        }
        return macsec_second30secytx_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_second30secytx_time_line_instances != nullptr)
    {
        children["macsec-second30secytx-time-line-instances"] = macsec_second30secytx_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secytx-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstances()
{

    yang_name = "macsec-second30secytx-time-line-instances"; yang_parent_name = "macsec-second30secytx-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::~MacsecSecond30SecytxTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secytx_time_line_instance.size(); index++)
    {
        if(macsec_second30secytx_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secytx_time_line_instance.size(); index++)
    {
        if(macsec_second30secytx_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secytx-time-line-instance")
    {
        for(auto const & c : macsec_second30secytx_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance>();
        c->parent = this;
        macsec_second30secytx_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secytx_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secytx-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::MacsecSecond30SecytxTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sample_count{YType::uint64, "sample-count"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    out_octets_encrypted(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected>())
	,out_pkts_encrypted(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted>())
	,out_pkts_protected(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected>())
	,out_pkts_too_long(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong>())
{
    out_octets_encrypted->parent = this;
    out_octets_protected->parent = this;
    out_pkts_encrypted->parent = this;
    out_pkts_protected->parent = this;
    out_pkts_too_long->parent = this;

    yang_name = "macsec-second30secytx-time-line-instance"; yang_parent_name = "macsec-second30secytx-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::~MacsecSecond30SecytxTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sample_count.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_data())
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_operation())
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-pkts-encrypted")
    {
        if(out_pkts_encrypted == nullptr)
        {
            out_pkts_encrypted = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted>();
        }
        return out_pkts_encrypted;
    }

    if(child_yang_name == "out-pkts-protected")
    {
        if(out_pkts_protected == nullptr)
        {
            out_pkts_protected = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected>();
        }
        return out_pkts_protected;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_octets_encrypted != nullptr)
    {
        children["out-octets-encrypted"] = out_octets_encrypted;
    }

    if(out_octets_protected != nullptr)
    {
        children["out-octets-protected"] = out_octets_protected;
    }

    if(out_pkts_encrypted != nullptr)
    {
        children["out-pkts-encrypted"] = out_pkts_encrypted;
    }

    if(out_pkts_protected != nullptr)
    {
        children["out-pkts-protected"] = out_pkts_protected;
    }

    if(out_pkts_too_long != nullptr)
    {
        children["out-pkts-too-long"] = out_pkts_too_long;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-octets-encrypted" || name == "out-octets-protected" || name == "out-pkts-encrypted" || name == "out-pkts-protected" || name == "out-pkts-too-long" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secytx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secytx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::OutPktsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-encrypted"; yang_parent_name = "macsec-second30secytx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::~OutPktsEncrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::OutPktsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-protected"; yang_parent_name = "macsec-second30secytx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::~OutPktsProtected()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secytx-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcHistory()
    :
    oc_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>())
{
    oc_port_histories->parent = this;

    yang_name = "oc-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::~OcHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_data() const
{
    return (oc_port_histories !=  nullptr && oc_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_operation() const
{
    return is_set(yfilter)
	|| (oc_port_histories !=  nullptr && oc_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-port-histories")
    {
        if(oc_port_histories == nullptr)
        {
            oc_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>();
        }
        return oc_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_port_histories != nullptr)
    {
        children["oc-port-histories"] = oc_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistories()
{

    yang_name = "oc-port-histories"; yang_parent_name = "oc-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::~OcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_data() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
    {
        if(oc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
    {
        if(oc_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-port-history")
    {
        for(auto const & c : oc_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory>();
        c->parent = this;
        oc_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcPortHistory()
    :
    name{YType::str, "name"}
    	,
    oc_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>())
	,oc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>())
{
    oc_hour24_history->parent = this;
    oc_minute15_history->parent = this;

    yang_name = "oc-port-history"; yang_parent_name = "oc-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::~OcPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_data() const
{
    return name.is_set
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_data())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_operation())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/oc-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-history")
    {
        if(oc_hour24_history == nullptr)
        {
            oc_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>();
        }
        return oc_hour24_history;
    }

    if(child_yang_name == "oc-minute15-history")
    {
        if(oc_minute15_history == nullptr)
        {
            oc_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>();
        }
        return oc_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24_history != nullptr)
    {
        children["oc-hour24-history"] = oc_hour24_history;
    }

    if(oc_minute15_history != nullptr)
    {
        children["oc-minute15-history"] = oc_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-history" || name == "oc-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24History()
    :
    oc_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>())
{
    oc_hour24ocn_histories->parent = this;

    yang_name = "oc-hour24-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::~OcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_data() const
{
    return (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-histories")
    {
        if(oc_hour24ocn_histories == nullptr)
        {
            oc_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>();
        }
        return oc_hour24ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24ocn_histories != nullptr)
    {
        children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistories()
{

    yang_name = "oc-hour24ocn-histories"; yang_parent_name = "oc-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::~OcHour24OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-history")
    {
        for(auto const & c : oc_hour24ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory>();
        c->parent = this;
        oc_hour24ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>())
{
    oc_hour24ocn_time_line_instances->parent = this;

    yang_name = "oc-hour24ocn-history"; yang_parent_name = "oc-hour24ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::~OcHour24OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instances")
    {
        if(oc_hour24ocn_time_line_instances == nullptr)
        {
            oc_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>();
        }
        return oc_hour24ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24ocn_time_line_instances != nullptr)
    {
        children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstances()
{

    yang_name = "oc-hour24ocn-time-line-instances"; yang_parent_name = "oc-hour24ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::~OcHour24OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instance")
    {
        for(auto const & c : oc_hour24ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance>();
        c->parent = this;
        oc_hour24ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::OcHour24OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "oc-hour24ocn-time-line-instance"; yang_parent_name = "oc-hour24ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::~OcHour24OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        children["section-sef-ss"] = section_sef_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15History()
    :
    oc_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>())
{
    oc_minute15ocn_histories->parent = this;

    yang_name = "oc-minute15-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::~OcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_data() const
{
    return (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-histories")
    {
        if(oc_minute15ocn_histories == nullptr)
        {
            oc_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>();
        }
        return oc_minute15ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15ocn_histories != nullptr)
    {
        children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistories()
{

    yang_name = "oc-minute15ocn-histories"; yang_parent_name = "oc-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::~OcMinute15OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-history")
    {
        for(auto const & c : oc_minute15ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory>();
        c->parent = this;
        oc_minute15ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>())
{
    oc_minute15ocn_time_line_instances->parent = this;

    yang_name = "oc-minute15ocn-history"; yang_parent_name = "oc-minute15ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::~OcMinute15OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instances")
    {
        if(oc_minute15ocn_time_line_instances == nullptr)
        {
            oc_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>();
        }
        return oc_minute15ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15ocn_time_line_instances != nullptr)
    {
        children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstances()
{

    yang_name = "oc-minute15ocn-time-line-instances"; yang_parent_name = "oc-minute15ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::~OcMinute15OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instance")
    {
        for(auto const & c : oc_minute15ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance>();
        c->parent = this;
        oc_minute15ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::OcMinute15OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "oc-minute15ocn-time-line-instance"; yang_parent_name = "oc-minute15ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::~OcMinute15OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        children["section-sef-ss"] = section_sef_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduHistory()
    :
    odu_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories>())
{
    odu_port_histories->parent = this;

    yang_name = "odu-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::~OduHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::has_data() const
{
    return (odu_port_histories !=  nullptr && odu_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::has_operation() const
{
    return is_set(yfilter)
	|| (odu_port_histories !=  nullptr && odu_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-port-histories")
    {
        if(odu_port_histories == nullptr)
        {
            odu_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories>();
        }
        return odu_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_port_histories != nullptr)
    {
        children["odu-port-histories"] = odu_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistories()
{

    yang_name = "odu-port-histories"; yang_parent_name = "odu-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::~OduPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::has_data() const
{
    for (std::size_t index=0; index<odu_port_history.size(); index++)
    {
        if(odu_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_port_history.size(); index++)
    {
        if(odu_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/odu-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-port-history")
    {
        for(auto const & c : odu_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory>();
        c->parent = this;
        odu_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduPortHistory()
    :
    name{YType::str, "name"}
    	,
    odu_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History>())
	,odu_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History>())
{
    odu_hour24_history->parent = this;
    odu_minute15_history->parent = this;

    yang_name = "odu-port-history"; yang_parent_name = "odu-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::~OduPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::has_data() const
{
    return name.is_set
	|| (odu_hour24_history !=  nullptr && odu_hour24_history->has_data())
	|| (odu_minute15_history !=  nullptr && odu_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (odu_hour24_history !=  nullptr && odu_hour24_history->has_operation())
	|| (odu_minute15_history !=  nullptr && odu_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/odu-history/odu-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24-history")
    {
        if(odu_hour24_history == nullptr)
        {
            odu_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History>();
        }
        return odu_hour24_history;
    }

    if(child_yang_name == "odu-minute15-history")
    {
        if(odu_minute15_history == nullptr)
        {
            odu_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History>();
        }
        return odu_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24_history != nullptr)
    {
        children["odu-hour24-history"] = odu_hour24_history;
    }

    if(odu_minute15_history != nullptr)
    {
        children["odu-minute15-history"] = odu_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24-history" || name == "odu-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24History()
    :
    odu_hour24gfp_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories>())
	,odu_hour24otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories>())
	,odu_hour24prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories>())
{
    odu_hour24gfp_histories->parent = this;
    odu_hour24otn_histories->parent = this;
    odu_hour24prbs_histories->parent = this;

    yang_name = "odu-hour24-history"; yang_parent_name = "odu-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::~OduHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_data() const
{
    return (odu_hour24gfp_histories !=  nullptr && odu_hour24gfp_histories->has_data())
	|| (odu_hour24otn_histories !=  nullptr && odu_hour24otn_histories->has_data())
	|| (odu_hour24prbs_histories !=  nullptr && odu_hour24prbs_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (odu_hour24gfp_histories !=  nullptr && odu_hour24gfp_histories->has_operation())
	|| (odu_hour24otn_histories !=  nullptr && odu_hour24otn_histories->has_operation())
	|| (odu_hour24prbs_histories !=  nullptr && odu_hour24prbs_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-histories")
    {
        if(odu_hour24gfp_histories == nullptr)
        {
            odu_hour24gfp_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories>();
        }
        return odu_hour24gfp_histories;
    }

    if(child_yang_name == "odu-hour24otn-histories")
    {
        if(odu_hour24otn_histories == nullptr)
        {
            odu_hour24otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories>();
        }
        return odu_hour24otn_histories;
    }

    if(child_yang_name == "odu-hour24prbs-histories")
    {
        if(odu_hour24prbs_histories == nullptr)
        {
            odu_hour24prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories>();
        }
        return odu_hour24prbs_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24gfp_histories != nullptr)
    {
        children["odu-hour24gfp-histories"] = odu_hour24gfp_histories;
    }

    if(odu_hour24otn_histories != nullptr)
    {
        children["odu-hour24otn-histories"] = odu_hour24otn_histories;
    }

    if(odu_hour24prbs_histories != nullptr)
    {
        children["odu-hour24prbs-histories"] = odu_hour24prbs_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-histories" || name == "odu-hour24otn-histories" || name == "odu-hour24prbs-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistories()
{

    yang_name = "odu-hour24gfp-histories"; yang_parent_name = "odu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::~OduHour24GfpHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::has_data() const
{
    for (std::size_t index=0; index<odu_hour24gfp_history.size(); index++)
    {
        if(odu_hour24gfp_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp_history.size(); index++)
    {
        if(odu_hour24gfp_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-history")
    {
        for(auto const & c : odu_hour24gfp_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory>();
        c->parent = this;
        odu_hour24gfp_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24gfp_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpHistory()
    :
    number{YType::int32, "number"}
    	,
    odu_hour24gfp_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances>())
{
    odu_hour24gfp_time_line_instances->parent = this;

    yang_name = "odu-hour24gfp-history"; yang_parent_name = "odu-hour24gfp-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::~OduHour24GfpHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::has_data() const
{
    return number.is_set
	|| (odu_hour24gfp_time_line_instances !=  nullptr && odu_hour24gfp_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_hour24gfp_time_line_instances !=  nullptr && odu_hour24gfp_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-time-line-instances")
    {
        if(odu_hour24gfp_time_line_instances == nullptr)
        {
            odu_hour24gfp_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances>();
        }
        return odu_hour24gfp_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24gfp_time_line_instances != nullptr)
    {
        children["odu-hour24gfp-time-line-instances"] = odu_hour24gfp_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstances()
{

    yang_name = "odu-hour24gfp-time-line-instances"; yang_parent_name = "odu-hour24gfp-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::~OduHour24GfpTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<odu_hour24gfp_time_line_instance.size(); index++)
    {
        if(odu_hour24gfp_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp_time_line_instance.size(); index++)
    {
        if(odu_hour24gfp_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-time-line-instance")
    {
        for(auto const & c : odu_hour24gfp_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance>();
        c->parent = this;
        odu_hour24gfp_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24gfp_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::OduHour24GfpTimeLineInstance()
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
    rx_bit_err(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr>())
	,rx_crc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc>())
	,rx_csf(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf>())
	,rx_inv_typ(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp>())
	,rx_lfd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd>())
{
    rx_bit_err->parent = this;
    rx_crc->parent = this;
    rx_csf->parent = this;
    rx_inv_typ->parent = this;
    rx_lfd->parent = this;

    yang_name = "odu-hour24gfp-time-line-instance"; yang_parent_name = "odu-hour24gfp-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::~OduHour24GfpTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::has_data() const
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
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_data())
	|| (rx_crc !=  nullptr && rx_crc->has_data())
	|| (rx_csf !=  nullptr && rx_csf->has_data())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_data())
	|| (rx_lfd !=  nullptr && rx_lfd->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_operation())
	|| (rx_crc !=  nullptr && rx_crc->has_operation())
	|| (rx_csf !=  nullptr && rx_csf->has_operation())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_operation())
	|| (rx_lfd !=  nullptr && rx_lfd->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err == nullptr)
        {
            rx_bit_err = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr>();
        }
        return rx_bit_err;
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc == nullptr)
        {
            rx_crc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc>();
        }
        return rx_crc;
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf == nullptr)
        {
            rx_csf = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf>();
        }
        return rx_csf;
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ == nullptr)
        {
            rx_inv_typ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp>();
        }
        return rx_inv_typ;
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd == nullptr)
        {
            rx_lfd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd>();
        }
        return rx_lfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx_bit_err != nullptr)
    {
        children["rx-bit-err"] = rx_bit_err;
    }

    if(rx_crc != nullptr)
    {
        children["rx-crc"] = rx_crc;
    }

    if(rx_csf != nullptr)
    {
        children["rx-csf"] = rx_csf;
    }

    if(rx_inv_typ != nullptr)
    {
        children["rx-inv-typ"] = rx_inv_typ;
    }

    if(rx_lfd != nullptr)
    {
        children["rx-lfd"] = rx_lfd;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-bit-err" || name == "rx-crc" || name == "rx-csf" || name == "rx-inv-typ" || name == "rx-lfd" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-bit-err"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-crc"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::~RxCrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-csf"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::~RxCsf()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-inv-typ"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-lfd"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::~RxLfd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistories()
{

    yang_name = "odu-hour24otn-histories"; yang_parent_name = "odu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::~OduHour24OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::has_data() const
{
    for (std::size_t index=0; index<odu_hour24otn_history.size(); index++)
    {
        if(odu_hour24otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn_history.size(); index++)
    {
        if(odu_hour24otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-history")
    {
        for(auto const & c : odu_hour24otn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory>();
        c->parent = this;
        odu_hour24otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24otn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    odu_hour24otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances>())
{
    odu_hour24otn_time_line_instances->parent = this;

    yang_name = "odu-hour24otn-history"; yang_parent_name = "odu-hour24otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::~OduHour24OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::has_data() const
{
    return number.is_set
	|| (odu_hour24otn_time_line_instances !=  nullptr && odu_hour24otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_hour24otn_time_line_instances !=  nullptr && odu_hour24otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-time-line-instances")
    {
        if(odu_hour24otn_time_line_instances == nullptr)
        {
            odu_hour24otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances>();
        }
        return odu_hour24otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24otn_time_line_instances != nullptr)
    {
        children["odu-hour24otn-time-line-instances"] = odu_hour24otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstances()
{

    yang_name = "odu-hour24otn-time-line-instances"; yang_parent_name = "odu-hour24otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::~OduHour24OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<odu_hour24otn_time_line_instance.size(); index++)
    {
        if(odu_hour24otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn_time_line_instance.size(); index++)
    {
        if(odu_hour24otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-time-line-instance")
    {
        for(auto const & c : odu_hour24otn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance>();
        c->parent = this;
        odu_hour24otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24otn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::OduHour24OtnTimeLineInstance()
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
    bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe>())
{
    bbe_fe->parent = this;
    bbe_ne->parent = this;
    bber_fe->parent = this;
    bber_ne->parent = this;
    es_fe->parent = this;
    es_ne->parent = this;
    esr_fe->parent = this;
    esr_ne->parent = this;
    fc_fe->parent = this;
    fc_ne->parent = this;
    lbc->parent = this;
    ses_fe->parent = this;
    ses_ne->parent = this;
    sesr_fe->parent = this;
    sesr_ne->parent = this;
    uas_fe->parent = this;
    uas_ne->parent = this;

    yang_name = "odu-hour24otn-time-line-instance"; yang_parent_name = "odu-hour24otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::~OduHour24OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::has_data() const
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
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}


}
}

