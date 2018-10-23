
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_14.hpp"
#include "Cisco_IOS_XR_pmengine_oper_15.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secyif-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_port_histories != nullptr)
    {
        _children["odu-port-histories"] = odu_port_histories;
    }

    return _children;
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
    :
    odu_port_history(this, {"name"})
{

    yang_name = "odu-port-histories"; yang_parent_name = "odu-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::~OduPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_port_history.len(); index++)
    {
        if(odu_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_port_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-port-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory>();
        ent_->parent = this;
        odu_port_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_port_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , odu_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History>())
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
    if (is_presence_container) return true;
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
    path_buffer << "odu-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_hour24_history != nullptr)
    {
        _children["odu-hour24-history"] = odu_hour24_history;
    }

    if(odu_minute15_history != nullptr)
    {
        _children["odu-minute15-history"] = odu_minute15_history;
    }

    return _children;
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
    odu_hour24gfp_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories>())
    , odu_hour24prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories>())
    , odu_hour24otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories>())
{
    odu_hour24gfp_histories->parent = this;
    odu_hour24prbs_histories->parent = this;
    odu_hour24otn_histories->parent = this;

    yang_name = "odu-hour24-history"; yang_parent_name = "odu-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::~OduHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_data() const
{
    if (is_presence_container) return true;
    return (odu_hour24gfp_histories !=  nullptr && odu_hour24gfp_histories->has_data())
	|| (odu_hour24prbs_histories !=  nullptr && odu_hour24prbs_histories->has_data())
	|| (odu_hour24otn_histories !=  nullptr && odu_hour24otn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (odu_hour24gfp_histories !=  nullptr && odu_hour24gfp_histories->has_operation())
	|| (odu_hour24prbs_histories !=  nullptr && odu_hour24prbs_histories->has_operation())
	|| (odu_hour24otn_histories !=  nullptr && odu_hour24otn_histories->has_operation());
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-histories")
    {
        if(odu_hour24gfp_histories == nullptr)
        {
            odu_hour24gfp_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories>();
        }
        return odu_hour24gfp_histories;
    }

    if(child_yang_name == "odu-hour24prbs-histories")
    {
        if(odu_hour24prbs_histories == nullptr)
        {
            odu_hour24prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories>();
        }
        return odu_hour24prbs_histories;
    }

    if(child_yang_name == "odu-hour24otn-histories")
    {
        if(odu_hour24otn_histories == nullptr)
        {
            odu_hour24otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories>();
        }
        return odu_hour24otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_hour24gfp_histories != nullptr)
    {
        _children["odu-hour24gfp-histories"] = odu_hour24gfp_histories;
    }

    if(odu_hour24prbs_histories != nullptr)
    {
        _children["odu-hour24prbs-histories"] = odu_hour24prbs_histories;
    }

    if(odu_hour24otn_histories != nullptr)
    {
        _children["odu-hour24otn-histories"] = odu_hour24otn_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-histories" || name == "odu-hour24prbs-histories" || name == "odu-hour24otn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistories()
    :
    odu_hour24gfp_history(this, {"number"})
{

    yang_name = "odu-hour24gfp-histories"; yang_parent_name = "odu-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::~OduHour24gfpHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24gfp_history.len(); index++)
    {
        if(odu_hour24gfp_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp_history.len(); index++)
    {
        if(odu_hour24gfp_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory>();
        ent_->parent = this;
        odu_hour24gfp_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24gfp_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_hour24gfp_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances>())
{
    odu_hour24gfp_time_line_instances->parent = this;

    yang_name = "odu-hour24gfp-history"; yang_parent_name = "odu-hour24gfp-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::~OduHour24gfpHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_hour24gfp_time_line_instances !=  nullptr && odu_hour24gfp_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_hour24gfp_time_line_instances !=  nullptr && odu_hour24gfp_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-time-line-instances")
    {
        if(odu_hour24gfp_time_line_instances == nullptr)
        {
            odu_hour24gfp_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances>();
        }
        return odu_hour24gfp_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_hour24gfp_time_line_instances != nullptr)
    {
        _children["odu-hour24gfp-time-line-instances"] = odu_hour24gfp_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstances()
    :
    odu_hour24gfp_time_line_instance(this, {"number"})
{

    yang_name = "odu-hour24gfp-time-line-instances"; yang_parent_name = "odu-hour24gfp-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::~OduHour24gfpTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24gfp_time_line_instance.len(); index++)
    {
        if(odu_hour24gfp_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp_time_line_instance.len(); index++)
    {
        if(odu_hour24gfp_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance>();
        ent_->parent = this;
        odu_hour24gfp_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24gfp_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::OduHour24gfpTimeLineInstance()
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
    rx_bit_err(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr>())
    , rx_inv_typ(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp>())
    , rx_crc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc>())
    , rx_lfd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd>())
    , rx_csf(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf>())
{
    rx_bit_err->parent = this;
    rx_inv_typ->parent = this;
    rx_crc->parent = this;
    rx_lfd->parent = this;
    rx_csf->parent = this;

    yang_name = "odu-hour24gfp-time-line-instance"; yang_parent_name = "odu-hour24gfp-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::~OduHour24gfpTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::has_data() const
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
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_data())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_data())
	|| (rx_crc !=  nullptr && rx_crc->has_data())
	|| (rx_lfd !=  nullptr && rx_lfd->has_data())
	|| (rx_csf !=  nullptr && rx_csf->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::has_operation() const
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
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_operation())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_operation())
	|| (rx_crc !=  nullptr && rx_crc->has_operation())
	|| (rx_lfd !=  nullptr && rx_lfd->has_operation())
	|| (rx_csf !=  nullptr && rx_csf->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err == nullptr)
        {
            rx_bit_err = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr>();
        }
        return rx_bit_err;
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ == nullptr)
        {
            rx_inv_typ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp>();
        }
        return rx_inv_typ;
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc == nullptr)
        {
            rx_crc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc>();
        }
        return rx_crc;
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd == nullptr)
        {
            rx_lfd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd>();
        }
        return rx_lfd;
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf == nullptr)
        {
            rx_csf = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf>();
        }
        return rx_csf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_bit_err != nullptr)
    {
        _children["rx-bit-err"] = rx_bit_err;
    }

    if(rx_inv_typ != nullptr)
    {
        _children["rx-inv-typ"] = rx_inv_typ;
    }

    if(rx_crc != nullptr)
    {
        _children["rx-crc"] = rx_crc;
    }

    if(rx_lfd != nullptr)
    {
        _children["rx-lfd"] = rx_lfd;
    }

    if(rx_csf != nullptr)
    {
        _children["rx-csf"] = rx_csf;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-bit-err" || name == "rx-inv-typ" || name == "rx-crc" || name == "rx-lfd" || name == "rx-csf" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-bit-err"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-inv-typ"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-crc"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::~RxCrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-lfd"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::~RxLfd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-csf"; yang_parent_name = "odu-hour24gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::~RxCsf()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistories()
    :
    odu_hour24prbs_history(this, {"number"})
{

    yang_name = "odu-hour24prbs-histories"; yang_parent_name = "odu-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::~OduHour24prbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24prbs_history.len(); index++)
    {
        if(odu_hour24prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24prbs_history.len(); index++)
    {
        if(odu_hour24prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24prbs-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory>();
        ent_->parent = this;
        odu_hour24prbs_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24prbs_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_hour24prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances>())
{
    odu_hour24prbs_time_line_instances->parent = this;

    yang_name = "odu-hour24prbs-history"; yang_parent_name = "odu-hour24prbs-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::~OduHour24prbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_hour24prbs_time_line_instances !=  nullptr && odu_hour24prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_hour24prbs_time_line_instances !=  nullptr && odu_hour24prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24prbs-time-line-instances")
    {
        if(odu_hour24prbs_time_line_instances == nullptr)
        {
            odu_hour24prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances>();
        }
        return odu_hour24prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_hour24prbs_time_line_instances != nullptr)
    {
        _children["odu-hour24prbs-time-line-instances"] = odu_hour24prbs_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstances()
    :
    odu_hour24prbs_time_line_instance(this, {"number"})
{

    yang_name = "odu-hour24prbs-time-line-instances"; yang_parent_name = "odu-hour24prbs-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::~OduHour24prbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24prbs_time_line_instance.len(); index++)
    {
        if(odu_hour24prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24prbs_time_line_instance.len(); index++)
    {
        if(odu_hour24prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24prbs-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance>();
        ent_->parent = this;
        odu_hour24prbs_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24prbs_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::OduHour24prbsTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    ebc{YType::uint64, "ebc"},
    found_count{YType::uint32, "found-count"},
    lost_count{YType::uint32, "lost-count"},
    found_at_time{YType::uint64, "found-at-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    conf_patt{YType::enumeration, "conf-patt"}
        ,
    rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt>())
    , prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "odu-hour24prbs-time-line-instance"; yang_parent_name = "odu-hour24prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::~OduHour24prbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| ebc.is_set
	|| found_count.is_set
	|| lost_count.is_set
	|| found_at_time.is_set
	|| lost_at_time.is_set
	|| conf_patt.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data())
	|| (prbs_status !=  nullptr && prbs_status->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation())
	|| (prbs_status !=  nullptr && prbs_status->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rcv_patt != nullptr)
    {
        _children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        _children["prbs-status"] = prbs_status;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "odu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "odu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistories()
    :
    odu_hour24otn_history(this, {"number"})
{

    yang_name = "odu-hour24otn-histories"; yang_parent_name = "odu-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::~OduHour24otnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24otn_history.len(); index++)
    {
        if(odu_hour24otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn_history.len(); index++)
    {
        if(odu_hour24otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory>();
        ent_->parent = this;
        odu_hour24otn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24otn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_hour24otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances>())
{
    odu_hour24otn_time_line_instances->parent = this;

    yang_name = "odu-hour24otn-history"; yang_parent_name = "odu-hour24otn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::~OduHour24otnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_hour24otn_time_line_instances !=  nullptr && odu_hour24otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_hour24otn_time_line_instances !=  nullptr && odu_hour24otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-time-line-instances")
    {
        if(odu_hour24otn_time_line_instances == nullptr)
        {
            odu_hour24otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances>();
        }
        return odu_hour24otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_hour24otn_time_line_instances != nullptr)
    {
        _children["odu-hour24otn-time-line-instances"] = odu_hour24otn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstances()
    :
    odu_hour24otn_time_line_instance(this, {"number"})
{

    yang_name = "odu-hour24otn-time-line-instances"; yang_parent_name = "odu-hour24otn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::~OduHour24otnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_hour24otn_time_line_instance.len(); index++)
    {
        if(odu_hour24otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn_time_line_instance.len(); index++)
    {
        if(odu_hour24otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance>();
        ent_->parent = this;
        odu_hour24otn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_hour24otn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::OduHour24otnTimeLineInstance()
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
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc>())
    , es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe>())
    , esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe>())
    , ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe>())
    , sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe>())
    , uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe>())
    , bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe>())
    , bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe>())
    , fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe>())
    , es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe>())
    , esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe>())
    , ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe>())
    , sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe>())
    , uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe>())
    , bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe>())
    , bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe>())
    , fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "odu-hour24otn-time-line-instance"; yang_parent_name = "odu-hour24otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::~OduHour24otnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::has_data() const
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
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lbc != nullptr)
    {
        _children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        _children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        _children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        _children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        _children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        _children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        _children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        _children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        _children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        _children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        _children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        _children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        _children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        _children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        _children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        _children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        _children["fc-fe"] = fc_fe;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "odu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15History()
    :
    odu_minute15prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories>())
    , odu_minute15gfp_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories>())
    , odu_minute15otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories>())
{
    odu_minute15prbs_histories->parent = this;
    odu_minute15gfp_histories->parent = this;
    odu_minute15otn_histories->parent = this;

    yang_name = "odu-minute15-history"; yang_parent_name = "odu-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::~OduMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::has_data() const
{
    if (is_presence_container) return true;
    return (odu_minute15prbs_histories !=  nullptr && odu_minute15prbs_histories->has_data())
	|| (odu_minute15gfp_histories !=  nullptr && odu_minute15gfp_histories->has_data())
	|| (odu_minute15otn_histories !=  nullptr && odu_minute15otn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (odu_minute15prbs_histories !=  nullptr && odu_minute15prbs_histories->has_operation())
	|| (odu_minute15gfp_histories !=  nullptr && odu_minute15gfp_histories->has_operation())
	|| (odu_minute15otn_histories !=  nullptr && odu_minute15otn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15prbs-histories")
    {
        if(odu_minute15prbs_histories == nullptr)
        {
            odu_minute15prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories>();
        }
        return odu_minute15prbs_histories;
    }

    if(child_yang_name == "odu-minute15gfp-histories")
    {
        if(odu_minute15gfp_histories == nullptr)
        {
            odu_minute15gfp_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories>();
        }
        return odu_minute15gfp_histories;
    }

    if(child_yang_name == "odu-minute15otn-histories")
    {
        if(odu_minute15otn_histories == nullptr)
        {
            odu_minute15otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories>();
        }
        return odu_minute15otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_minute15prbs_histories != nullptr)
    {
        _children["odu-minute15prbs-histories"] = odu_minute15prbs_histories;
    }

    if(odu_minute15gfp_histories != nullptr)
    {
        _children["odu-minute15gfp-histories"] = odu_minute15gfp_histories;
    }

    if(odu_minute15otn_histories != nullptr)
    {
        _children["odu-minute15otn-histories"] = odu_minute15otn_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15prbs-histories" || name == "odu-minute15gfp-histories" || name == "odu-minute15otn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistories()
    :
    odu_minute15prbs_history(this, {"number"})
{

    yang_name = "odu-minute15prbs-histories"; yang_parent_name = "odu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::~OduMinute15prbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15prbs_history.len(); index++)
    {
        if(odu_minute15prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15prbs_history.len(); index++)
    {
        if(odu_minute15prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15prbs-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory>();
        ent_->parent = this;
        odu_minute15prbs_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15prbs_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_minute15prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances>())
{
    odu_minute15prbs_time_line_instances->parent = this;

    yang_name = "odu-minute15prbs-history"; yang_parent_name = "odu-minute15prbs-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::~OduMinute15prbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_minute15prbs_time_line_instances !=  nullptr && odu_minute15prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_minute15prbs_time_line_instances !=  nullptr && odu_minute15prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15prbs-time-line-instances")
    {
        if(odu_minute15prbs_time_line_instances == nullptr)
        {
            odu_minute15prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances>();
        }
        return odu_minute15prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_minute15prbs_time_line_instances != nullptr)
    {
        _children["odu-minute15prbs-time-line-instances"] = odu_minute15prbs_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstances()
    :
    odu_minute15prbs_time_line_instance(this, {"number"})
{

    yang_name = "odu-minute15prbs-time-line-instances"; yang_parent_name = "odu-minute15prbs-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::~OduMinute15prbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15prbs_time_line_instance.len(); index++)
    {
        if(odu_minute15prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15prbs_time_line_instance.len(); index++)
    {
        if(odu_minute15prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15prbs-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance>();
        ent_->parent = this;
        odu_minute15prbs_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15prbs_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::OduMinute15prbsTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    ebc{YType::uint64, "ebc"},
    found_count{YType::uint32, "found-count"},
    lost_count{YType::uint32, "lost-count"},
    found_at_time{YType::uint64, "found-at-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    conf_patt{YType::enumeration, "conf-patt"}
        ,
    rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt>())
    , prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "odu-minute15prbs-time-line-instance"; yang_parent_name = "odu-minute15prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::~OduMinute15prbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| ebc.is_set
	|| found_count.is_set
	|| lost_count.is_set
	|| found_at_time.is_set
	|| lost_at_time.is_set
	|| conf_patt.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data())
	|| (prbs_status !=  nullptr && prbs_status->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation())
	|| (prbs_status !=  nullptr && prbs_status->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rcv_patt != nullptr)
    {
        _children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        _children["prbs-status"] = prbs_status;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "odu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "odu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistories()
    :
    odu_minute15gfp_history(this, {"number"})
{

    yang_name = "odu-minute15gfp-histories"; yang_parent_name = "odu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::~OduMinute15gfpHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15gfp_history.len(); index++)
    {
        if(odu_minute15gfp_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15gfp_history.len(); index++)
    {
        if(odu_minute15gfp_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15gfp-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory>();
        ent_->parent = this;
        odu_minute15gfp_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15gfp_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15gfp-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_minute15gfp_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances>())
{
    odu_minute15gfp_time_line_instances->parent = this;

    yang_name = "odu-minute15gfp-history"; yang_parent_name = "odu-minute15gfp-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::~OduMinute15gfpHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_minute15gfp_time_line_instances !=  nullptr && odu_minute15gfp_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_minute15gfp_time_line_instances !=  nullptr && odu_minute15gfp_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15gfp-time-line-instances")
    {
        if(odu_minute15gfp_time_line_instances == nullptr)
        {
            odu_minute15gfp_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances>();
        }
        return odu_minute15gfp_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_minute15gfp_time_line_instances != nullptr)
    {
        _children["odu-minute15gfp-time-line-instances"] = odu_minute15gfp_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15gfp-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstances()
    :
    odu_minute15gfp_time_line_instance(this, {"number"})
{

    yang_name = "odu-minute15gfp-time-line-instances"; yang_parent_name = "odu-minute15gfp-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::~OduMinute15gfpTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15gfp_time_line_instance.len(); index++)
    {
        if(odu_minute15gfp_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15gfp_time_line_instance.len(); index++)
    {
        if(odu_minute15gfp_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15gfp-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance>();
        ent_->parent = this;
        odu_minute15gfp_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15gfp_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15gfp-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::OduMinute15gfpTimeLineInstance()
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
    rx_bit_err(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr>())
    , rx_inv_typ(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp>())
    , rx_crc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc>())
    , rx_lfd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd>())
    , rx_csf(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf>())
{
    rx_bit_err->parent = this;
    rx_inv_typ->parent = this;
    rx_crc->parent = this;
    rx_lfd->parent = this;
    rx_csf->parent = this;

    yang_name = "odu-minute15gfp-time-line-instance"; yang_parent_name = "odu-minute15gfp-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::~OduMinute15gfpTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::has_data() const
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
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_data())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_data())
	|| (rx_crc !=  nullptr && rx_crc->has_data())
	|| (rx_lfd !=  nullptr && rx_lfd->has_data())
	|| (rx_csf !=  nullptr && rx_csf->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::has_operation() const
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
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_operation())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_operation())
	|| (rx_crc !=  nullptr && rx_crc->has_operation())
	|| (rx_lfd !=  nullptr && rx_lfd->has_operation())
	|| (rx_csf !=  nullptr && rx_csf->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err == nullptr)
        {
            rx_bit_err = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr>();
        }
        return rx_bit_err;
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ == nullptr)
        {
            rx_inv_typ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp>();
        }
        return rx_inv_typ;
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc == nullptr)
        {
            rx_crc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc>();
        }
        return rx_crc;
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd == nullptr)
        {
            rx_lfd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd>();
        }
        return rx_lfd;
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf == nullptr)
        {
            rx_csf = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf>();
        }
        return rx_csf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_bit_err != nullptr)
    {
        _children["rx-bit-err"] = rx_bit_err;
    }

    if(rx_inv_typ != nullptr)
    {
        _children["rx-inv-typ"] = rx_inv_typ;
    }

    if(rx_crc != nullptr)
    {
        _children["rx-crc"] = rx_crc;
    }

    if(rx_lfd != nullptr)
    {
        _children["rx-lfd"] = rx_lfd;
    }

    if(rx_csf != nullptr)
    {
        _children["rx-csf"] = rx_csf;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-bit-err" || name == "rx-inv-typ" || name == "rx-crc" || name == "rx-lfd" || name == "rx-csf" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-bit-err"; yang_parent_name = "odu-minute15gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-inv-typ"; yang_parent_name = "odu-minute15gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-crc"; yang_parent_name = "odu-minute15gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::~RxCrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-lfd"; yang_parent_name = "odu-minute15gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::~RxLfd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "rx-csf"; yang_parent_name = "odu-minute15gfp-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::~RxCsf()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistories()
    :
    odu_minute15otn_history(this, {"number"})
{

    yang_name = "odu-minute15otn-histories"; yang_parent_name = "odu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::~OduMinute15otnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15otn_history.len(); index++)
    {
        if(odu_minute15otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15otn_history.len(); index++)
    {
        if(odu_minute15otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15otn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory>();
        ent_->parent = this;
        odu_minute15otn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15otn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnHistory()
    :
    number{YType::uint32, "number"}
        ,
    odu_minute15otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances>())
{
    odu_minute15otn_time_line_instances->parent = this;

    yang_name = "odu-minute15otn-history"; yang_parent_name = "odu-minute15otn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::~OduMinute15otnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (odu_minute15otn_time_line_instances !=  nullptr && odu_minute15otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (odu_minute15otn_time_line_instances !=  nullptr && odu_minute15otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15otn-time-line-instances")
    {
        if(odu_minute15otn_time_line_instances == nullptr)
        {
            odu_minute15otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances>();
        }
        return odu_minute15otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_minute15otn_time_line_instances != nullptr)
    {
        _children["odu-minute15otn-time-line-instances"] = odu_minute15otn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstances()
    :
    odu_minute15otn_time_line_instance(this, {"number"})
{

    yang_name = "odu-minute15otn-time-line-instances"; yang_parent_name = "odu-minute15otn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::~OduMinute15otnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_minute15otn_time_line_instance.len(); index++)
    {
        if(odu_minute15otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15otn_time_line_instance.len(); index++)
    {
        if(odu_minute15otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15otn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance>();
        ent_->parent = this;
        odu_minute15otn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_minute15otn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::OduMinute15otnTimeLineInstance()
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
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc>())
    , es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe>())
    , esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe>())
    , ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe>())
    , sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe>())
    , uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe>())
    , bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe>())
    , bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe>())
    , fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe>())
    , es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe>())
    , esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe>())
    , ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe>())
    , sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe>())
    , uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe>())
    , bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe>())
    , bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe>())
    , fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "odu-minute15otn-time-line-instance"; yang_parent_name = "odu-minute15otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::~OduMinute15otnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::has_data() const
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
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lbc != nullptr)
    {
        _children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        _children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        _children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        _children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        _children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        _children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        _children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        _children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        _children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        _children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        _children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        _children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        _children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        _children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        _children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        _children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        _children["fc-fe"] = fc_fe;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "odu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuHistory()
    :
    otu_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories>())
{
    otu_port_histories->parent = this;

    yang_name = "otu-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::~OtuHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::has_data() const
{
    if (is_presence_container) return true;
    return (otu_port_histories !=  nullptr && otu_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::has_operation() const
{
    return is_set(yfilter)
	|| (otu_port_histories !=  nullptr && otu_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-port-histories")
    {
        if(otu_port_histories == nullptr)
        {
            otu_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories>();
        }
        return otu_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_port_histories != nullptr)
    {
        _children["otu-port-histories"] = otu_port_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistories()
    :
    otu_port_history(this, {"name"})
{

    yang_name = "otu-port-histories"; yang_parent_name = "otu-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::~OtuPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_port_history.len(); index++)
    {
        if(otu_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_port_history.len(); index++)
    {
        if(otu_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/otu-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-port-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory>();
        ent_->parent = this;
        otu_port_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_port_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuPortHistory()
    :
    name{YType::str, "name"}
        ,
    otu_second30_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History>())
    , otu_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History>())
    , otu_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History>())
{
    otu_second30_history->parent = this;
    otu_minute15_history->parent = this;
    otu_hour24_history->parent = this;

    yang_name = "otu-port-history"; yang_parent_name = "otu-port-histories"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::~OtuPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (otu_second30_history !=  nullptr && otu_second30_history->has_data())
	|| (otu_minute15_history !=  nullptr && otu_minute15_history->has_data())
	|| (otu_hour24_history !=  nullptr && otu_hour24_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (otu_second30_history !=  nullptr && otu_second30_history->has_operation())
	|| (otu_minute15_history !=  nullptr && otu_minute15_history->has_operation())
	|| (otu_hour24_history !=  nullptr && otu_hour24_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/otu-history/otu-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30-history")
    {
        if(otu_second30_history == nullptr)
        {
            otu_second30_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History>();
        }
        return otu_second30_history;
    }

    if(child_yang_name == "otu-minute15-history")
    {
        if(otu_minute15_history == nullptr)
        {
            otu_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History>();
        }
        return otu_minute15_history;
    }

    if(child_yang_name == "otu-hour24-history")
    {
        if(otu_hour24_history == nullptr)
        {
            otu_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History>();
        }
        return otu_hour24_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_second30_history != nullptr)
    {
        _children["otu-second30-history"] = otu_second30_history;
    }

    if(otu_minute15_history != nullptr)
    {
        _children["otu-minute15-history"] = otu_minute15_history;
    }

    if(otu_hour24_history != nullptr)
    {
        _children["otu-hour24-history"] = otu_hour24_history;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30-history" || name == "otu-minute15-history" || name == "otu-hour24-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30History()
    :
    otu_second30fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories>())
    , otu_second30otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories>())
{
    otu_second30fec_histories->parent = this;
    otu_second30otn_histories->parent = this;

    yang_name = "otu-second30-history"; yang_parent_name = "otu-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::~OtuSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_data() const
{
    if (is_presence_container) return true;
    return (otu_second30fec_histories !=  nullptr && otu_second30fec_histories->has_data())
	|| (otu_second30otn_histories !=  nullptr && otu_second30otn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_operation() const
{
    return is_set(yfilter)
	|| (otu_second30fec_histories !=  nullptr && otu_second30fec_histories->has_operation())
	|| (otu_second30otn_histories !=  nullptr && otu_second30otn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-histories")
    {
        if(otu_second30fec_histories == nullptr)
        {
            otu_second30fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories>();
        }
        return otu_second30fec_histories;
    }

    if(child_yang_name == "otu-second30otn-histories")
    {
        if(otu_second30otn_histories == nullptr)
        {
            otu_second30otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories>();
        }
        return otu_second30otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_second30fec_histories != nullptr)
    {
        _children["otu-second30fec-histories"] = otu_second30fec_histories;
    }

    if(otu_second30otn_histories != nullptr)
    {
        _children["otu-second30otn-histories"] = otu_second30otn_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-histories" || name == "otu-second30otn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistories()
    :
    otu_second30fec_history(this, {"number"})
{

    yang_name = "otu-second30fec-histories"; yang_parent_name = "otu-second30-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::~OtuSecond30fecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_second30fec_history.len(); index++)
    {
        if(otu_second30fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec_history.len(); index++)
    {
        if(otu_second30fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory>();
        ent_->parent = this;
        otu_second30fec_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_second30fec_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecHistory()
    :
    number{YType::uint32, "number"}
        ,
    otu_second30fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances>())
{
    otu_second30fec_time_line_instances->parent = this;

    yang_name = "otu-second30fec-history"; yang_parent_name = "otu-second30fec-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::~OtuSecond30fecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (otu_second30fec_time_line_instances !=  nullptr && otu_second30fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_second30fec_time_line_instances !=  nullptr && otu_second30fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-time-line-instances")
    {
        if(otu_second30fec_time_line_instances == nullptr)
        {
            otu_second30fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances>();
        }
        return otu_second30fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_second30fec_time_line_instances != nullptr)
    {
        _children["otu-second30fec-time-line-instances"] = otu_second30fec_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstances()
    :
    otu_second30fec_time_line_instance(this, {"number"})
{

    yang_name = "otu-second30fec-time-line-instances"; yang_parent_name = "otu-second30fec-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::~OtuSecond30fecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.len(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.len(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance>();
        ent_->parent = this;
        otu_second30fec_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_second30fec_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::OtuSecond30fecTimeLineInstance()
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
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits>())
    , uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords>())
    , pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer>())
    , post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer>())
    , q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q>())
    , qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-second30fec-time-line-instance"; yang_parent_name = "otu-second30fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::~OtuSecond30fecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::Q()
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

    yang_name = "q"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistories()
    :
    otu_second30otn_history(this, {"number"})
{

    yang_name = "otu-second30otn-histories"; yang_parent_name = "otu-second30-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::~OtuSecond30otnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_second30otn_history.len(); index++)
    {
        if(otu_second30otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_history.len(); index++)
    {
        if(otu_second30otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory>();
        ent_->parent = this;
        otu_second30otn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_second30otn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnHistory()
    :
    number{YType::uint32, "number"}
        ,
    otu_second30otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances>())
{
    otu_second30otn_time_line_instances->parent = this;

    yang_name = "otu-second30otn-history"; yang_parent_name = "otu-second30otn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::~OtuSecond30otnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instances")
    {
        if(otu_second30otn_time_line_instances == nullptr)
        {
            otu_second30otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances>();
        }
        return otu_second30otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_second30otn_time_line_instances != nullptr)
    {
        _children["otu-second30otn-time-line-instances"] = otu_second30otn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstances()
    :
    otu_second30otn_time_line_instance(this, {"number"})
{

    yang_name = "otu-second30otn-time-line-instances"; yang_parent_name = "otu-second30otn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::~OtuSecond30otnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.len(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.len(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance>();
        ent_->parent = this;
        otu_second30otn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_second30otn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::OtuSecond30otnTimeLineInstance()
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
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc>())
    , es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe>())
    , esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe>())
    , ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe>())
    , sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe>())
    , uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe>())
    , bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe>())
    , bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe>())
    , fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe>())
    , es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe>())
    , esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe>())
    , ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe>())
    , sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe>())
    , uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe>())
    , bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe>())
    , bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe>())
    , fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "otu-second30otn-time-line-instance"; yang_parent_name = "otu-second30otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::~OtuSecond30otnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::has_data() const
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
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lbc != nullptr)
    {
        _children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        _children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        _children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        _children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        _children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        _children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        _children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        _children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        _children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        _children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        _children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        _children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        _children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        _children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        _children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        _children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        _children["fc-fe"] = fc_fe;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15History()
    :
    otu_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories>())
    , otu_minute15prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories>())
    , otu_minute15otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories>())
{
    otu_minute15fec_histories->parent = this;
    otu_minute15prbs_histories->parent = this;
    otu_minute15otn_histories->parent = this;

    yang_name = "otu-minute15-history"; yang_parent_name = "otu-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::~OtuMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_data() const
{
    if (is_presence_container) return true;
    return (otu_minute15fec_histories !=  nullptr && otu_minute15fec_histories->has_data())
	|| (otu_minute15prbs_histories !=  nullptr && otu_minute15prbs_histories->has_data())
	|| (otu_minute15otn_histories !=  nullptr && otu_minute15otn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (otu_minute15fec_histories !=  nullptr && otu_minute15fec_histories->has_operation())
	|| (otu_minute15prbs_histories !=  nullptr && otu_minute15prbs_histories->has_operation())
	|| (otu_minute15otn_histories !=  nullptr && otu_minute15otn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-histories")
    {
        if(otu_minute15fec_histories == nullptr)
        {
            otu_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories>();
        }
        return otu_minute15fec_histories;
    }

    if(child_yang_name == "otu-minute15prbs-histories")
    {
        if(otu_minute15prbs_histories == nullptr)
        {
            otu_minute15prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories>();
        }
        return otu_minute15prbs_histories;
    }

    if(child_yang_name == "otu-minute15otn-histories")
    {
        if(otu_minute15otn_histories == nullptr)
        {
            otu_minute15otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories>();
        }
        return otu_minute15otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_minute15fec_histories != nullptr)
    {
        _children["otu-minute15fec-histories"] = otu_minute15fec_histories;
    }

    if(otu_minute15prbs_histories != nullptr)
    {
        _children["otu-minute15prbs-histories"] = otu_minute15prbs_histories;
    }

    if(otu_minute15otn_histories != nullptr)
    {
        _children["otu-minute15otn-histories"] = otu_minute15otn_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-histories" || name == "otu-minute15prbs-histories" || name == "otu-minute15otn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistories()
    :
    otu_minute15fec_history(this, {"number"})
{

    yang_name = "otu-minute15fec-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::~OtuMinute15fecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15fec_history.len(); index++)
    {
        if(otu_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_history.len(); index++)
    {
        if(otu_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory>();
        ent_->parent = this;
        otu_minute15fec_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15fec_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecHistory()
    :
    number{YType::uint32, "number"}
        ,
    otu_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances>())
{
    otu_minute15fec_time_line_instances->parent = this;

    yang_name = "otu-minute15fec-history"; yang_parent_name = "otu-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::~OtuMinute15fecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instances")
    {
        if(otu_minute15fec_time_line_instances == nullptr)
        {
            otu_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances>();
        }
        return otu_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_minute15fec_time_line_instances != nullptr)
    {
        _children["otu-minute15fec-time-line-instances"] = otu_minute15fec_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstances()
    :
    otu_minute15fec_time_line_instance(this, {"number"})
{

    yang_name = "otu-minute15fec-time-line-instances"; yang_parent_name = "otu-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::~OtuMinute15fecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.len(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.len(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance>();
        ent_->parent = this;
        otu_minute15fec_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15fec_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::OtuMinute15fecTimeLineInstance()
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
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits>())
    , uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords>())
    , pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer>())
    , post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer>())
    , q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q>())
    , qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-minute15fec-time-line-instance"; yang_parent_name = "otu-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::~OtuMinute15fecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::Q()
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

    yang_name = "q"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistories()
    :
    otu_minute15prbs_history(this, {"number"})
{

    yang_name = "otu-minute15prbs-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::~OtuMinute15prbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15prbs_history.len(); index++)
    {
        if(otu_minute15prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_history.len(); index++)
    {
        if(otu_minute15prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory>();
        ent_->parent = this;
        otu_minute15prbs_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15prbs_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsHistory()
    :
    number{YType::uint32, "number"}
        ,
    otu_minute15prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances>())
{
    otu_minute15prbs_time_line_instances->parent = this;

    yang_name = "otu-minute15prbs-history"; yang_parent_name = "otu-minute15prbs-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::~OtuMinute15prbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instances")
    {
        if(otu_minute15prbs_time_line_instances == nullptr)
        {
            otu_minute15prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances>();
        }
        return otu_minute15prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_minute15prbs_time_line_instances != nullptr)
    {
        _children["otu-minute15prbs-time-line-instances"] = otu_minute15prbs_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstances()
    :
    otu_minute15prbs_time_line_instance(this, {"number"})
{

    yang_name = "otu-minute15prbs-time-line-instances"; yang_parent_name = "otu-minute15prbs-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::~OtuMinute15prbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.len(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.len(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance>();
        ent_->parent = this;
        otu_minute15prbs_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15prbs_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::OtuMinute15prbsTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    ebc{YType::uint64, "ebc"},
    found_count{YType::uint32, "found-count"},
    lost_count{YType::uint32, "lost-count"},
    found_at_time{YType::uint64, "found-at-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    conf_patt{YType::enumeration, "conf-patt"}
        ,
    rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt>())
    , prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "otu-minute15prbs-time-line-instance"; yang_parent_name = "otu-minute15prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::~OtuMinute15prbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| ebc.is_set
	|| found_count.is_set
	|| lost_count.is_set
	|| found_at_time.is_set
	|| lost_at_time.is_set
	|| conf_patt.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data())
	|| (prbs_status !=  nullptr && prbs_status->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation())
	|| (prbs_status !=  nullptr && prbs_status->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rcv_patt != nullptr)
    {
        _children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        _children["prbs-status"] = prbs_status;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistories()
    :
    otu_minute15otn_history(this, {"number"})
{

    yang_name = "otu-minute15otn-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::~OtuMinute15otnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15otn_history.len(); index++)
    {
        if(otu_minute15otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_history.len(); index++)
    {
        if(otu_minute15otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory>();
        ent_->parent = this;
        otu_minute15otn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15otn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnHistory()
    :
    number{YType::uint32, "number"}
        ,
    otu_minute15otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances>())
{
    otu_minute15otn_time_line_instances->parent = this;

    yang_name = "otu-minute15otn-history"; yang_parent_name = "otu-minute15otn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::~OtuMinute15otnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instances")
    {
        if(otu_minute15otn_time_line_instances == nullptr)
        {
            otu_minute15otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances>();
        }
        return otu_minute15otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_minute15otn_time_line_instances != nullptr)
    {
        _children["otu-minute15otn-time-line-instances"] = otu_minute15otn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstances()
    :
    otu_minute15otn_time_line_instance(this, {"number"})
{

    yang_name = "otu-minute15otn-time-line-instances"; yang_parent_name = "otu-minute15otn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::~OtuMinute15otnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.len(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.len(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance>();
        ent_->parent = this;
        otu_minute15otn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_minute15otn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::OtuMinute15otnTimeLineInstance()
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
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc>())
    , es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe>())
    , esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe>())
    , ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe>())
    , sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe>())
    , uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe>())
    , bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe>())
    , bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe>())
    , fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe>())
    , es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe>())
    , esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe>())
    , ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe>())
    , sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe>())
    , uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe>())
    , bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe>())
    , bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe>())
    , fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "otu-minute15otn-time-line-instance"; yang_parent_name = "otu-minute15otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::~OtuMinute15otnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::has_data() const
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
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lbc != nullptr)
    {
        _children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        _children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        _children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        _children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        _children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        _children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        _children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        _children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        _children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        _children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        _children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        _children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        _children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        _children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        _children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        _children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        _children["fc-fe"] = fc_fe;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}


}
}

