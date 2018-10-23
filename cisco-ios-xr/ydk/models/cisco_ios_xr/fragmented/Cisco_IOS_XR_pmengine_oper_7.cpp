
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"
#include "Cisco_IOS_XR_pmengine_oper_8.hpp"
#include "Cisco_IOS_XR_pmengine_oper_10.hpp"
#include "Cisco_IOS_XR_pmengine_oper_14.hpp"
#include "Cisco_IOS_XR_pmengine_oper_15.hpp"
#include "Cisco_IOS_XR_pmengine_oper_16.hpp"
#include "Cisco_IOS_XR_pmengine_oper_11.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::Outpkt64octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::~Outpkt64octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "ethernet-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcses()
    :
    hour24pcs(this, {"number"})
{

    yang_name = "hour24pcses"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::~Hour24pcses()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24pcs.len(); index++)
    {
        if(hour24pcs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::has_operation() const
{
    for (std::size_t index=0; index<hour24pcs.len(); index++)
    {
        if(hour24pcs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs>();
        ent_->parent = this;
        hour24pcs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24pcs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Hour24pcs()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    bip(this, {})
    , frm_err(this, {})
{

    yang_name = "hour24pcs"; yang_parent_name = "hour24pcses"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::~Hour24pcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_data())
            return true;
    }
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::has_operation() const
{
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bip")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip>();
        ent_->parent = this;
        bip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "frm-err")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr>();
        ent_->parent = this;
        frm_err.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : frm_err.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bip" || name == "frm-err" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::Bip()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bip"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::~Bip()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::Bip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::FrmErr()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "frm-err"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::~FrmErr()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frm-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::Hour24pcses::Hour24pcs::FrmErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fecs()
    :
    ethernet_hour24fec(this, {"number"})
{

    yang_name = "ethernet-hour24fecs"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::~EthernetHour24fecs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_hour24fec.len(); index++)
    {
        if(ethernet_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::has_operation() const
{
    for (std::size_t index=0; index<ethernet_hour24fec.len(); index++)
    {
        if(ethernet_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24fec")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec>();
        ent_->parent = this;
        ethernet_hour24fec.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_hour24fec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-hour24fec")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EthernetHour24fec()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    ec_bits(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits>())
    , uc_words(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords>())
    , pre_fec_ber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer>())
    , post_fec_ber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer>())
    , q(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q>())
    , qmargin(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "ethernet-hour24fec"; yang_parent_name = "ethernet-hour24fecs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::~EthernetHour24fec()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24fec";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec_bits != nullptr)
    {
        _children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        _children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        _children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        _children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        _children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        _children["qmargin"] = qmargin;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::~Q()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "ethernet-hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24fecs::EthernetHour24fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15()
    :
    minute15_fecs(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs>())
    , minute15pcses(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses>())
    , minute15_ethers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers>())
{
    minute15_fecs->parent = this;
    minute15pcses->parent = this;
    minute15_ethers->parent = this;

    yang_name = "minute15"; yang_parent_name = "ethernet-current"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::~Minute15()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_fecs !=  nullptr && minute15_fecs->has_data())
	|| (minute15pcses !=  nullptr && minute15pcses->has_data())
	|| (minute15_ethers !=  nullptr && minute15_ethers->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_fecs !=  nullptr && minute15_fecs->has_operation())
	|| (minute15pcses !=  nullptr && minute15pcses->has_operation())
	|| (minute15_ethers !=  nullptr && minute15_ethers->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-fecs")
    {
        if(minute15_fecs == nullptr)
        {
            minute15_fecs = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs>();
        }
        return minute15_fecs;
    }

    if(child_yang_name == "minute15pcses")
    {
        if(minute15pcses == nullptr)
        {
            minute15pcses = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses>();
        }
        return minute15pcses;
    }

    if(child_yang_name == "minute15-ethers")
    {
        if(minute15_ethers == nullptr)
        {
            minute15_ethers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers>();
        }
        return minute15_ethers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_fecs != nullptr)
    {
        _children["minute15-fecs"] = minute15_fecs;
    }

    if(minute15pcses != nullptr)
    {
        _children["minute15pcses"] = minute15pcses;
    }

    if(minute15_ethers != nullptr)
    {
        _children["minute15-ethers"] = minute15_ethers;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-fecs" || name == "minute15pcses" || name == "minute15-ethers")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fecs()
    :
    minute15_fec(this, {"slot_number"})
{

    yang_name = "minute15-fecs"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::~Minute15Fecs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_fec.len(); index++)
    {
        if(minute15_fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<minute15_fec.len(); index++)
    {
        if(minute15_fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-fec")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec>();
        ent_->parent = this;
        minute15_fec.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_fec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-fec")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Minute15Fec()
    :
    slot_number{YType::uint32, "slot-number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    ec_bits(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits>())
    , uc_words(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords>())
    , pre_fec_ber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer>())
    , post_fec_ber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer>())
    , q(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q>())
    , qmargin(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "minute15-fec"; yang_parent_name = "minute15-fecs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::~Minute15Fec()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::has_data() const
{
    if (is_presence_container) return true;
    return slot_number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-fec";
    ADD_KEY_TOKEN(slot_number, "slot-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec_bits != nullptr)
    {
        _children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        _children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        _children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        _children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        _children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        _children["qmargin"] = qmargin;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "slot-number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "minute15-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Fecs::Minute15Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcses()
    :
    minute15pcs(this, {"slot_number"})
{

    yang_name = "minute15pcses"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::~Minute15pcses()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15pcs.len(); index++)
    {
        if(minute15pcs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::has_operation() const
{
    for (std::size_t index=0; index<minute15pcs.len(); index++)
    {
        if(minute15pcs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs>();
        ent_->parent = this;
        minute15pcs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15pcs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15pcs")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Minute15pcs()
    :
    slot_number{YType::uint32, "slot-number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    bip(this, {})
    , frm_err(this, {})
{

    yang_name = "minute15pcs"; yang_parent_name = "minute15pcses"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::~Minute15pcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_data())
            return true;
    }
    return slot_number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::has_operation() const
{
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs";
    ADD_KEY_TOKEN(slot_number, "slot-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bip")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip>();
        ent_->parent = this;
        bip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "frm-err")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr>();
        ent_->parent = this;
        frm_err.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : frm_err.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bip" || name == "frm-err" || name == "slot-number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::Bip()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bip"; yang_parent_name = "minute15pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::~Bip()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::Bip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::FrmErr()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "frm-err"; yang_parent_name = "minute15pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::~FrmErr()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frm-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15pcses::Minute15pcs::FrmErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ethers()
    :
    minute15_ether(this, {"slot_number"})
{

    yang_name = "minute15-ethers"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::~Minute15Ethers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether.len(); index++)
    {
        if(minute15_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether.len(); index++)
    {
        if(minute15_ether[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ethers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether>();
        ent_->parent = this;
        minute15_ether.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Minute15Ether()
    :
    slot_number{YType::uint32, "slot-number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    rx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt>())
    , stat_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt>())
    , octet_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat>())
    , oversize_pkt_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat>())
    , fcs_errors_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat>())
    , long_frames_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat>())
    , jabber_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat>())
    , ether64_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets>())
    , ether65127_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet>())
    , ether128255_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet>())
    , ether256511_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet>())
    , ether5121023_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet>())
    , ether10241518_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet>())
    , in_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt>())
    , in_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt>())
    , in_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt>())
    , out_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt>())
    , out_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt>())
    , out_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt>())
    , tx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt>())
    , if_in_errors(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors>())
    , if_in_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets>())
    , ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt>())
    , ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt>())
    , ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt>())
    , out_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets>())
    , in_pause_frame(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame>())
    , in_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes>())
    , in8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames>())
    , in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets>())
    , in_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts>())
    , in_drop_overrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun>())
    , in_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort>())
    , in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan>())
    , in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac>())
    , in_drop_invalid_encap(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap>())
    , in_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther>())
    , in_mib_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant>())
    , in_mib_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber>())
    , in_mibcrc(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc>())
    , in_error_collisions(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions>())
    , in_error_symbol(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol>())
    , out_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes>())
    , out8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames>())
    , out_pause_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames>())
    , out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets>())
    , out_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts>())
    , out_drop_underrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun>())
    , out_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort>())
    , out_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther>())
    , out_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther>())
    , in_error_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant>())
    , in_error_runt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt>())
    , in_error_jabbers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers>())
    , in_error_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments>())
    , in_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther>())
    , in_pkt64_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet>())
    , in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets>())
    , in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets>())
    , in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets>())
    , in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets>())
    , in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets>())
    , outpkt64octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet>())
    , out_pkts65127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets>())
    , out_pkts128255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets>())
    , out_pkts256511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets>())
    , out_pkts5121023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets>())
    , out_pkts10241518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets>())
    , rx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil>())
    , tx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil>())
    , tx_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt>())
    , tx_oversized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt>())
    , tx_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments>())
    , tx_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber>())
    , tx_bad_fcs(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs>())
{
    rx_pkt->parent = this;
    stat_pkt->parent = this;
    octet_stat->parent = this;
    oversize_pkt_stat->parent = this;
    fcs_errors_stat->parent = this;
    long_frames_stat->parent = this;
    jabber_stat->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether10241518_octet->parent = this;
    in_ucast_pkt->parent = this;
    in_mcast_pkt->parent = this;
    in_bcast_pkt->parent = this;
    out_ucast_pkt->parent = this;
    out_bcast_pkt->parent = this;
    out_mcast_pkt->parent = this;
    tx_pkt->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    out_octets->parent = this;
    in_pause_frame->parent = this;
    in_good_bytes->parent = this;
    in8021q_frames->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_good_pkts->parent = this;
    in_drop_overrun->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_other->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_error_collisions->parent = this;
    in_error_symbol->parent = this;
    out_good_bytes->parent = this;
    out8021q_frames->parent = this;
    out_pause_frames->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_good_pkts->parent = this;
    out_drop_underrun->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_error_other->parent = this;
    in_error_giant->parent = this;
    in_error_runt->parent = this;
    in_error_jabbers->parent = this;
    in_error_fragments->parent = this;
    in_error_other->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    outpkt64octet->parent = this;
    out_pkts65127_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts10241518_octets->parent = this;
    rx_util->parent = this;
    tx_util->parent = this;
    tx_undersized_pkt->parent = this;
    tx_oversized_pkt->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_bad_fcs->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "minute15-ethers"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::~Minute15Ether()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::has_data() const
{
    if (is_presence_container) return true;
    return slot_number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    ADD_KEY_TOKEN(slot_number, "slot-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_pkt != nullptr)
    {
        _children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        _children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        _children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        _children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        _children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        _children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        _children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        _children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        _children["ether65127-octet"] = ether65127_octet;
    }

    if(ether128255_octet != nullptr)
    {
        _children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        _children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        _children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether10241518_octet != nullptr)
    {
        _children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        _children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        _children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        _children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        _children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        _children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        _children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        _children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        _children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        _children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        _children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        _children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        _children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        _children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        _children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        _children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        _children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        _children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        _children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        _children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        _children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        _children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        _children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        _children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        _children["in-drop-other"] = in_drop_other;
    }

    if(in_mib_giant != nullptr)
    {
        _children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        _children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        _children["in-mibcrc"] = in_mibcrc;
    }

    if(in_error_collisions != nullptr)
    {
        _children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        _children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        _children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        _children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        _children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        _children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        _children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        _children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        _children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        _children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        _children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        _children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        _children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        _children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        _children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        _children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        _children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        _children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        _children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        _children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        _children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        _children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        _children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        _children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        _children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        _children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        _children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        _children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        _children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        _children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        _children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        _children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        _children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        _children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        _children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "slot-number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::In8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::~In8021qFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::Out8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::~Out8021qFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::Outpkt64octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::~Outpkt64octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::PerformanceManagementHistory()
    :
    global(std::make_shared<PerformanceManagementHistory::Global>())
{
    global->parent = this;

    yang_name = "performance-management-history"; yang_parent_name = "Cisco-IOS-XR-pmengine-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PerformanceManagementHistory::~PerformanceManagementHistory()
{
}

bool PerformanceManagementHistory::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool PerformanceManagementHistory::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string PerformanceManagementHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<PerformanceManagementHistory::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void PerformanceManagementHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::clone_ptr() const
{
    return std::make_shared<PerformanceManagementHistory>();
}

std::string PerformanceManagementHistory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceManagementHistory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceManagementHistory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerformanceManagementHistory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerformanceManagementHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Global()
    :
    periodic(std::make_shared<PerformanceManagementHistory::Global::Periodic>())
{
    periodic->parent = this;

    yang_name = "global"; yang_parent_name = "performance-management-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::~Global()
{
}

bool PerformanceManagementHistory::Global::has_data() const
{
    if (is_presence_container) return true;
    return (periodic !=  nullptr && periodic->has_data());
}

bool PerformanceManagementHistory::Global::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string PerformanceManagementHistory::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<PerformanceManagementHistory::Global::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void PerformanceManagementHistory::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::Periodic()
    :
    sonet_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory>())
    , sts_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory>())
    , ethernet_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory>())
    , dwdm_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory>())
    , stm_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory>())
    , macsec_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory>())
    , odu_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory>())
    , otu_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory>())
    , ho_vc_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory>())
    , optics_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory>())
    , oc_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory>())
{
    sonet_history->parent = this;
    sts_history->parent = this;
    ethernet_history->parent = this;
    dwdm_history->parent = this;
    stm_history->parent = this;
    macsec_history->parent = this;
    odu_history->parent = this;
    otu_history->parent = this;
    ho_vc_history->parent = this;
    optics_history->parent = this;
    oc_history->parent = this;

    yang_name = "periodic"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::~Periodic()
{
}

bool PerformanceManagementHistory::Global::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_history !=  nullptr && sonet_history->has_data())
	|| (sts_history !=  nullptr && sts_history->has_data())
	|| (ethernet_history !=  nullptr && ethernet_history->has_data())
	|| (dwdm_history !=  nullptr && dwdm_history->has_data())
	|| (stm_history !=  nullptr && stm_history->has_data())
	|| (macsec_history !=  nullptr && macsec_history->has_data())
	|| (odu_history !=  nullptr && odu_history->has_data())
	|| (otu_history !=  nullptr && otu_history->has_data())
	|| (ho_vc_history !=  nullptr && ho_vc_history->has_data())
	|| (optics_history !=  nullptr && optics_history->has_data())
	|| (oc_history !=  nullptr && oc_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_history !=  nullptr && sonet_history->has_operation())
	|| (sts_history !=  nullptr && sts_history->has_operation())
	|| (ethernet_history !=  nullptr && ethernet_history->has_operation())
	|| (dwdm_history !=  nullptr && dwdm_history->has_operation())
	|| (stm_history !=  nullptr && stm_history->has_operation())
	|| (macsec_history !=  nullptr && macsec_history->has_operation())
	|| (odu_history !=  nullptr && odu_history->has_operation())
	|| (otu_history !=  nullptr && otu_history->has_operation())
	|| (ho_vc_history !=  nullptr && ho_vc_history->has_operation())
	|| (optics_history !=  nullptr && optics_history->has_operation())
	|| (oc_history !=  nullptr && oc_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-history")
    {
        if(sonet_history == nullptr)
        {
            sonet_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory>();
        }
        return sonet_history;
    }

    if(child_yang_name == "sts-history")
    {
        if(sts_history == nullptr)
        {
            sts_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory>();
        }
        return sts_history;
    }

    if(child_yang_name == "ethernet-history")
    {
        if(ethernet_history == nullptr)
        {
            ethernet_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory>();
        }
        return ethernet_history;
    }

    if(child_yang_name == "dwdm-history")
    {
        if(dwdm_history == nullptr)
        {
            dwdm_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory>();
        }
        return dwdm_history;
    }

    if(child_yang_name == "stm-history")
    {
        if(stm_history == nullptr)
        {
            stm_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory>();
        }
        return stm_history;
    }

    if(child_yang_name == "macsec-history")
    {
        if(macsec_history == nullptr)
        {
            macsec_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::MacsecHistory>();
        }
        return macsec_history;
    }

    if(child_yang_name == "odu-history")
    {
        if(odu_history == nullptr)
        {
            odu_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory>();
        }
        return odu_history;
    }

    if(child_yang_name == "otu-history")
    {
        if(otu_history == nullptr)
        {
            otu_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory>();
        }
        return otu_history;
    }

    if(child_yang_name == "ho-vc-history")
    {
        if(ho_vc_history == nullptr)
        {
            ho_vc_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory>();
        }
        return ho_vc_history;
    }

    if(child_yang_name == "optics-history")
    {
        if(optics_history == nullptr)
        {
            optics_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory>();
        }
        return optics_history;
    }

    if(child_yang_name == "oc-history")
    {
        if(oc_history == nullptr)
        {
            oc_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory>();
        }
        return oc_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_history != nullptr)
    {
        _children["sonet-history"] = sonet_history;
    }

    if(sts_history != nullptr)
    {
        _children["sts-history"] = sts_history;
    }

    if(ethernet_history != nullptr)
    {
        _children["ethernet-history"] = ethernet_history;
    }

    if(dwdm_history != nullptr)
    {
        _children["dwdm-history"] = dwdm_history;
    }

    if(stm_history != nullptr)
    {
        _children["stm-history"] = stm_history;
    }

    if(macsec_history != nullptr)
    {
        _children["macsec-history"] = macsec_history;
    }

    if(odu_history != nullptr)
    {
        _children["odu-history"] = odu_history;
    }

    if(otu_history != nullptr)
    {
        _children["otu-history"] = otu_history;
    }

    if(ho_vc_history != nullptr)
    {
        _children["ho-vc-history"] = ho_vc_history;
    }

    if(optics_history != nullptr)
    {
        _children["optics-history"] = optics_history;
    }

    if(oc_history != nullptr)
    {
        _children["oc-history"] = oc_history;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-history" || name == "sts-history" || name == "ethernet-history" || name == "dwdm-history" || name == "stm-history" || name == "macsec-history" || name == "odu-history" || name == "otu-history" || name == "ho-vc-history" || name == "optics-history" || name == "oc-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetHistory()
    :
    sonet_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories>())
{
    sonet_port_histories->parent = this;

    yang_name = "sonet-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::~SonetHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_port_histories !=  nullptr && sonet_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_port_histories !=  nullptr && sonet_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port-histories")
    {
        if(sonet_port_histories == nullptr)
        {
            sonet_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories>();
        }
        return sonet_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_port_histories != nullptr)
    {
        _children["sonet-port-histories"] = sonet_port_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistories()
    :
    sonet_port_history(this, {"name"})
{

    yang_name = "sonet-port-histories"; yang_parent_name = "sonet-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::~SonetPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_port_history.len(); index++)
    {
        if(sonet_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_port_history.len(); index++)
    {
        if(sonet_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sonet-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory>();
        ent_->parent = this;
        sonet_port_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_port_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetPortHistory()
    :
    name{YType::str, "name"}
        ,
    sonet_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History>())
    , sonet_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History>())
{
    sonet_minute15_history->parent = this;
    sonet_hour24_history->parent = this;

    yang_name = "sonet-port-history"; yang_parent_name = "sonet-port-histories"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::~SonetPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (sonet_minute15_history !=  nullptr && sonet_minute15_history->has_data())
	|| (sonet_hour24_history !=  nullptr && sonet_hour24_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sonet_minute15_history !=  nullptr && sonet_minute15_history->has_operation())
	|| (sonet_hour24_history !=  nullptr && sonet_hour24_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sonet-history/sonet-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-history")
    {
        if(sonet_minute15_history == nullptr)
        {
            sonet_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History>();
        }
        return sonet_minute15_history;
    }

    if(child_yang_name == "sonet-hour24-history")
    {
        if(sonet_hour24_history == nullptr)
        {
            sonet_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History>();
        }
        return sonet_hour24_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_history != nullptr)
    {
        _children["sonet-minute15-history"] = sonet_minute15_history;
    }

    if(sonet_hour24_history != nullptr)
    {
        _children["sonet-hour24-history"] = sonet_hour24_history;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-history" || name == "sonet-hour24-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15History()
    :
    sonet_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories>())
    , sonet_minute15_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories>())
{
    sonet_minute15ocn_histories->parent = this;
    sonet_minute15_path_histories->parent = this;

    yang_name = "sonet-minute15-history"; yang_parent_name = "sonet-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::~SonetMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15ocn_histories !=  nullptr && sonet_minute15ocn_histories->has_data())
	|| (sonet_minute15_path_histories !=  nullptr && sonet_minute15_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15ocn_histories !=  nullptr && sonet_minute15ocn_histories->has_operation())
	|| (sonet_minute15_path_histories !=  nullptr && sonet_minute15_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-histories")
    {
        if(sonet_minute15ocn_histories == nullptr)
        {
            sonet_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories>();
        }
        return sonet_minute15ocn_histories;
    }

    if(child_yang_name == "sonet-minute15-path-histories")
    {
        if(sonet_minute15_path_histories == nullptr)
        {
            sonet_minute15_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories>();
        }
        return sonet_minute15_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15ocn_histories != nullptr)
    {
        _children["sonet-minute15ocn-histories"] = sonet_minute15ocn_histories;
    }

    if(sonet_minute15_path_histories != nullptr)
    {
        _children["sonet-minute15-path-histories"] = sonet_minute15_path_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-histories" || name == "sonet-minute15-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistories()
    :
    sonet_minute15ocn_history(this, {"number"})
{

    yang_name = "sonet-minute15ocn-histories"; yang_parent_name = "sonet-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::~SonetMinute15ocnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15ocn_history.len(); index++)
    {
        if(sonet_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_history.len(); index++)
    {
        if(sonet_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory>();
        ent_->parent = this;
        sonet_minute15ocn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15ocn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnHistory()
    :
    number{YType::uint32, "number"}
        ,
    sonet_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances>())
{
    sonet_minute15ocn_time_line_instances->parent = this;

    yang_name = "sonet-minute15ocn-history"; yang_parent_name = "sonet-minute15ocn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::~SonetMinute15ocnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (sonet_minute15ocn_time_line_instances !=  nullptr && sonet_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_minute15ocn_time_line_instances !=  nullptr && sonet_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-time-line-instances")
    {
        if(sonet_minute15ocn_time_line_instances == nullptr)
        {
            sonet_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances>();
        }
        return sonet_minute15ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15ocn_time_line_instances != nullptr)
    {
        _children["sonet-minute15ocn-time-line-instances"] = sonet_minute15ocn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstances()
    :
    sonet_minute15ocn_time_line_instance(this, {"number"})
{

    yang_name = "sonet-minute15ocn-time-line-instances"; yang_parent_name = "sonet-minute15ocn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::~SonetMinute15ocnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15ocn_time_line_instance.len(); index++)
    {
        if(sonet_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_time_line_instance.len(); index++)
    {
        if(sonet_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance>();
        ent_->parent = this;
        sonet_minute15ocn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15ocn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::SonetMinute15ocnTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section>())
    , line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line>())
    , fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "sonet-minute15ocn-time-line-instance"; yang_parent_name = "sonet-minute15ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::~SonetMinute15ocnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(line != nullptr)
    {
        _children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        _children["fe-line"] = fe_line;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
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
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
        ,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs>())
    , section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs>())
    , section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs>())
    , section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::has_data() const
{
    if (is_presence_container) return true;
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(section_e_ss != nullptr)
    {
        _children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        _children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        _children["section-sef-ss"] = section_sef_ss;
    }

    if(section_c_vs != nullptr)
    {
        _children["section-c-vs"] = section_c_vs;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
        ,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs>())
    , line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs>())
    , line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs>())
    , line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs>())
    , line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::has_data() const
{
    if (is_presence_container) return true;
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(line_e_ss != nullptr)
    {
        _children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        _children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        _children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        _children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        _children["line-fc-ls"] = line_fc_ls;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}


}
}

