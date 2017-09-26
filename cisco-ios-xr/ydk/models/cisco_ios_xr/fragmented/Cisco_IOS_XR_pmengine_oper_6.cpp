
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_6.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otns()
{

    yang_name = "otu-hour24otns"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::~OtuHour24Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn")
    {
        for(auto const & c : otu_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn>();
        c->parent = this;
        otu_hour24otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::OtuHour24Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>())
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

    yang_name = "otu-hour24otn"; yang_parent_name = "otu-hour24otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::~OtuHour24Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_children() const
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbses()
{

    yang_name = "otu-hour24prbses"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::~OtuHour24Prbses()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs.size(); index++)
    {
        if(otu_hour24prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs.size(); index++)
    {
        if(otu_hour24prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs")
    {
        for(auto const & c : otu_hour24prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs>();
        c->parent = this;
        otu_hour24prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::OtuHour24Prbs()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::uint64, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    prbs_status(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "otu-hour24prbs"; yang_parent_name = "otu-hour24prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::~OtuHour24Prbs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (prbs_status !=  nullptr && prbs_status->has_data())
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (prbs_status !=  nullptr && prbs_status->has_operation())
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
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
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15()
    :
    otu_minute15fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs>())
	,otu_minute15otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns>())
	,otu_minute15prbses(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses>())
{
    otu_minute15fecs->parent = this;
    otu_minute15otns->parent = this;
    otu_minute15prbses->parent = this;

    yang_name = "otu-minute15"; yang_parent_name = "otu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::~OtuMinute15()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::has_data() const
{
    return (otu_minute15fecs !=  nullptr && otu_minute15fecs->has_data())
	|| (otu_minute15otns !=  nullptr && otu_minute15otns->has_data())
	|| (otu_minute15prbses !=  nullptr && otu_minute15prbses->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (otu_minute15fecs !=  nullptr && otu_minute15fecs->has_operation())
	|| (otu_minute15otns !=  nullptr && otu_minute15otns->has_operation())
	|| (otu_minute15prbses !=  nullptr && otu_minute15prbses->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fecs")
    {
        if(otu_minute15fecs == nullptr)
        {
            otu_minute15fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs>();
        }
        return otu_minute15fecs;
    }

    if(child_yang_name == "otu-minute15otns")
    {
        if(otu_minute15otns == nullptr)
        {
            otu_minute15otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns>();
        }
        return otu_minute15otns;
    }

    if(child_yang_name == "otu-minute15prbses")
    {
        if(otu_minute15prbses == nullptr)
        {
            otu_minute15prbses = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses>();
        }
        return otu_minute15prbses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_minute15fecs != nullptr)
    {
        children["otu-minute15fecs"] = otu_minute15fecs;
    }

    if(otu_minute15otns != nullptr)
    {
        children["otu-minute15otns"] = otu_minute15otns;
    }

    if(otu_minute15prbses != nullptr)
    {
        children["otu-minute15prbses"] = otu_minute15prbses;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fecs" || name == "otu-minute15otns" || name == "otu-minute15prbses")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fecs()
{

    yang_name = "otu-minute15fecs"; yang_parent_name = "otu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::~OtuMinute15Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec.size(); index++)
    {
        if(otu_minute15fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec.size(); index++)
    {
        if(otu_minute15fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec")
    {
        for(auto const & c : otu_minute15fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec>();
        c->parent = this;
        otu_minute15fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::OtuMinute15Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "otu-minute15fec"; yang_parent_name = "otu-minute15fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::~OtuMinute15Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::has_operation() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otns()
{

    yang_name = "otu-minute15otns"; yang_parent_name = "otu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::~OtuMinute15Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn")
    {
        for(auto const & c : otu_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn>();
        c->parent = this;
        otu_minute15otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::OtuMinute15Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>())
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

    yang_name = "otu-minute15otn"; yang_parent_name = "otu-minute15otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::~OtuMinute15Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_children() const
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbses()
{

    yang_name = "otu-minute15prbses"; yang_parent_name = "otu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::~OtuMinute15Prbses()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs.size(); index++)
    {
        if(otu_minute15prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs.size(); index++)
    {
        if(otu_minute15prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs")
    {
        for(auto const & c : otu_minute15prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs>();
        c->parent = this;
        otu_minute15prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::OtuMinute15Prbs()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::uint64, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    prbs_status(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "otu-minute15prbs"; yang_parent_name = "otu-minute15prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::~OtuMinute15Prbs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (prbs_status !=  nullptr && prbs_status->has_data())
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (prbs_status !=  nullptr && prbs_status->has_operation())
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
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
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30()
    :
    otu_second30fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>())
	,otu_second30otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>())
{
    otu_second30fecs->parent = this;
    otu_second30otns->parent = this;

    yang_name = "otu-second30"; yang_parent_name = "otu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::~OtuSecond30()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_data() const
{
    return (otu_second30fecs !=  nullptr && otu_second30fecs->has_data())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (otu_second30fecs !=  nullptr && otu_second30fecs->has_operation())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fecs")
    {
        if(otu_second30fecs == nullptr)
        {
            otu_second30fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>();
        }
        return otu_second30fecs;
    }

    if(child_yang_name == "otu-second30otns")
    {
        if(otu_second30otns == nullptr)
        {
            otu_second30otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>();
        }
        return otu_second30otns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_second30fecs != nullptr)
    {
        children["otu-second30fecs"] = otu_second30fecs;
    }

    if(otu_second30otns != nullptr)
    {
        children["otu-second30otns"] = otu_second30otns;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fecs" || name == "otu-second30otns")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fecs()
{

    yang_name = "otu-second30fecs"; yang_parent_name = "otu-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::~OtuSecond30Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec")
    {
        for(auto const & c : otu_second30fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec>();
        c->parent = this;
        otu_second30fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::OtuSecond30Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "otu-second30fec"; yang_parent_name = "otu-second30fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::~OtuSecond30Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_operation() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otns()
{

    yang_name = "otu-second30otns"; yang_parent_name = "otu-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::~OtuSecond30Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn")
    {
        for(auto const & c : otu_second30otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn>();
        c->parent = this;
        otu_second30otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::OtuSecond30Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>())
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

    yang_name = "otu-second30otn"; yang_parent_name = "otu-second30otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::~OtuSecond30Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_children() const
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::Sonet()
    :
    sonet_ports(std::make_shared<PerformanceManagement::Sonet::SonetPorts>())
{
    sonet_ports->parent = this;

    yang_name = "sonet"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::~Sonet()
{
}

bool PerformanceManagement::Sonet::has_data() const
{
    return (sonet_ports !=  nullptr && sonet_ports->has_data());
}

bool PerformanceManagement::Sonet::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_ports !=  nullptr && sonet_ports->has_operation());
}

std::string PerformanceManagement::Sonet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-ports")
    {
        if(sonet_ports == nullptr)
        {
            sonet_ports = std::make_shared<PerformanceManagement::Sonet::SonetPorts>();
        }
        return sonet_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_ports != nullptr)
    {
        children["sonet-ports"] = sonet_ports;
    }

    return children;
}

void PerformanceManagement::Sonet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-ports")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPorts()
{

    yang_name = "sonet-ports"; yang_parent_name = "sonet"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::SonetPorts::~SonetPorts()
{
}

bool PerformanceManagement::Sonet::SonetPorts::has_data() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::has_operation() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::SonetPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port")
    {
        for(auto const & c : sonet_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort>();
        c->parent = this;
        sonet_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetPort()
    :
    name{YType::str, "name"}
    	,
    sonet_current(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>())
{
    sonet_current->parent = this;

    yang_name = "sonet-port"; yang_parent_name = "sonet-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::~SonetPort()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_data() const
{
    return name.is_set
	|| (sonet_current !=  nullptr && sonet_current->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sonet_current !=  nullptr && sonet_current->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/sonet-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-current")
    {
        if(sonet_current == nullptr)
        {
            sonet_current = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>();
        }
        return sonet_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_current != nullptr)
    {
        children["sonet-current"] = sonet_current;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetCurrent()
    :
    sonet_hour24(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>())
	,sonet_minute15(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>())
{
    sonet_hour24->parent = this;
    sonet_minute15->parent = this;

    yang_name = "sonet-current"; yang_parent_name = "sonet-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::~SonetCurrent()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_data() const
{
    return (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>();
        }
        return sonet_hour24;
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>();
        }
        return sonet_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24 != nullptr)
    {
        children["sonet-hour24"] = sonet_hour24;
    }

    if(sonet_minute15 != nullptr)
    {
        children["sonet-minute15"] = sonet_minute15;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24" || name == "sonet-minute15")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24()
    :
    sonet_hour24_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>())
	,sonet_hour24ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>())
{
    sonet_hour24_paths->parent = this;
    sonet_hour24ocns->parent = this;

    yang_name = "sonet-hour24"; yang_parent_name = "sonet-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::~SonetHour24()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_data() const
{
    return (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_data())
	|| (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_operation())
	|| (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-paths")
    {
        if(sonet_hour24_paths == nullptr)
        {
            sonet_hour24_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>();
        }
        return sonet_hour24_paths;
    }

    if(child_yang_name == "sonet-hour24ocns")
    {
        if(sonet_hour24ocns == nullptr)
        {
            sonet_hour24ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>();
        }
        return sonet_hour24ocns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_paths != nullptr)
    {
        children["sonet-hour24-paths"] = sonet_hour24_paths;
    }

    if(sonet_hour24ocns != nullptr)
    {
        children["sonet-hour24ocns"] = sonet_hour24ocns;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-paths" || name == "sonet-hour24ocns")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocns()
{

    yang_name = "sonet-hour24ocns"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::~SonetHour24Ocns()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24ocn.size(); index++)
    {
        if(sonet_hour24ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn.size(); index++)
    {
        if(sonet_hour24ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn")
    {
        for(auto const & c : sonet_hour24ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn>();
        c->parent = this;
        sonet_hour24ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24ocn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::SonetHour24Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "sonet-hour24ocn"; yang_parent_name = "sonet-hour24ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Paths()
{

    yang_name = "sonet-hour24-paths"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::~SonetHour24Paths()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path.size(); index++)
    {
        if(sonet_hour24_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path.size(); index++)
    {
        if(sonet_hour24_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path")
    {
        for(auto const & c : sonet_hour24_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path>();
        c->parent = this;
        sonet_hour24_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::SonetHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::~SonetHour24Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>())
	,sonet_minute15ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>())
{
    sonet_minute15_paths->parent = this;
    sonet_minute15ocns->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "sonet-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::~SonetMinute15()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_data() const
{
    return (sonet_minute15_paths !=  nullptr && sonet_minute15_paths->has_data())
	|| (sonet_minute15ocns !=  nullptr && sonet_minute15ocns->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_paths !=  nullptr && sonet_minute15_paths->has_operation())
	|| (sonet_minute15ocns !=  nullptr && sonet_minute15ocns->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-paths")
    {
        if(sonet_minute15_paths == nullptr)
        {
            sonet_minute15_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>();
        }
        return sonet_minute15_paths;
    }

    if(child_yang_name == "sonet-minute15ocns")
    {
        if(sonet_minute15ocns == nullptr)
        {
            sonet_minute15ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>();
        }
        return sonet_minute15ocns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_paths != nullptr)
    {
        children["sonet-minute15-paths"] = sonet_minute15_paths;
    }

    if(sonet_minute15ocns != nullptr)
    {
        children["sonet-minute15ocns"] = sonet_minute15ocns;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-paths" || name == "sonet-minute15ocns")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocns()
{

    yang_name = "sonet-minute15ocns"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::~SonetMinute15Ocns()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15ocn.size(); index++)
    {
        if(sonet_minute15ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn.size(); index++)
    {
        if(sonet_minute15ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn")
    {
        for(auto const & c : sonet_minute15ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn>();
        c->parent = this;
        sonet_minute15ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15ocn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "sonet-minute15ocn"; yang_parent_name = "sonet-minute15ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Paths()
{

    yang_name = "sonet-minute15-paths"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::~SonetMinute15Paths()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path.size(); index++)
    {
        if(sonet_minute15_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path.size(); index++)
    {
        if(sonet_minute15_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path")
    {
        for(auto const & c : sonet_minute15_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path>();
        c->parent = this;
        sonet_minute15_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::SonetMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::~SonetMinute15Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_children() const
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Stm::Stm()
    :
    stm_ports(std::make_shared<PerformanceManagement::Stm::StmPorts>())
{
    stm_ports->parent = this;

    yang_name = "stm"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::~Stm()
{
}

bool PerformanceManagement::Stm::has_data() const
{
    return (stm_ports !=  nullptr && stm_ports->has_data());
}

bool PerformanceManagement::Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_ports !=  nullptr && stm_ports->has_operation());
}

std::string PerformanceManagement::Stm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-ports")
    {
        if(stm_ports == nullptr)
        {
            stm_ports = std::make_shared<PerformanceManagement::Stm::StmPorts>();
        }
        return stm_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_ports != nullptr)
    {
        children["stm-ports"] = stm_ports;
    }

    return children;
}

void PerformanceManagement::Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-ports")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPorts()
{

    yang_name = "stm-ports"; yang_parent_name = "stm"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::StmPorts::~StmPorts()
{
}

bool PerformanceManagement::Stm::StmPorts::has_data() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::has_operation() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::StmPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-port")
    {
        for(auto const & c : stm_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort>();
        c->parent = this;
        stm_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-port")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmPort()
    :
    name{YType::str, "name"}
    	,
    stm_current(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>())
{
    stm_current->parent = this;

    yang_name = "stm-port"; yang_parent_name = "stm-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::StmPorts::StmPort::~StmPort()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_data() const
{
    return name.is_set
	|| (stm_current !=  nullptr && stm_current->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (stm_current !=  nullptr && stm_current->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/stm-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-current")
    {
        if(stm_current == nullptr)
        {
            stm_current = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>();
        }
        return stm_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_current != nullptr)
    {
        children["stm-current"] = stm_current;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmCurrent()
    :
    stm_hour24(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>())
	,stm_minute15(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>())
{
    stm_hour24->parent = this;
    stm_minute15->parent = this;

    yang_name = "stm-current"; yang_parent_name = "stm-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::~StmCurrent()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_data() const
{
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>();
        }
        return stm_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24 != nullptr)
    {
        children["stm-hour24"] = stm_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        children["stm-minute15"] = stm_minute15;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24" || name == "stm-minute15")
        return true;
    return false;
}


}
}

