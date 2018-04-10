
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_214.hpp"
#include "Cisco_IOS_XE_native_215.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Ipv6()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
    	,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>())
	,type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv6"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::~Ipv6()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_data() const
{
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_data() const
{
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
    	,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>())
	,scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>())
	,scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_data() const
{
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::Download::Download()
    :
    catch_all(std::make_shared<Native::Cef::Table::Download::CatchAll>())
	,connected_route(std::make_shared<Native::Cef::Table::Download::ConnectedRoute>())
	,default_route(std::make_shared<Native::Cef::Table::Download::DefaultRoute>())
	,receive_route(std::make_shared<Native::Cef::Table::Download::ReceiveRoute>())
	,recursive_dependents(std::make_shared<Native::Cef::Table::Download::RecursiveDependents>())
	,route_in_vrf(std::make_shared<Native::Cef::Table::Download::RouteInVrf>())
{
    catch_all->parent = this;
    connected_route->parent = this;
    default_route->parent = this;
    receive_route->parent = this;
    recursive_dependents->parent = this;
    route_in_vrf->parent = this;

    yang_name = "download"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::~Download()
{
}

bool Native::Cef::Table::Download::has_data() const
{
    return (catch_all !=  nullptr && catch_all->has_data())
	|| (connected_route !=  nullptr && connected_route->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (receive_route !=  nullptr && receive_route->has_data())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_data())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_data());
}

bool Native::Cef::Table::Download::has_operation() const
{
    return is_set(yfilter)
	|| (catch_all !=  nullptr && catch_all->has_operation())
	|| (connected_route !=  nullptr && connected_route->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (receive_route !=  nullptr && receive_route->has_operation())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_operation())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_operation());
}

std::string Native::Cef::Table::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catch-all")
    {
        if(catch_all == nullptr)
        {
            catch_all = std::make_shared<Native::Cef::Table::Download::CatchAll>();
        }
        return catch_all;
    }

    if(child_yang_name == "connected-route")
    {
        if(connected_route == nullptr)
        {
            connected_route = std::make_shared<Native::Cef::Table::Download::ConnectedRoute>();
        }
        return connected_route;
    }

    if(child_yang_name == "default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Cef::Table::Download::DefaultRoute>();
        }
        return default_route;
    }

    if(child_yang_name == "receive-route")
    {
        if(receive_route == nullptr)
        {
            receive_route = std::make_shared<Native::Cef::Table::Download::ReceiveRoute>();
        }
        return receive_route;
    }

    if(child_yang_name == "recursive-dependents")
    {
        if(recursive_dependents == nullptr)
        {
            recursive_dependents = std::make_shared<Native::Cef::Table::Download::RecursiveDependents>();
        }
        return recursive_dependents;
    }

    if(child_yang_name == "route-in-vrf")
    {
        if(route_in_vrf == nullptr)
        {
            route_in_vrf = std::make_shared<Native::Cef::Table::Download::RouteInVrf>();
        }
        return route_in_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(catch_all != nullptr)
    {
        children["catch-all"] = catch_all;
    }

    if(connected_route != nullptr)
    {
        children["connected-route"] = connected_route;
    }

    if(default_route != nullptr)
    {
        children["default-route"] = default_route;
    }

    if(receive_route != nullptr)
    {
        children["receive-route"] = receive_route;
    }

    if(recursive_dependents != nullptr)
    {
        children["recursive-dependents"] = recursive_dependents;
    }

    if(route_in_vrf != nullptr)
    {
        children["route-in-vrf"] = route_in_vrf;
    }

    return children;
}

void Native::Cef::Table::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catch-all" || name == "connected-route" || name == "default-route" || name == "receive-route" || name == "recursive-dependents" || name == "route-in-vrf")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::CatchAll()
    :
    priority(std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>())
{
    priority->parent = this;

    yang_name = "catch-all"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::~CatchAll()
{
}

bool Native::Cef::Table::Download::CatchAll::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::CatchAll::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::CatchAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catch-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::CatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::CatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::CatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "catch-all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/catch-all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::CatchAll::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::CatchAll::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::ConnectedRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>())
{
    priority->parent = this;

    yang_name = "connected-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::~ConnectedRoute()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ConnectedRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/connected-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::DefaultRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>())
{
    priority->parent = this;

    yang_name = "default-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::~DefaultRoute()
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::DefaultRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::DefaultRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::DefaultRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::DefaultRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "default-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/default-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::ReceiveRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>())
{
    priority->parent = this;

    yang_name = "receive-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::~ReceiveRoute()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ReceiveRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ReceiveRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "receive-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/receive-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::RecursiveDependents()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>())
{
    priority->parent = this;

    yang_name = "recursive-dependents"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::~RecursiveDependents()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RecursiveDependents::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-dependents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RecursiveDependents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "recursive-dependents"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/recursive-dependents/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::RouteInVrf()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>())
{
    priority->parent = this;

    yang_name = "route-in-vrf"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::~RouteInVrf()
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RouteInVrf::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RouteInVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-in-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RouteInVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RouteInVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "route-in-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/route-in-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Dialer::Dialer()
{

    yang_name = "dialer"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dialer::~Dialer()
{
}

bool Native::Dialer::has_data() const
{
    for (std::size_t index=0; index<watch_list.size(); index++)
    {
        if(watch_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Dialer::has_operation() const
{
    for (std::size_t index=0; index<watch_list.size(); index++)
    {
        if(watch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Dialer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watch-list")
    {
        auto c = std::make_shared<Native::Dialer::WatchList>();
        c->parent = this;
        watch_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : watch_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watch-list")
        return true;
    return false;
}

Native::Dialer::WatchList::WatchList()
    :
    number{YType::uint8, "number"}
{

    yang_name = "watch-list"; yang_parent_name = "dialer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dialer::WatchList::~WatchList()
{
}

bool Native::Dialer::WatchList::has_data() const
{
    for (std::size_t index=0; index<delay.size(); index++)
    {
        if(delay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Dialer::WatchList::has_operation() const
{
    for (std::size_t index=0; index<delay.size(); index++)
    {
        if(delay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Dialer::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cellular:dialer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dialer::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        auto c = std::make_shared<Native::Dialer::WatchList::Delay>();
        c->parent = this;
        delay.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        auto c = std::make_shared<Native::Dialer::WatchList::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dialer::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : delay)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ip)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Dialer::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "number")
        return true;
    return false;
}

Native::Dialer::WatchList::Delay::Delay()
    :
    interval{YType::enumeration, "interval"},
    initial{YType::empty, "initial"},
    delay_time{YType::uint32, "delay-time"}
{

    yang_name = "delay"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Dialer::WatchList::Delay::~Delay()
{
}

bool Native::Dialer::WatchList::Delay::has_data() const
{
    return interval.is_set
	|| initial.is_set
	|| delay_time.is_set;
}

bool Native::Dialer::WatchList::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(delay_time.yfilter);
}

std::string Native::Dialer::WatchList::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay" <<"[interval='" <<interval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (delay_time.is_set || is_set(delay_time.yfilter)) leaf_name_data.push_back(delay_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dialer::WatchList::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dialer::WatchList::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Dialer::WatchList::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-time")
    {
        delay_time = value;
        delay_time.value_namespace = name_space;
        delay_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "delay-time")
    {
        delay_time.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial" || name == "delay-time")
        return true;
    return false;
}

Native::Dialer::WatchList::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Dialer::WatchList::Ip::~Ip()
{
}

bool Native::Dialer::WatchList::Ip::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Dialer::WatchList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Dialer::WatchList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dialer::WatchList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dialer::WatchList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Dialer::WatchList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::DialerList::DialerList()
    :
    group_number{YType::uint8, "group-number"}
{

    yang_name = "dialer-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DialerList::~DialerList()
{
}

bool Native::DialerList::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return group_number.is_set;
}

bool Native::DialerList::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter);
}

std::string Native::DialerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DialerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DialerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<Native::DialerList::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DialerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::DialerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::DialerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "group-number")
        return true;
    return false;
}

Native::DialerList::Protocol::Protocol()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    access{YType::enumeration, "access"},
    list_name{YType::str, "list-name"}
{

    yang_name = "protocol"; yang_parent_name = "dialer-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DialerList::Protocol::~Protocol()
{
}

bool Native::DialerList::Protocol::has_data() const
{
    return protocol_type.is_set
	|| access.is_set
	|| list_name.is_set;
}

bool Native::DialerList::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(list_name.yfilter);
}

std::string Native::DialerList::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-type='" <<protocol_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DialerList::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DialerList::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DialerList::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
}

bool Native::DialerList::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "access" || name == "list-name")
        return true;
    return false;
}

Native::Coap::Coap()
    :
    http(std::make_shared<Native::Coap::Http>())
{
    http->parent = this;

    yang_name = "coap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::~Coap()
{
}

bool Native::Coap::has_data() const
{
    return (http !=  nullptr && http->has_data());
}

bool Native::Coap::has_operation() const
{
    return is_set(yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Coap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-coap:coap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Coap::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Coap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Coap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Coap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Coap::Http::Http()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "http"; yang_parent_name = "coap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::Http::~Http()
{
}

bool Native::Coap::Http::has_data() const
{
    return enable.is_set;
}

bool Native::Coap::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Coap::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-coap:coap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Coap::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Coap::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Coap::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::DeviceSensor::DeviceSensor()
    :
    accounting{YType::empty, "accounting"}
    	,
    notify(std::make_shared<Native::DeviceSensor::Notify>())
{
    notify->parent = this;

    yang_name = "device-sensor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceSensor::~DeviceSensor()
{
}

bool Native::DeviceSensor::has_data() const
{
    return accounting.is_set
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::DeviceSensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::DeviceSensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-sensor:device-sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::DeviceSensor::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(notify != nullptr)
    {
        children["notify"] = notify;
    }

    return children;
}

void Native::DeviceSensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notify" || name == "accounting")
        return true;
    return false;
}

Native::DeviceSensor::Notify::Notify()
    :
    all_changes{YType::empty, "all-changes"}
{

    yang_name = "notify"; yang_parent_name = "device-sensor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceSensor::Notify::~Notify()
{
}

bool Native::DeviceSensor::Notify::has_data() const
{
    return all_changes.is_set;
}

bool Native::DeviceSensor::Notify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_changes.yfilter);
}

std::string Native::DeviceSensor::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-device-sensor:device-sensor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_changes.is_set || is_set(all_changes.yfilter)) leaf_name_data.push_back(all_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceSensor::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceSensor::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceSensor::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-changes")
    {
        all_changes = value;
        all_changes.value_namespace = name_space;
        all_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-changes")
    {
        all_changes.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-changes")
        return true;
    return false;
}

Native::Diagnostic::Diagnostic()
    :
    bootup(std::make_shared<Native::Diagnostic::Bootup>())
	,event_log(std::make_shared<Native::Diagnostic::EventLog>())
	,monitor(std::make_shared<Native::Diagnostic::Monitor>())
	,schedule(std::make_shared<Native::Diagnostic::Schedule>())
{
    bootup->parent = this;
    event_log->parent = this;
    monitor->parent = this;
    schedule->parent = this;

    yang_name = "diagnostic"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::~Diagnostic()
{
}

bool Native::Diagnostic::has_data() const
{
    return (bootup !=  nullptr && bootup->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (schedule !=  nullptr && schedule->has_data());
}

bool Native::Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| (bootup !=  nullptr && bootup->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation());
}

std::string Native::Diagnostic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diagnostics:diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootup")
    {
        if(bootup == nullptr)
        {
            bootup = std::make_shared<Native::Diagnostic::Bootup>();
        }
        return bootup;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Diagnostic::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Diagnostic::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Diagnostic::Schedule>();
        }
        return schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bootup != nullptr)
    {
        children["bootup"] = bootup;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    return children;
}

void Native::Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootup" || name == "event-log" || name == "monitor" || name == "schedule")
        return true;
    return false;
}

Native::Diagnostic::Bootup::Bootup()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "bootup"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Bootup::~Bootup()
{
}

bool Native::Diagnostic::Bootup::has_data() const
{
    return level.is_set;
}

bool Native::Diagnostic::Bootup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Diagnostic::Bootup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Bootup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Bootup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Bootup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Bootup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Bootup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Bootup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Bootup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Diagnostic::EventLog::EventLog()
    :
    size{YType::uint16, "size"}
{

    yang_name = "event-log"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::EventLog::~EventLog()
{
}

bool Native::Diagnostic::EventLog::has_data() const
{
    return size.is_set;
}

bool Native::Diagnostic::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Diagnostic::EventLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Diagnostic::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Monitor()
    :
    syslog{YType::empty, "syslog"}
    	,
    interval(std::make_shared<Native::Diagnostic::Monitor::Interval>())
	,threshold(std::make_shared<Native::Diagnostic::Monitor::Threshold>())
{
    interval->parent = this;
    threshold->parent = this;

    yang_name = "monitor"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::~Monitor()
{
}

bool Native::Diagnostic::Monitor::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return syslog.is_set
	|| (interval !=  nullptr && interval->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Diagnostic::Monitor::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| (interval !=  nullptr && interval->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Diagnostic::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Diagnostic::Monitor::Interval>();
        }
        return interval;
    }

    if(child_yang_name == "switch")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Switch>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Diagnostic::Monitor::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    count = 0;
    for (auto const & c : switch_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Diagnostic::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "switch" || name == "threshold" || name == "syslog")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Interval()
    :
    switch_(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch>())
{
    switch_->parent = this;

    yang_name = "interval"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::~Interval()
{
}

bool Native::Diagnostic::Monitor::Interval::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Diagnostic::Monitor::Interval::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch()
{

    yang_name = "switch"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Interval::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : switch_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : test_ids)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"},
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::All()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::has_data() const
{
    return hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch::Switch()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Switch::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch::Test::Test()
    :
    id{YType::str, "id"},
    all{YType::empty, "all"}
{

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Switch::Test::has_data() const
{
    return id.is_set
	|| all.is_set;
}

bool Native::Diagnostic::Monitor::Switch::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Diagnostic::Monitor::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Monitor::Switch::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::~Threshold()
{
}

bool Native::Diagnostic::Monitor::Threshold::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : switch_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Switch()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : test_ids)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure>())
{
    failure->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::has_data() const
{
    return id.is_set
	|| (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : count)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::All()
    :
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure>())
{
    failure->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : count)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Schedule()
{

    yang_name = "schedule"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::~Schedule()
{
}

bool Native::Diagnostic::Schedule::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Schedule::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : switch_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Switch()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    test(std::make_shared<Native::Diagnostic::Schedule::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::Switch::~Switch()
{
}

bool Native::Diagnostic::Schedule::Switch::has_data() const
{
    return switch_number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Schedule::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[switch-number='" <<switch_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Schedule::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "switch-number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All>())
	,basic(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic>())
	,complete(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete>())
	,minimal(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal>())
	,non_disruptive(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive>())
	,per_port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort>())
{
    all->parent = this;
    basic->parent = this;
    complete->parent = this;
    minimal->parent = this;
    non_disruptive->parent = this;
    per_port->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data())
	|| (basic !=  nullptr && basic->has_data())
	|| (complete !=  nullptr && complete->has_data())
	|| (minimal !=  nullptr && minimal->has_data())
	|| (non_disruptive !=  nullptr && non_disruptive->has_data())
	|| (per_port !=  nullptr && per_port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (basic !=  nullptr && basic->has_operation())
	|| (complete !=  nullptr && complete->has_operation())
	|| (minimal !=  nullptr && minimal->has_operation())
	|| (non_disruptive !=  nullptr && non_disruptive->has_operation())
	|| (per_port !=  nullptr && per_port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic>();
        }
        return basic;
    }

    if(child_yang_name == "complete")
    {
        if(complete == nullptr)
        {
            complete = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete>();
        }
        return complete;
    }

    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal>();
        }
        return minimal;
    }

    if(child_yang_name == "non-disruptive")
    {
        if(non_disruptive == nullptr)
        {
            non_disruptive = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive>();
        }
        return non_disruptive;
    }

    if(child_yang_name == "per-port")
    {
        if(per_port == nullptr)
        {
            per_port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort>();
        }
        return per_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : test_ids)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    if(complete != nullptr)
    {
        children["complete"] = complete;
    }

    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    if(non_disruptive != nullptr)
    {
        children["non-disruptive"] = non_disruptive;
    }

    if(per_port != nullptr)
    {
        children["per-port"] = per_port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all" || name == "basic" || name == "complete" || name == "minimal" || name == "non-disruptive" || name == "per-port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::has_data() const
{
    return id.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_port_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : port_number_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_port_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : port_number_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::All_()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::~All_()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Basic()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "basic"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::~Basic()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_port_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : port_number_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Complete()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "complete"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::~Complete()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Complete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Minimal()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "minimal"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::~Minimal()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::NonDisruptive()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "non-disruptive"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::~NonDisruptive()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-disruptive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_port_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : port_number_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::PerPort()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "per-port"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::~PerPort()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_port_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : port_number_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::connect {0, "connect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::disconnect {1, "disconnect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::route_check {2, "route-check"};

const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::appletalk {0, "appletalk"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::bridge {1, "bridge"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns {2, "clns"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_es {3, "clns_es"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_is {4, "clns_is"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet {5, "decnet"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_node {6, "decnet_node"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L1 {7, "decnet_router-L1"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L2 {8, "decnet_router-L2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ip {9, "ip"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipv6 {10, "ipv6"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipx {11, "ipx"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::llc2 {12, "llc2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::netbios {13, "netbios"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::novell {14, "novell"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::vines {15, "vines"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::xns {16, "xns"};

const Enum::YLeaf Native::DialerList::Protocol::Access::deny {0, "deny"};
const Enum::YLeaf Native::DialerList::Protocol::Access::list {1, "list"};
const Enum::YLeaf Native::DialerList::Protocol::Access::permit {2, "permit"};

const Enum::YLeaf Native::Diagnostic::Bootup::Level::complete {0, "complete"};
const Enum::YLeaf Native::Diagnostic::Bootup::Level::minimal {1, "minimal"};


}
}

