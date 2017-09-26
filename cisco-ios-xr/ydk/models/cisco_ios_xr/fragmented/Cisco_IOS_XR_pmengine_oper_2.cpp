
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVc()
    :
    ho_vc_ports(std::make_shared<PerformanceManagement::HoVc::HoVcPorts>())
{
    ho_vc_ports->parent = this;

    yang_name = "ho-vc"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::HoVc::~HoVc()
{
}

bool PerformanceManagement::HoVc::has_data() const
{
    return (ho_vc_ports !=  nullptr && ho_vc_ports->has_data());
}

bool PerformanceManagement::HoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_ports !=  nullptr && ho_vc_ports->has_operation());
}

std::string PerformanceManagement::HoVc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-ports")
    {
        if(ho_vc_ports == nullptr)
        {
            ho_vc_ports = std::make_shared<PerformanceManagement::HoVc::HoVcPorts>();
        }
        return ho_vc_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_ports != nullptr)
    {
        children["ho-vc-ports"] = ho_vc_ports;
    }

    return children;
}

void PerformanceManagement::HoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-ports")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPorts()
{

    yang_name = "ho-vc-ports"; yang_parent_name = "ho-vc"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::HoVc::HoVcPorts::~HoVcPorts()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::has_data() const
{
    for (std::size_t index=0; index<ho_vc_port.size(); index++)
    {
        if(ho_vc_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_port.size(); index++)
    {
        if(ho_vc_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ho-vc/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::HoVc::HoVcPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-port")
    {
        for(auto const & c : ho_vc_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort>();
        c->parent = this;
        ho_vc_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-port")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcPort()
    :
    name{YType::str, "name"}
    	,
    ho_vc_current(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent>())
{
    ho_vc_current->parent = this;

    yang_name = "ho-vc-port"; yang_parent_name = "ho-vc-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::~HoVcPort()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::has_data() const
{
    return name.is_set
	|| (ho_vc_current !=  nullptr && ho_vc_current->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ho_vc_current !=  nullptr && ho_vc_current->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ho-vc/ho-vc-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-current")
    {
        if(ho_vc_current == nullptr)
        {
            ho_vc_current = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent>();
        }
        return ho_vc_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_current != nullptr)
    {
        children["ho-vc-current"] = ho_vc_current;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcCurrent()
    :
    ho_vc_hour24(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24>())
	,ho_vc_minute15(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15>())
{
    ho_vc_hour24->parent = this;
    ho_vc_minute15->parent = this;

    yang_name = "ho-vc-current"; yang_parent_name = "ho-vc-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::~HoVcCurrent()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::has_data() const
{
    return (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 == nullptr)
        {
            ho_vc_hour24 = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24>();
        }
        return ho_vc_hour24;
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 == nullptr)
        {
            ho_vc_minute15 = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15>();
        }
        return ho_vc_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24 != nullptr)
    {
        children["ho-vc-hour24"] = ho_vc_hour24;
    }

    if(ho_vc_minute15 != nullptr)
    {
        children["ho-vc-minute15"] = ho_vc_minute15;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24" || name == "ho-vc-minute15")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24_paths(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths>())
{
    ho_vc_hour24_paths->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "ho-vc-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::~HoVcHour24()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::has_data() const
{
    return (ho_vc_hour24_paths !=  nullptr && ho_vc_hour24_paths->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24_paths !=  nullptr && ho_vc_hour24_paths->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-paths")
    {
        if(ho_vc_hour24_paths == nullptr)
        {
            ho_vc_hour24_paths = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths>();
        }
        return ho_vc_hour24_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24_paths != nullptr)
    {
        children["ho-vc-hour24-paths"] = ho_vc_hour24_paths;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-paths")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Paths()
{

    yang_name = "ho-vc-hour24-paths"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::~HoVcHour24Paths()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path.size(); index++)
    {
        if(ho_vc_hour24_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path.size(); index++)
    {
        if(ho_vc_hour24_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path")
    {
        for(auto const & c : ho_vc_hour24_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path>();
        c->parent = this;
        ho_vc_hour24_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::HoVcHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath>())
	,path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "ho-vc-hour24-path"; yang_parent_name = "ho-vc-hour24-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::~HoVcHour24Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_path !=  nullptr && fe_path->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "ho-vc-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
        far_end_path_e_ss.value_namespace = name_space;
        far_end_path_e_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
        far_end_path_se_ss.value_namespace = name_space;
        far_end_path_se_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_bb_es(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs>())
	,path_e_bs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs>())
	,path_e_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs>())
{
    path_bb_es->parent = this;
    path_bbe_rs->parent = this;
    path_e_bs->parent = this;
    path_e_ss->parent = this;
    path_es_rs->parent = this;
    path_se_ss->parent = this;
    path_ses_rs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "ho-vc-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::~Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::has_data() const
{
    return path_status.is_set
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es == nullptr)
        {
            path_bb_es = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs>();
        }
        return path_bb_es;
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs == nullptr)
        {
            path_bbe_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs>();
        }
        return path_bbe_rs;
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs == nullptr)
        {
            path_e_bs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs>();
        }
        return path_e_bs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs == nullptr)
        {
            path_es_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs>();
        }
        return path_es_rs;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs == nullptr)
        {
            path_ses_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs>();
        }
        return path_ses_rs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_bb_es != nullptr)
    {
        children["path-bb-es"] = path_bb_es;
    }

    if(path_bbe_rs != nullptr)
    {
        children["path-bbe-rs"] = path_bbe_rs;
    }

    if(path_e_bs != nullptr)
    {
        children["path-e-bs"] = path_e_bs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_es_rs != nullptr)
    {
        children["path-es-rs"] = path_es_rs;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ses_rs != nullptr)
    {
        children["path-ses-rs"] = path_ses_rs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-bb-es" || name == "path-bbe-rs" || name == "path-e-bs" || name == "path-e-ss" || name == "path-es-rs" || name == "path-se-ss" || name == "path-ses-rs" || name == "path-ua-ss" || name == "path-status")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-bb-es"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-bbe-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-bs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-es-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-ses-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15_paths(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths>())
{
    ho_vc_minute15_paths->parent = this;

    yang_name = "ho-vc-minute15"; yang_parent_name = "ho-vc-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::~HoVcMinute15()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::has_data() const
{
    return (ho_vc_minute15_paths !=  nullptr && ho_vc_minute15_paths->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15_paths !=  nullptr && ho_vc_minute15_paths->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-paths")
    {
        if(ho_vc_minute15_paths == nullptr)
        {
            ho_vc_minute15_paths = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths>();
        }
        return ho_vc_minute15_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_minute15_paths != nullptr)
    {
        children["ho-vc-minute15-paths"] = ho_vc_minute15_paths;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-paths")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Paths()
{

    yang_name = "ho-vc-minute15-paths"; yang_parent_name = "ho-vc-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::~HoVcMinute15Paths()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path.size(); index++)
    {
        if(ho_vc_minute15_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path.size(); index++)
    {
        if(ho_vc_minute15_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path")
    {
        for(auto const & c : ho_vc_minute15_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path>();
        c->parent = this;
        ho_vc_minute15_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_minute15_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::HoVcMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath>())
	,path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "ho-vc-minute15-path"; yang_parent_name = "ho-vc-minute15-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::~HoVcMinute15Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_path !=  nullptr && fe_path->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "ho-vc-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
        far_end_path_e_ss.value_namespace = name_space;
        far_end_path_e_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
        far_end_path_se_ss.value_namespace = name_space;
        far_end_path_se_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_bb_es(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs>())
	,path_e_bs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs>())
	,path_e_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs>())
{
    path_bb_es->parent = this;
    path_bbe_rs->parent = this;
    path_e_bs->parent = this;
    path_e_ss->parent = this;
    path_es_rs->parent = this;
    path_se_ss->parent = this;
    path_ses_rs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "ho-vc-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::has_data() const
{
    return path_status.is_set
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es == nullptr)
        {
            path_bb_es = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs>();
        }
        return path_bb_es;
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs == nullptr)
        {
            path_bbe_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs>();
        }
        return path_bbe_rs;
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs == nullptr)
        {
            path_e_bs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs>();
        }
        return path_e_bs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs == nullptr)
        {
            path_es_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs>();
        }
        return path_es_rs;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs == nullptr)
        {
            path_ses_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs>();
        }
        return path_ses_rs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_bb_es != nullptr)
    {
        children["path-bb-es"] = path_bb_es;
    }

    if(path_bbe_rs != nullptr)
    {
        children["path-bbe-rs"] = path_bbe_rs;
    }

    if(path_e_bs != nullptr)
    {
        children["path-e-bs"] = path_e_bs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_es_rs != nullptr)
    {
        children["path-es-rs"] = path_es_rs;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ses_rs != nullptr)
    {
        children["path-ses-rs"] = path_ses_rs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-bb-es" || name == "path-bbe-rs" || name == "path-e-bs" || name == "path-e-ss" || name == "path-es-rs" || name == "path-se-ss" || name == "path-ses-rs" || name == "path-ua-ss" || name == "path-status")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-bb-es"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-bbe-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-bs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-es-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-ses-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Macsec::Macsec()
    :
    macsec_ports(std::make_shared<PerformanceManagement::Macsec::MacsecPorts>())
{
    macsec_ports->parent = this;

    yang_name = "macsec"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::~Macsec()
{
}

bool PerformanceManagement::Macsec::has_data() const
{
    return (macsec_ports !=  nullptr && macsec_ports->has_data());
}

bool PerformanceManagement::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_ports !=  nullptr && macsec_ports->has_operation());
}

std::string PerformanceManagement::Macsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-ports")
    {
        if(macsec_ports == nullptr)
        {
            macsec_ports = std::make_shared<PerformanceManagement::Macsec::MacsecPorts>();
        }
        return macsec_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_ports != nullptr)
    {
        children["macsec-ports"] = macsec_ports;
    }

    return children;
}

void PerformanceManagement::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-ports")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPorts()
{

    yang_name = "macsec-ports"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::MacsecPorts::~MacsecPorts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::has_data() const
{
    for (std::size_t index=0; index<macsec_port.size(); index++)
    {
        if(macsec_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::has_operation() const
{
    for (std::size_t index=0; index<macsec_port.size(); index++)
    {
        if(macsec_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/macsec/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::MacsecPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-port")
    {
        for(auto const & c : macsec_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort>();
        c->parent = this;
        macsec_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-port")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecPort()
    :
    name{YType::str, "name"}
    	,
    macsec_current(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent>())
{
    macsec_current->parent = this;

    yang_name = "macsec-port"; yang_parent_name = "macsec-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::~MacsecPort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_data() const
{
    return name.is_set
	|| (macsec_current !=  nullptr && macsec_current->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (macsec_current !=  nullptr && macsec_current->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/macsec/macsec-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-current")
    {
        if(macsec_current == nullptr)
        {
            macsec_current = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent>();
        }
        return macsec_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_current != nullptr)
    {
        children["macsec-current"] = macsec_current;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecCurrent()
    :
    macsec_hour24(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24>())
	,macsec_minute15(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15>())
	,macsec_second30(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30>())
{
    macsec_hour24->parent = this;
    macsec_minute15->parent = this;
    macsec_second30->parent = this;

    yang_name = "macsec-current"; yang_parent_name = "macsec-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::~MacsecCurrent()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_data() const
{
    return (macsec_hour24 !=  nullptr && macsec_hour24->has_data())
	|| (macsec_minute15 !=  nullptr && macsec_minute15->has_data())
	|| (macsec_second30 !=  nullptr && macsec_second30->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_hour24 !=  nullptr && macsec_hour24->has_operation())
	|| (macsec_minute15 !=  nullptr && macsec_minute15->has_operation())
	|| (macsec_second30 !=  nullptr && macsec_second30->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24")
    {
        if(macsec_hour24 == nullptr)
        {
            macsec_hour24 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24>();
        }
        return macsec_hour24;
    }

    if(child_yang_name == "macsec-minute15")
    {
        if(macsec_minute15 == nullptr)
        {
            macsec_minute15 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15>();
        }
        return macsec_minute15;
    }

    if(child_yang_name == "macsec-second30")
    {
        if(macsec_second30 == nullptr)
        {
            macsec_second30 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30>();
        }
        return macsec_second30;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_hour24 != nullptr)
    {
        children["macsec-hour24"] = macsec_hour24;
    }

    if(macsec_minute15 != nullptr)
    {
        children["macsec-minute15"] = macsec_minute15;
    }

    if(macsec_second30 != nullptr)
    {
        children["macsec-second30"] = macsec_second30;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24" || name == "macsec-minute15" || name == "macsec-second30")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24()
    :
    macsec_hour24_ether_s(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS>())
	,macsec_hour24secyifs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs>())
	,macsec_hour24secyrxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes>())
	,macsec_hour24secytxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes>())
{
    macsec_hour24_ether_s->parent = this;
    macsec_hour24secyifs->parent = this;
    macsec_hour24secyrxes->parent = this;
    macsec_hour24secytxes->parent = this;

    yang_name = "macsec-hour24"; yang_parent_name = "macsec-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::~MacsecHour24()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_data() const
{
    return (macsec_hour24_ether_s !=  nullptr && macsec_hour24_ether_s->has_data())
	|| (macsec_hour24secyifs !=  nullptr && macsec_hour24secyifs->has_data())
	|| (macsec_hour24secyrxes !=  nullptr && macsec_hour24secyrxes->has_data())
	|| (macsec_hour24secytxes !=  nullptr && macsec_hour24secytxes->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_hour24_ether_s !=  nullptr && macsec_hour24_ether_s->has_operation())
	|| (macsec_hour24secyifs !=  nullptr && macsec_hour24secyifs->has_operation())
	|| (macsec_hour24secyrxes !=  nullptr && macsec_hour24secyrxes->has_operation())
	|| (macsec_hour24secytxes !=  nullptr && macsec_hour24secytxes->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24-ether-s")
    {
        if(macsec_hour24_ether_s == nullptr)
        {
            macsec_hour24_ether_s = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS>();
        }
        return macsec_hour24_ether_s;
    }

    if(child_yang_name == "macsec-hour24secyifs")
    {
        if(macsec_hour24secyifs == nullptr)
        {
            macsec_hour24secyifs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs>();
        }
        return macsec_hour24secyifs;
    }

    if(child_yang_name == "macsec-hour24secyrxes")
    {
        if(macsec_hour24secyrxes == nullptr)
        {
            macsec_hour24secyrxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes>();
        }
        return macsec_hour24secyrxes;
    }

    if(child_yang_name == "macsec-hour24secytxes")
    {
        if(macsec_hour24secytxes == nullptr)
        {
            macsec_hour24secytxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes>();
        }
        return macsec_hour24secytxes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_hour24_ether_s != nullptr)
    {
        children["macsec-hour24-ether-s"] = macsec_hour24_ether_s;
    }

    if(macsec_hour24secyifs != nullptr)
    {
        children["macsec-hour24secyifs"] = macsec_hour24secyifs;
    }

    if(macsec_hour24secyrxes != nullptr)
    {
        children["macsec-hour24secyrxes"] = macsec_hour24secyrxes;
    }

    if(macsec_hour24secytxes != nullptr)
    {
        children["macsec-hour24secytxes"] = macsec_hour24secytxes;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24-ether-s" || name == "macsec-hour24secyifs" || name == "macsec-hour24secyrxes" || name == "macsec-hour24secytxes")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24EtherS()
{

    yang_name = "macsec-hour24-ether-s"; yang_parent_name = "macsec-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::~MacsecHour24EtherS()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_data() const
{
    for (std::size_t index=0; index<macsec_hour24_ether.size(); index++)
    {
        if(macsec_hour24_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_operation() const
{
    for (std::size_t index=0; index<macsec_hour24_ether.size(); index++)
    {
        if(macsec_hour24_ether[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24-ether-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24-ether")
    {
        for(auto const & c : macsec_hour24_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether>();
        c->parent = this;
        macsec_hour24_ether.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_hour24_ether)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24-ether")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::MacsecHour24Ether()
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
    ether10241518_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil>())
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

    yang_name = "macsec-hour24-ether"; yang_parent_name = "macsec-hour24-ether-s"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::~MacsecHour24Ether()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_data() const
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_operation() const
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

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24-ether" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil>();
        }
        return tx_util;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_children() const
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether10241518-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-multicast-pkt" || name == "ether-stat-undersized-pkt" || name == "fcs-errors-stat" || name == "if-in-errors" || name == "if-in-octets" || name == "in8021q-frames" || name == "in-bcast-pkt" || name == "in-drop-abort" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-invalid-vlan" || name == "in-drop-other" || name == "in-drop-overrun" || name == "in-error-collisions" || name == "in-error-fragments" || name == "in-error-giant" || name == "in-error-jabbers" || name == "in-error-other" || name == "in-error-runt" || name == "in-error-symbol" || name == "in-good-bytes" || name == "in-good-pkts" || name == "in-mcast-pkt" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-pause-frame" || name == "in-pkt64-octet" || name == "in-pkts1024-to1518-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts1519-max-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts65-to127-octets" || name == "in-ucast-pkt" || name == "jabber-stat" || name == "long-frames-stat" || name == "octet-stat" || name == "out8021q-frames" || name == "out-bcast-pkt" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-drop-underrun" || name == "out-error-other" || name == "out-good-bytes" || name == "out-good-pkts" || name == "out-mcast-pkt" || name == "out-octets" || name == "out-pause-frames" || name == "out-pkts10241518-octets" || name == "out-pkts128255-octets" || name == "out-pkts1519-max-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts65127-octets" || name == "out-ucast-pkt" || name == "outpkt64octet" || name == "oversize-pkt-stat" || name == "rx-pkt" || name == "rx-util" || name == "stat-pkt" || name == "tx-bad-fcs" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-oversized-pkt" || name == "tx-pkt" || name == "tx-undersized-pkt" || name == "tx-util" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyifs()
{

    yang_name = "macsec-hour24secyifs"; yang_parent_name = "macsec-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::~MacsecHour24Secyifs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::has_data() const
{
    for (std::size_t index=0; index<macsec_hour24secyif.size(); index++)
    {
        if(macsec_hour24secyif[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::has_operation() const
{
    for (std::size_t index=0; index<macsec_hour24secyif.size(); index++)
    {
        if(macsec_hour24secyif[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24secyifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24secyif")
    {
        for(auto const & c : macsec_hour24secyif)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif>();
        c->parent = this;
        macsec_hour24secyif.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_hour24secyif)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24secyif")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::MacsecHour24Secyif()
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
    in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated>())
	,in_pkts_bad_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag>())
	,in_pkts_no_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci>())
	,in_pkts_no_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag>())
	,in_pkts_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun>())
	,in_pkts_unknown_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci>())
	,in_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged>())
	,out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong>())
	,out_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged>())
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

    yang_name = "macsec-hour24secyif"; yang_parent_name = "macsec-hour24secyifs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::~MacsecHour24Secyif()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::has_data() const
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::has_operation() const
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

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24secyif" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-pkts-bad-tag")
    {
        if(in_pkts_bad_tag == nullptr)
        {
            in_pkts_bad_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag>();
        }
        return in_pkts_bad_tag;
    }

    if(child_yang_name == "in-pkts-no-sci")
    {
        if(in_pkts_no_sci == nullptr)
        {
            in_pkts_no_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci>();
        }
        return in_pkts_no_sci;
    }

    if(child_yang_name == "in-pkts-no-tag")
    {
        if(in_pkts_no_tag == nullptr)
        {
            in_pkts_no_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag>();
        }
        return in_pkts_no_tag;
    }

    if(child_yang_name == "in-pkts-overrun")
    {
        if(in_pkts_overrun == nullptr)
        {
            in_pkts_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun>();
        }
        return in_pkts_overrun;
    }

    if(child_yang_name == "in-pkts-unknown-sci")
    {
        if(in_pkts_unknown_sci == nullptr)
        {
            in_pkts_unknown_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci>();
        }
        return in_pkts_unknown_sci;
    }

    if(child_yang_name == "in-pkts-untagged")
    {
        if(in_pkts_untagged == nullptr)
        {
            in_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged>();
        }
        return in_pkts_untagged;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    if(child_yang_name == "out-pkts-untagged")
    {
        if(out_pkts_untagged == nullptr)
        {
            out_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged>();
        }
        return out_pkts_untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::get_children() const
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets-decrypted" || name == "in-octets-validated" || name == "in-pkts-bad-tag" || name == "in-pkts-no-sci" || name == "in-pkts-no-tag" || name == "in-pkts-overrun" || name == "in-pkts-unknown-sci" || name == "in-pkts-untagged" || name == "out-octets-encrypted" || name == "out-octets-protected" || name == "out-pkts-too-long" || name == "out-pkts-untagged" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sample-count" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::InPktsBadTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-bad-tag"; yang_parent_name = "macsec-hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::~InPktsBadTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-bad-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::InPktsNoSci()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-sci"; yang_parent_name = "macsec-hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::~InPktsNoSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::InPktsNoTag()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-tag"; yang_parent_name = "macsec-hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::~InPktsNoTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}


}
}

