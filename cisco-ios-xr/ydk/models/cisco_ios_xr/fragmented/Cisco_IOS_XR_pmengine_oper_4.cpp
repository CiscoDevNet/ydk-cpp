
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyifs()
{

    yang_name = "macsec-second30secyifs"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::~MacsecSecond30Secyifs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyif.size(); index++)
    {
        if(macsec_second30secyif[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyif.size(); index++)
    {
        if(macsec_second30secyif[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyif")
    {
        for(auto const & c : macsec_second30secyif)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif>();
        c->parent = this;
        macsec_second30secyif.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyif)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyif")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::MacsecSecond30Secyif()
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
    in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated>())
	,in_pkts_bad_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag>())
	,in_pkts_no_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci>())
	,in_pkts_no_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag>())
	,in_pkts_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun>())
	,in_pkts_unknown_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci>())
	,in_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged>())
	,out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong>())
	,out_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged>())
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

    yang_name = "macsec-second30secyif"; yang_parent_name = "macsec-second30secyifs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::~MacsecSecond30Secyif()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_data() const
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_operation() const
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

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-pkts-bad-tag")
    {
        if(in_pkts_bad_tag == nullptr)
        {
            in_pkts_bad_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag>();
        }
        return in_pkts_bad_tag;
    }

    if(child_yang_name == "in-pkts-no-sci")
    {
        if(in_pkts_no_sci == nullptr)
        {
            in_pkts_no_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci>();
        }
        return in_pkts_no_sci;
    }

    if(child_yang_name == "in-pkts-no-tag")
    {
        if(in_pkts_no_tag == nullptr)
        {
            in_pkts_no_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag>();
        }
        return in_pkts_no_tag;
    }

    if(child_yang_name == "in-pkts-overrun")
    {
        if(in_pkts_overrun == nullptr)
        {
            in_pkts_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun>();
        }
        return in_pkts_overrun;
    }

    if(child_yang_name == "in-pkts-unknown-sci")
    {
        if(in_pkts_unknown_sci == nullptr)
        {
            in_pkts_unknown_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci>();
        }
        return in_pkts_unknown_sci;
    }

    if(child_yang_name == "in-pkts-untagged")
    {
        if(in_pkts_untagged == nullptr)
        {
            in_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged>();
        }
        return in_pkts_untagged;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    if(child_yang_name == "out-pkts-untagged")
    {
        if(out_pkts_untagged == nullptr)
        {
            out_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged>();
        }
        return out_pkts_untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_children() const
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets-decrypted" || name == "in-octets-validated" || name == "in-pkts-bad-tag" || name == "in-pkts-no-sci" || name == "in-pkts-no-tag" || name == "in-pkts-overrun" || name == "in-pkts-unknown-sci" || name == "in-pkts-untagged" || name == "out-octets-encrypted" || name == "out-octets-protected" || name == "out-pkts-too-long" || name == "out-pkts-untagged" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::InPktsBadTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-bad-tag"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::~InPktsBadTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-bad-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::InPktsNoSci()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-sci"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::~InPktsNoSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::InPktsNoTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-tag"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::~InPktsNoTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::InPktsOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-overrun"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::~InPktsOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::InPktsUnknownSci()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unknown-sci"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::~InPktsUnknownSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unknown-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::InPktsUntagged()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::~InPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::OutPktsUntagged()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-untagged"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::~OutPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrxes()
{

    yang_name = "macsec-second30secyrxes"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::~MacsecSecond30Secyrxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyrx.size(); index++)
    {
        if(macsec_second30secyrx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyrx.size(); index++)
    {
        if(macsec_second30secyrx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyrx")
    {
        for(auto const & c : macsec_second30secyrx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx>();
        c->parent = this;
        macsec_second30secyrx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyrx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyrx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::MacsecSecond30Secyrx()
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
    in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated>())
	,in_pkts_delayed(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed>())
	,in_pkts_invalid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid>())
	,in_pkts_late(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate>())
	,in_pkts_not_using_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa>())
	,in_pkts_not_valid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid>())
	,in_pkts_ok(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk>())
	,in_pkts_unchecked(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked>())
	,in_pkts_untagged_hit(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit>())
	,in_pkts_unused_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa>())
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

    yang_name = "macsec-second30secyrx"; yang_parent_name = "macsec-second30secyrxes"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::~MacsecSecond30Secyrx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_data() const
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_operation() const
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

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-pkts-delayed")
    {
        if(in_pkts_delayed == nullptr)
        {
            in_pkts_delayed = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed>();
        }
        return in_pkts_delayed;
    }

    if(child_yang_name == "in-pkts-invalid")
    {
        if(in_pkts_invalid == nullptr)
        {
            in_pkts_invalid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid>();
        }
        return in_pkts_invalid;
    }

    if(child_yang_name == "in-pkts-late")
    {
        if(in_pkts_late == nullptr)
        {
            in_pkts_late = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate>();
        }
        return in_pkts_late;
    }

    if(child_yang_name == "in-pkts-not-using-sa")
    {
        if(in_pkts_not_using_sa == nullptr)
        {
            in_pkts_not_using_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa>();
        }
        return in_pkts_not_using_sa;
    }

    if(child_yang_name == "in-pkts-not-valid")
    {
        if(in_pkts_not_valid == nullptr)
        {
            in_pkts_not_valid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid>();
        }
        return in_pkts_not_valid;
    }

    if(child_yang_name == "in-pkts-ok")
    {
        if(in_pkts_ok == nullptr)
        {
            in_pkts_ok = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk>();
        }
        return in_pkts_ok;
    }

    if(child_yang_name == "in-pkts-unchecked")
    {
        if(in_pkts_unchecked == nullptr)
        {
            in_pkts_unchecked = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked>();
        }
        return in_pkts_unchecked;
    }

    if(child_yang_name == "in-pkts-untagged-hit")
    {
        if(in_pkts_untagged_hit == nullptr)
        {
            in_pkts_untagged_hit = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit>();
        }
        return in_pkts_untagged_hit;
    }

    if(child_yang_name == "in-pkts-unused-sa")
    {
        if(in_pkts_unused_sa == nullptr)
        {
            in_pkts_unused_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa>();
        }
        return in_pkts_unused_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_children() const
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets-decrypted" || name == "in-octets-validated" || name == "in-pkts-delayed" || name == "in-pkts-invalid" || name == "in-pkts-late" || name == "in-pkts-not-using-sa" || name == "in-pkts-not-valid" || name == "in-pkts-ok" || name == "in-pkts-unchecked" || name == "in-pkts-untagged-hit" || name == "in-pkts-unused-sa" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::InPktsDelayed()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-delayed"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::~InPktsDelayed()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::InPktsInvalid()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-invalid"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::~InPktsInvalid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::InPktsLate()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-late"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::~InPktsLate()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-late";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::InPktsNotUsingSa()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-using-sa"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::~InPktsNotUsingSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-using-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::InPktsNotValid()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-valid"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::~InPktsNotValid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::InPktsOk()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-ok"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::~InPktsOk()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-ok";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::InPktsUnchecked()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unchecked"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::~InPktsUnchecked()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unchecked";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::InPktsUntaggedHit()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged-hit"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::~InPktsUntaggedHit()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged-hit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::InPktsUnusedSa()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unused-sa"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::~InPktsUnusedSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unused-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytxes()
{

    yang_name = "macsec-second30secytxes"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::~MacsecSecond30Secytxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secytx.size(); index++)
    {
        if(macsec_second30secytx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secytx.size(); index++)
    {
        if(macsec_second30secytx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secytx")
    {
        for(auto const & c : macsec_second30secytx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx>();
        c->parent = this;
        macsec_second30secytx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secytx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secytx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::MacsecSecond30Secytx()
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
    out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected>())
	,out_pkts_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted>())
	,out_pkts_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong>())
{
    out_octets_encrypted->parent = this;
    out_octets_protected->parent = this;
    out_pkts_encrypted->parent = this;
    out_pkts_protected->parent = this;
    out_pkts_too_long->parent = this;

    yang_name = "macsec-second30secytx"; yang_parent_name = "macsec-second30secytxes"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::~MacsecSecond30Secytx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::has_data() const
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::has_operation() const
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

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-pkts-encrypted")
    {
        if(out_pkts_encrypted == nullptr)
        {
            out_pkts_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted>();
        }
        return out_pkts_encrypted;
    }

    if(child_yang_name == "out-pkts-protected")
    {
        if(out_pkts_protected == nullptr)
        {
            out_pkts_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected>();
        }
        return out_pkts_protected;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::get_children() const
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-octets-encrypted" || name == "out-octets-protected" || name == "out-pkts-encrypted" || name == "out-pkts-protected" || name == "out-pkts-too-long" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::OutPktsEncrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-encrypted"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::~OutPktsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::OutPktsProtected()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-protected"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::~OutPktsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes::MacsecSecond30Secytx::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Oc::Oc()
    :
    oc_ports(std::make_shared<PerformanceManagement::Oc::OcPorts>())
{
    oc_ports->parent = this;

    yang_name = "oc"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Oc::~Oc()
{
}

bool PerformanceManagement::Oc::has_data() const
{
    return (oc_ports !=  nullptr && oc_ports->has_data());
}

bool PerformanceManagement::Oc::has_operation() const
{
    return is_set(yfilter)
	|| (oc_ports !=  nullptr && oc_ports->has_operation());
}

std::string PerformanceManagement::Oc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Oc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-ports")
    {
        if(oc_ports == nullptr)
        {
            oc_ports = std::make_shared<PerformanceManagement::Oc::OcPorts>();
        }
        return oc_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_ports != nullptr)
    {
        children["oc-ports"] = oc_ports;
    }

    return children;
}

void PerformanceManagement::Oc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-ports")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPorts()
{

    yang_name = "oc-ports"; yang_parent_name = "oc"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Oc::OcPorts::~OcPorts()
{
}

bool PerformanceManagement::Oc::OcPorts::has_data() const
{
    for (std::size_t index=0; index<oc_port.size(); index++)
    {
        if(oc_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::has_operation() const
{
    for (std::size_t index=0; index<oc_port.size(); index++)
    {
        if(oc_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/oc/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Oc::OcPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-port")
    {
        for(auto const & c : oc_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort>();
        c->parent = this;
        oc_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-port")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcPort()
    :
    name{YType::str, "name"}
    	,
    oc_current(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent>())
{
    oc_current->parent = this;

    yang_name = "oc-port"; yang_parent_name = "oc-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Oc::OcPorts::OcPort::~OcPort()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::has_data() const
{
    return name.is_set
	|| (oc_current !=  nullptr && oc_current->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oc_current !=  nullptr && oc_current->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/oc/oc-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-current")
    {
        if(oc_current == nullptr)
        {
            oc_current = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent>();
        }
        return oc_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_current != nullptr)
    {
        children["oc-current"] = oc_current;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Oc::OcPorts::OcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Oc::OcPorts::OcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcCurrent()
    :
    oc_hour24(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24>())
	,oc_minute15(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15>())
{
    oc_hour24->parent = this;
    oc_minute15->parent = this;

    yang_name = "oc-current"; yang_parent_name = "oc-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::~OcCurrent()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::has_data() const
{
    return (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 == nullptr)
        {
            oc_hour24 = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24>();
        }
        return oc_hour24;
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 == nullptr)
        {
            oc_minute15 = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15>();
        }
        return oc_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24 != nullptr)
    {
        children["oc-hour24"] = oc_hour24;
    }

    if(oc_minute15 != nullptr)
    {
        children["oc-minute15"] = oc_minute15;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24" || name == "oc-minute15")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24()
    :
    oc_hour24ocns(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns>())
{
    oc_hour24ocns->parent = this;

    yang_name = "oc-hour24"; yang_parent_name = "oc-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::~OcHour24()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::has_data() const
{
    return (oc_hour24ocns !=  nullptr && oc_hour24ocns->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24ocns !=  nullptr && oc_hour24ocns->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocns")
    {
        if(oc_hour24ocns == nullptr)
        {
            oc_hour24ocns = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns>();
        }
        return oc_hour24ocns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24ocns != nullptr)
    {
        children["oc-hour24ocns"] = oc_hour24ocns;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocns")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocns()
{

    yang_name = "oc-hour24ocns"; yang_parent_name = "oc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::~OcHour24Ocns()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn.size(); index++)
    {
        if(oc_hour24ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn.size(); index++)
    {
        if(oc_hour24ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn")
    {
        for(auto const & c : oc_hour24ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn>();
        c->parent = this;
        oc_hour24ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24ocn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::OcHour24Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "oc-hour24ocn"; yang_parent_name = "oc-hour24ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::~OcHour24Ocn()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::has_data() const
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::has_operation() const
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

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::~Line()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::~Section()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15()
    :
    oc_minute15ocns(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns>())
{
    oc_minute15ocns->parent = this;

    yang_name = "oc-minute15"; yang_parent_name = "oc-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::~OcMinute15()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::has_data() const
{
    return (oc_minute15ocns !=  nullptr && oc_minute15ocns->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (oc_minute15ocns !=  nullptr && oc_minute15ocns->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocns")
    {
        if(oc_minute15ocns == nullptr)
        {
            oc_minute15ocns = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns>();
        }
        return oc_minute15ocns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15ocns != nullptr)
    {
        children["oc-minute15ocns"] = oc_minute15ocns;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocns")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocns()
{

    yang_name = "oc-minute15ocns"; yang_parent_name = "oc-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::~OcMinute15Ocns()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn.size(); index++)
    {
        if(oc_minute15ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn.size(); index++)
    {
        if(oc_minute15ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn")
    {
        for(auto const & c : oc_minute15ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn>();
        c->parent = this;
        oc_minute15ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15ocn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::OcMinute15Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "oc-minute15ocn"; yang_parent_name = "oc-minute15ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::~OcMinute15Ocn()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::has_data() const
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::has_operation() const
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

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::~Line()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::~Section()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_children() const
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::Odu()
    :
    odu_ports(std::make_shared<PerformanceManagement::Odu::OduPorts>())
{
    odu_ports->parent = this;

    yang_name = "odu"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Odu::~Odu()
{
}

bool PerformanceManagement::Odu::has_data() const
{
    return (odu_ports !=  nullptr && odu_ports->has_data());
}

bool PerformanceManagement::Odu::has_operation() const
{
    return is_set(yfilter)
	|| (odu_ports !=  nullptr && odu_ports->has_operation());
}

std::string PerformanceManagement::Odu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-ports")
    {
        if(odu_ports == nullptr)
        {
            odu_ports = std::make_shared<PerformanceManagement::Odu::OduPorts>();
        }
        return odu_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_ports != nullptr)
    {
        children["odu-ports"] = odu_ports;
    }

    return children;
}

void PerformanceManagement::Odu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-ports")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPorts()
{

    yang_name = "odu-ports"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Odu::OduPorts::~OduPorts()
{
}

bool PerformanceManagement::Odu::OduPorts::has_data() const
{
    for (std::size_t index=0; index<odu_port.size(); index++)
    {
        if(odu_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::has_operation() const
{
    for (std::size_t index=0; index<odu_port.size(); index++)
    {
        if(odu_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/odu/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Odu::OduPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-port")
    {
        for(auto const & c : odu_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort>();
        c->parent = this;
        odu_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-port")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduPort()
    :
    name{YType::str, "name"}
    	,
    odu_current(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent>())
{
    odu_current->parent = this;

    yang_name = "odu-port"; yang_parent_name = "odu-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Odu::OduPorts::OduPort::~OduPort()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::has_data() const
{
    return name.is_set
	|| (odu_current !=  nullptr && odu_current->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (odu_current !=  nullptr && odu_current->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/odu/odu-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-current")
    {
        if(odu_current == nullptr)
        {
            odu_current = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent>();
        }
        return odu_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_current != nullptr)
    {
        children["odu-current"] = odu_current;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Odu::OduPorts::OduPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Odu::OduPorts::OduPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduCurrent()
    :
    odu_hour24(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24>())
	,odu_minute15(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15>())
{
    odu_hour24->parent = this;
    odu_minute15->parent = this;

    yang_name = "odu-current"; yang_parent_name = "odu-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::~OduCurrent()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::has_data() const
{
    return (odu_hour24 !=  nullptr && odu_hour24->has_data())
	|| (odu_minute15 !=  nullptr && odu_minute15->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (odu_hour24 !=  nullptr && odu_hour24->has_operation())
	|| (odu_minute15 !=  nullptr && odu_minute15->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24")
    {
        if(odu_hour24 == nullptr)
        {
            odu_hour24 = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24>();
        }
        return odu_hour24;
    }

    if(child_yang_name == "odu-minute15")
    {
        if(odu_minute15 == nullptr)
        {
            odu_minute15 = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15>();
        }
        return odu_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24 != nullptr)
    {
        children["odu-hour24"] = odu_hour24;
    }

    if(odu_minute15 != nullptr)
    {
        children["odu-minute15"] = odu_minute15;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24" || name == "odu-minute15")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24()
    :
    odu_hour24gfps(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps>())
	,odu_hour24otns(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns>())
	,odu_hour24prbses(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses>())
{
    odu_hour24gfps->parent = this;
    odu_hour24otns->parent = this;
    odu_hour24prbses->parent = this;

    yang_name = "odu-hour24"; yang_parent_name = "odu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::~OduHour24()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::has_data() const
{
    return (odu_hour24gfps !=  nullptr && odu_hour24gfps->has_data())
	|| (odu_hour24otns !=  nullptr && odu_hour24otns->has_data())
	|| (odu_hour24prbses !=  nullptr && odu_hour24prbses->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::has_operation() const
{
    return is_set(yfilter)
	|| (odu_hour24gfps !=  nullptr && odu_hour24gfps->has_operation())
	|| (odu_hour24otns !=  nullptr && odu_hour24otns->has_operation())
	|| (odu_hour24prbses !=  nullptr && odu_hour24prbses->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfps")
    {
        if(odu_hour24gfps == nullptr)
        {
            odu_hour24gfps = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps>();
        }
        return odu_hour24gfps;
    }

    if(child_yang_name == "odu-hour24otns")
    {
        if(odu_hour24otns == nullptr)
        {
            odu_hour24otns = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns>();
        }
        return odu_hour24otns;
    }

    if(child_yang_name == "odu-hour24prbses")
    {
        if(odu_hour24prbses == nullptr)
        {
            odu_hour24prbses = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses>();
        }
        return odu_hour24prbses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_hour24gfps != nullptr)
    {
        children["odu-hour24gfps"] = odu_hour24gfps;
    }

    if(odu_hour24otns != nullptr)
    {
        children["odu-hour24otns"] = odu_hour24otns;
    }

    if(odu_hour24prbses != nullptr)
    {
        children["odu-hour24prbses"] = odu_hour24prbses;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfps" || name == "odu-hour24otns" || name == "odu-hour24prbses")
        return true;
    return false;
}


}
}

