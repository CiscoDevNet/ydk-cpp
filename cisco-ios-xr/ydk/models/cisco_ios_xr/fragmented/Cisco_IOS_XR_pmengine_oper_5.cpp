
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"
#include "Cisco_IOS_XR_pmengine_oper_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfps()
{

    yang_name = "odu-hour24gfps"; yang_parent_name = "odu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::~OduHour24Gfps()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::has_data() const
{
    for (std::size_t index=0; index<odu_hour24gfp.size(); index++)
    {
        if(odu_hour24gfp[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp.size(); index++)
    {
        if(odu_hour24gfp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24gfp")
    {
        for(auto const & c : odu_hour24gfp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp>();
        c->parent = this;
        odu_hour24gfp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24gfp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24gfp")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::OduHour24Gfp()
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
    rx_bit_err(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr>())
	,rx_crc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc>())
	,rx_csf(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf>())
	,rx_inv_typ(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp>())
	,rx_lfd(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd>())
{
    rx_bit_err->parent = this;
    rx_crc->parent = this;
    rx_csf->parent = this;
    rx_inv_typ->parent = this;
    rx_lfd->parent = this;

    yang_name = "odu-hour24gfp"; yang_parent_name = "odu-hour24gfps"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::~OduHour24Gfp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err == nullptr)
        {
            rx_bit_err = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr>();
        }
        return rx_bit_err;
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc == nullptr)
        {
            rx_crc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc>();
        }
        return rx_crc;
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf == nullptr)
        {
            rx_csf = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf>();
        }
        return rx_csf;
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ == nullptr)
        {
            rx_inv_typ = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp>();
        }
        return rx_inv_typ;
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd == nullptr)
        {
            rx_lfd = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd>();
        }
        return rx_lfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-bit-err" || name == "rx-crc" || name == "rx-csf" || name == "rx-inv-typ" || name == "rx-lfd" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-bit-err"; yang_parent_name = "odu-hour24gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-crc"; yang_parent_name = "odu-hour24gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::~RxCrc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-csf"; yang_parent_name = "odu-hour24gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::~RxCsf()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-inv-typ"; yang_parent_name = "odu-hour24gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-lfd"; yang_parent_name = "odu-hour24gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::~RxLfd()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otns()
{

    yang_name = "odu-hour24otns"; yang_parent_name = "odu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::~OduHour24Otns()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::has_data() const
{
    for (std::size_t index=0; index<odu_hour24otn.size(); index++)
    {
        if(odu_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn.size(); index++)
    {
        if(odu_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24otn")
    {
        for(auto const & c : odu_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn>();
        c->parent = this;
        odu_hour24otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24otn")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::OduHour24Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe>())
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

    yang_name = "odu-hour24otn"; yang_parent_name = "odu-hour24otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::~OduHour24Otn()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "odu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbses()
{

    yang_name = "odu-hour24prbses"; yang_parent_name = "odu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::~OduHour24Prbses()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::has_data() const
{
    for (std::size_t index=0; index<odu_hour24prbs.size(); index++)
    {
        if(odu_hour24prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24prbs.size(); index++)
    {
        if(odu_hour24prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-hour24prbs")
    {
        for(auto const & c : odu_hour24prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs>();
        c->parent = this;
        odu_hour24prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_hour24prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-hour24prbs")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::OduHour24Prbs()
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
    prbs_status(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "odu-hour24prbs"; yang_parent_name = "odu-hour24prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::~OduHour24Prbs()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "odu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "odu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15()
    :
    odu_minute15gfps(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps>())
	,odu_minute15otns(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns>())
	,odu_minute15prbses(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses>())
{
    odu_minute15gfps->parent = this;
    odu_minute15otns->parent = this;
    odu_minute15prbses->parent = this;

    yang_name = "odu-minute15"; yang_parent_name = "odu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::~OduMinute15()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::has_data() const
{
    return (odu_minute15gfps !=  nullptr && odu_minute15gfps->has_data())
	|| (odu_minute15otns !=  nullptr && odu_minute15otns->has_data())
	|| (odu_minute15prbses !=  nullptr && odu_minute15prbses->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (odu_minute15gfps !=  nullptr && odu_minute15gfps->has_operation())
	|| (odu_minute15otns !=  nullptr && odu_minute15otns->has_operation())
	|| (odu_minute15prbses !=  nullptr && odu_minute15prbses->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15gfps")
    {
        if(odu_minute15gfps == nullptr)
        {
            odu_minute15gfps = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps>();
        }
        return odu_minute15gfps;
    }

    if(child_yang_name == "odu-minute15otns")
    {
        if(odu_minute15otns == nullptr)
        {
            odu_minute15otns = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns>();
        }
        return odu_minute15otns;
    }

    if(child_yang_name == "odu-minute15prbses")
    {
        if(odu_minute15prbses == nullptr)
        {
            odu_minute15prbses = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses>();
        }
        return odu_minute15prbses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_minute15gfps != nullptr)
    {
        children["odu-minute15gfps"] = odu_minute15gfps;
    }

    if(odu_minute15otns != nullptr)
    {
        children["odu-minute15otns"] = odu_minute15otns;
    }

    if(odu_minute15prbses != nullptr)
    {
        children["odu-minute15prbses"] = odu_minute15prbses;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15gfps" || name == "odu-minute15otns" || name == "odu-minute15prbses")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfps()
{

    yang_name = "odu-minute15gfps"; yang_parent_name = "odu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::~OduMinute15Gfps()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::has_data() const
{
    for (std::size_t index=0; index<odu_minute15gfp.size(); index++)
    {
        if(odu_minute15gfp[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15gfp.size(); index++)
    {
        if(odu_minute15gfp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15gfp")
    {
        for(auto const & c : odu_minute15gfp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp>();
        c->parent = this;
        odu_minute15gfp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_minute15gfp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15gfp")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::OduMinute15Gfp()
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
    rx_bit_err(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr>())
	,rx_crc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc>())
	,rx_csf(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf>())
	,rx_inv_typ(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp>())
	,rx_lfd(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd>())
{
    rx_bit_err->parent = this;
    rx_crc->parent = this;
    rx_csf->parent = this;
    rx_inv_typ->parent = this;
    rx_lfd->parent = this;

    yang_name = "odu-minute15gfp"; yang_parent_name = "odu-minute15gfps"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::~OduMinute15Gfp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err == nullptr)
        {
            rx_bit_err = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr>();
        }
        return rx_bit_err;
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc == nullptr)
        {
            rx_crc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc>();
        }
        return rx_crc;
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf == nullptr)
        {
            rx_csf = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf>();
        }
        return rx_csf;
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ == nullptr)
        {
            rx_inv_typ = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp>();
        }
        return rx_inv_typ;
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd == nullptr)
        {
            rx_lfd = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd>();
        }
        return rx_lfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-bit-err" || name == "rx-crc" || name == "rx-csf" || name == "rx-inv-typ" || name == "rx-lfd" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-bit-err"; yang_parent_name = "odu-minute15gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-crc"; yang_parent_name = "odu-minute15gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::~RxCrc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-csf"; yang_parent_name = "odu-minute15gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::~RxCsf()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-inv-typ"; yang_parent_name = "odu-minute15gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "rx-lfd"; yang_parent_name = "odu-minute15gfp"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::~RxLfd()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otns()
{

    yang_name = "odu-minute15otns"; yang_parent_name = "odu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::~OduMinute15Otns()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<odu_minute15otn.size(); index++)
    {
        if(odu_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15otn.size(); index++)
    {
        if(odu_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15otn")
    {
        for(auto const & c : odu_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn>();
        c->parent = this;
        odu_minute15otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_minute15otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15otn")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::OduMinute15Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe>())
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

    yang_name = "odu-minute15otn"; yang_parent_name = "odu-minute15otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::~OduMinute15Otn()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "odu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbses()
{

    yang_name = "odu-minute15prbses"; yang_parent_name = "odu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::~OduMinute15Prbses()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::has_data() const
{
    for (std::size_t index=0; index<odu_minute15prbs.size(); index++)
    {
        if(odu_minute15prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15prbs.size(); index++)
    {
        if(odu_minute15prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-minute15prbs")
    {
        for(auto const & c : odu_minute15prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs>();
        c->parent = this;
        odu_minute15prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_minute15prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-minute15prbs")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::OduMinute15Prbs()
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
    prbs_status(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "odu-minute15prbs"; yang_parent_name = "odu-minute15prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::~OduMinute15Prbs()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::has_data() const
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::has_operation() const
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

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_children() const
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "odu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "odu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::Optics()
    :
    optics_ports(std::make_shared<PerformanceManagement::Optics::OpticsPorts>())
{
    optics_ports->parent = this;

    yang_name = "optics"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::~Optics()
{
}

bool PerformanceManagement::Optics::has_data() const
{
    return (optics_ports !=  nullptr && optics_ports->has_data());
}

bool PerformanceManagement::Optics::has_operation() const
{
    return is_set(yfilter)
	|| (optics_ports !=  nullptr && optics_ports->has_operation());
}

std::string PerformanceManagement::Optics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-ports")
    {
        if(optics_ports == nullptr)
        {
            optics_ports = std::make_shared<PerformanceManagement::Optics::OpticsPorts>();
        }
        return optics_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_ports != nullptr)
    {
        children["optics-ports"] = optics_ports;
    }

    return children;
}

void PerformanceManagement::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-ports")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPorts()
{

    yang_name = "optics-ports"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::OpticsPorts::~OpticsPorts()
{
}

bool PerformanceManagement::Optics::OpticsPorts::has_data() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::has_operation() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::OpticsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-port")
    {
        for(auto const & c : optics_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort>();
        c->parent = this;
        optics_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-port")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsPort()
    :
    name{YType::str, "name"}
    	,
    optics_current(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>())
{
    optics_current->parent = this;

    yang_name = "optics-port"; yang_parent_name = "optics-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::~OpticsPort()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_data() const
{
    return name.is_set
	|| (optics_current !=  nullptr && optics_current->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (optics_current !=  nullptr && optics_current->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/optics-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-current")
    {
        if(optics_current == nullptr)
        {
            optics_current = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>();
        }
        return optics_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_current != nullptr)
    {
        children["optics-current"] = optics_current;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsCurrent()
    :
    optics_hour24(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>())
	,optics_minute15(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>())
	,optics_second30(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>())
{
    optics_hour24->parent = this;
    optics_minute15->parent = this;
    optics_second30->parent = this;

    yang_name = "optics-current"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::~OpticsCurrent()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_data() const
{
    return (optics_hour24 !=  nullptr && optics_hour24->has_data())
	|| (optics_minute15 !=  nullptr && optics_minute15->has_data())
	|| (optics_second30 !=  nullptr && optics_second30->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (optics_hour24 !=  nullptr && optics_hour24->has_operation())
	|| (optics_minute15 !=  nullptr && optics_minute15->has_operation())
	|| (optics_second30 !=  nullptr && optics_second30->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24")
    {
        if(optics_hour24 == nullptr)
        {
            optics_hour24 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>();
        }
        return optics_hour24;
    }

    if(child_yang_name == "optics-minute15")
    {
        if(optics_minute15 == nullptr)
        {
            optics_minute15 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>();
        }
        return optics_minute15;
    }

    if(child_yang_name == "optics-second30")
    {
        if(optics_second30 == nullptr)
        {
            optics_second30 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>();
        }
        return optics_second30;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_hour24 != nullptr)
    {
        children["optics-hour24"] = optics_hour24;
    }

    if(optics_minute15 != nullptr)
    {
        children["optics-minute15"] = optics_minute15;
    }

    if(optics_second30 != nullptr)
    {
        children["optics-second30"] = optics_second30;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24" || name == "optics-minute15" || name == "optics-second30")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24()
    :
    optics_hour24_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>())
	,optics_hour24fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>())
{
    optics_hour24_optics->parent = this;
    optics_hour24fecs->parent = this;

    yang_name = "optics-hour24"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::~OpticsHour24()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_data() const
{
    return (optics_hour24_optics !=  nullptr && optics_hour24_optics->has_data())
	|| (optics_hour24fecs !=  nullptr && optics_hour24fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_operation() const
{
    return is_set(yfilter)
	|| (optics_hour24_optics !=  nullptr && optics_hour24_optics->has_operation())
	|| (optics_hour24fecs !=  nullptr && optics_hour24fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics")
    {
        if(optics_hour24_optics == nullptr)
        {
            optics_hour24_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>();
        }
        return optics_hour24_optics;
    }

    if(child_yang_name == "optics-hour24fecs")
    {
        if(optics_hour24fecs == nullptr)
        {
            optics_hour24fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>();
        }
        return optics_hour24fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_hour24_optics != nullptr)
    {
        children["optics-hour24-optics"] = optics_hour24_optics;
    }

    if(optics_hour24fecs != nullptr)
    {
        children["optics-hour24fecs"] = optics_hour24fecs;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics" || name == "optics-hour24fecs")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fecs()
{

    yang_name = "optics-hour24fecs"; yang_parent_name = "optics-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::~OpticsHour24Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_hour24fec.size(); index++)
    {
        if(optics_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24fec.size(); index++)
    {
        if(optics_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24fec")
    {
        for(auto const & c : optics_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec>();
        c->parent = this;
        optics_hour24fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_hour24fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::OpticsHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "optics-hour24fec"; yang_parent_name = "optics-hour24fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::~OpticsHour24Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_children() const
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::Q()
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

    yang_name = "q"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optics()
{

    yang_name = "optics-hour24-optics"; yang_parent_name = "optics-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::~OpticsHour24Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optic.size(); index++)
    {
        if(optics_hour24_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optic.size(); index++)
    {
        if(optics_hour24_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optic")
    {
        for(auto const & c : optics_hour24_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic>();
        c->parent = this;
        optics_hour24_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_hour24_optic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::OpticsHour24Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>())
{
    cd->parent = this;
    center_wavelength->parent = this;
    dgd->parent = this;
    lbc->parent = this;
    lbc_pc->parent = this;
    low_sig_freq_off->parent = this;
    opr->parent = this;
    opt->parent = this;
    osnr->parent = this;
    pcr->parent = this;
    pdl->parent = this;
    pmd->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;

    yang_name = "optics-hour24-optic"; yang_parent_name = "optics-hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::~OpticsHour24Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_operation() const
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
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cd" || name == "center-wavelength" || name == "dgd" || name == "lbc" || name == "lbc-pc" || name == "low-sig-freq-off" || name == "opr" || name == "opt" || name == "osnr" || name == "pcr" || name == "pdl" || name == "pmd" || name == "pn" || name == "rx-sig-pow" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "cd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::CenterWavelength()
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

    yang_name = "center-wavelength"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::Dgd()
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

    yang_name = "dgd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "lbc"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::LbcPc()
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

    yang_name = "lbc-pc"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::Opr()
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

    yang_name = "opr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::Opt()
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

    yang_name = "opt"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::Osnr()
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

    yang_name = "osnr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::Pcr()
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

    yang_name = "pcr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::Pdl()
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

    yang_name = "pdl"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::Pmd()
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

    yang_name = "pmd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::Pn()
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

    yang_name = "pn"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::RxSigPow()
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

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15()
    :
    optics_minute15_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>())
	,optics_minute15fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>())
{
    optics_minute15_optics->parent = this;
    optics_minute15fecs->parent = this;

    yang_name = "optics-minute15"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::~OpticsMinute15()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_data() const
{
    return (optics_minute15_optics !=  nullptr && optics_minute15_optics->has_data())
	|| (optics_minute15fecs !=  nullptr && optics_minute15fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (optics_minute15_optics !=  nullptr && optics_minute15_optics->has_operation())
	|| (optics_minute15fecs !=  nullptr && optics_minute15fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics")
    {
        if(optics_minute15_optics == nullptr)
        {
            optics_minute15_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>();
        }
        return optics_minute15_optics;
    }

    if(child_yang_name == "optics-minute15fecs")
    {
        if(optics_minute15fecs == nullptr)
        {
            optics_minute15fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>();
        }
        return optics_minute15fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_minute15_optics != nullptr)
    {
        children["optics-minute15-optics"] = optics_minute15_optics;
    }

    if(optics_minute15fecs != nullptr)
    {
        children["optics-minute15fecs"] = optics_minute15fecs;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics" || name == "optics-minute15fecs")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fecs()
{

    yang_name = "optics-minute15fecs"; yang_parent_name = "optics-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::~OpticsMinute15Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec.size(); index++)
    {
        if(optics_minute15fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec.size(); index++)
    {
        if(optics_minute15fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec")
    {
        for(auto const & c : optics_minute15fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec>();
        c->parent = this;
        optics_minute15fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::OpticsMinute15Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "optics-minute15fec"; yang_parent_name = "optics-minute15fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::~OpticsMinute15Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_children() const
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::Q()
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

    yang_name = "q"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optics()
{

    yang_name = "optics-minute15-optics"; yang_parent_name = "optics-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::~OpticsMinute15Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optic.size(); index++)
    {
        if(optics_minute15_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optic.size(); index++)
    {
        if(optics_minute15_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optic")
    {
        for(auto const & c : optics_minute15_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic>();
        c->parent = this;
        optics_minute15_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15_optic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::OpticsMinute15Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>())
{
    cd->parent = this;
    center_wavelength->parent = this;
    dgd->parent = this;
    lbc->parent = this;
    lbc_pc->parent = this;
    low_sig_freq_off->parent = this;
    opr->parent = this;
    opt->parent = this;
    osnr->parent = this;
    pcr->parent = this;
    pdl->parent = this;
    pmd->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;

    yang_name = "optics-minute15-optic"; yang_parent_name = "optics-minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::~OpticsMinute15Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_operation() const
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
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cd" || name == "center-wavelength" || name == "dgd" || name == "lbc" || name == "lbc-pc" || name == "low-sig-freq-off" || name == "opr" || name == "opt" || name == "osnr" || name == "pcr" || name == "pdl" || name == "pmd" || name == "pn" || name == "rx-sig-pow" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "cd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::CenterWavelength()
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

    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::Dgd()
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

    yang_name = "dgd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "lbc"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::LbcPc()
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

    yang_name = "lbc-pc"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::Opr()
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

    yang_name = "opr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::Opt()
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

    yang_name = "opt"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::Osnr()
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

    yang_name = "osnr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::Pcr()
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

    yang_name = "pcr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::Pdl()
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

    yang_name = "pdl"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::Pmd()
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

    yang_name = "pmd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::Pn()
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

    yang_name = "pn"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::RxSigPow()
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

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30()
    :
    optics_second30_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>())
	,optics_second30fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>())
{
    optics_second30_optics->parent = this;
    optics_second30fecs->parent = this;

    yang_name = "optics-second30"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::~OpticsSecond30()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_data() const
{
    return (optics_second30_optics !=  nullptr && optics_second30_optics->has_data())
	|| (optics_second30fecs !=  nullptr && optics_second30fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (optics_second30_optics !=  nullptr && optics_second30_optics->has_operation())
	|| (optics_second30fecs !=  nullptr && optics_second30fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optics")
    {
        if(optics_second30_optics == nullptr)
        {
            optics_second30_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>();
        }
        return optics_second30_optics;
    }

    if(child_yang_name == "optics-second30fecs")
    {
        if(optics_second30fecs == nullptr)
        {
            optics_second30fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>();
        }
        return optics_second30fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_second30_optics != nullptr)
    {
        children["optics-second30-optics"] = optics_second30_optics;
    }

    if(optics_second30fecs != nullptr)
    {
        children["optics-second30fecs"] = optics_second30fecs;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optics" || name == "optics-second30fecs")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fecs()
{

    yang_name = "optics-second30fecs"; yang_parent_name = "optics-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::~OpticsSecond30Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec.size(); index++)
    {
        if(optics_second30fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec.size(); index++)
    {
        if(optics_second30fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fec")
    {
        for(auto const & c : optics_second30fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec>();
        c->parent = this;
        optics_second30fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::OpticsSecond30Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "optics-second30fec"; yang_parent_name = "optics-second30fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::~OpticsSecond30Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_children() const
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::Q()
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

    yang_name = "q"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optics()
{

    yang_name = "optics-second30-optics"; yang_parent_name = "optics-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::~OpticsSecond30Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optic.size(); index++)
    {
        if(optics_second30_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optic.size(); index++)
    {
        if(optics_second30_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optic")
    {
        for(auto const & c : optics_second30_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic>();
        c->parent = this;
        optics_second30_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30_optic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::OpticsSecond30Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>())
{
    cd->parent = this;
    center_wavelength->parent = this;
    dgd->parent = this;
    lbc->parent = this;
    lbc_pc->parent = this;
    low_sig_freq_off->parent = this;
    opr->parent = this;
    opt->parent = this;
    osnr->parent = this;
    pcr->parent = this;
    pdl->parent = this;
    pmd->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;

    yang_name = "optics-second30-optic"; yang_parent_name = "optics-second30-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::~OpticsSecond30Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_operation() const
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
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cd" || name == "center-wavelength" || name == "dgd" || name == "lbc" || name == "lbc-pc" || name == "low-sig-freq-off" || name == "opr" || name == "opt" || name == "osnr" || name == "pcr" || name == "pdl" || name == "pmd" || name == "pn" || name == "rx-sig-pow" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "cd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::CenterWavelength()
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

    yang_name = "center-wavelength"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::Dgd()
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

    yang_name = "dgd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "lbc"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::LbcPc()
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

    yang_name = "lbc-pc"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::Opr()
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

    yang_name = "opr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::Opt()
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

    yang_name = "opt"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::Osnr()
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

    yang_name = "osnr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::Pcr()
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

    yang_name = "pcr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::Pdl()
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

    yang_name = "pdl"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::Pmd()
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

    yang_name = "pmd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::Pn()
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

    yang_name = "pn"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::RxSigPow()
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

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::Otu()
    :
    otu_ports(std::make_shared<PerformanceManagement::Otu::OtuPorts>())
{
    otu_ports->parent = this;

    yang_name = "otu"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Otu::~Otu()
{
}

bool PerformanceManagement::Otu::has_data() const
{
    return (otu_ports !=  nullptr && otu_ports->has_data());
}

bool PerformanceManagement::Otu::has_operation() const
{
    return is_set(yfilter)
	|| (otu_ports !=  nullptr && otu_ports->has_operation());
}

std::string PerformanceManagement::Otu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-ports")
    {
        if(otu_ports == nullptr)
        {
            otu_ports = std::make_shared<PerformanceManagement::Otu::OtuPorts>();
        }
        return otu_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_ports != nullptr)
    {
        children["otu-ports"] = otu_ports;
    }

    return children;
}

void PerformanceManagement::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-ports")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPorts()
{

    yang_name = "otu-ports"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Otu::OtuPorts::~OtuPorts()
{
}

bool PerformanceManagement::Otu::OtuPorts::has_data() const
{
    for (std::size_t index=0; index<otu_port.size(); index++)
    {
        if(otu_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::has_operation() const
{
    for (std::size_t index=0; index<otu_port.size(); index++)
    {
        if(otu_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/otu/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Otu::OtuPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-port")
    {
        for(auto const & c : otu_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort>();
        c->parent = this;
        otu_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-port")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuPort()
    :
    name{YType::str, "name"}
    	,
    otu_current(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent>())
{
    otu_current->parent = this;

    yang_name = "otu-port"; yang_parent_name = "otu-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::~OtuPort()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::has_data() const
{
    return name.is_set
	|| (otu_current !=  nullptr && otu_current->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (otu_current !=  nullptr && otu_current->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/otu/otu-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-current")
    {
        if(otu_current == nullptr)
        {
            otu_current = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent>();
        }
        return otu_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_current != nullptr)
    {
        children["otu-current"] = otu_current;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuCurrent()
    :
    otu_hour24(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24>())
	,otu_minute15(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15>())
	,otu_second30(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30>())
{
    otu_hour24->parent = this;
    otu_minute15->parent = this;
    otu_second30->parent = this;

    yang_name = "otu-current"; yang_parent_name = "otu-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::~OtuCurrent()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::has_data() const
{
    return (otu_hour24 !=  nullptr && otu_hour24->has_data())
	|| (otu_minute15 !=  nullptr && otu_minute15->has_data())
	|| (otu_second30 !=  nullptr && otu_second30->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (otu_hour24 !=  nullptr && otu_hour24->has_operation())
	|| (otu_minute15 !=  nullptr && otu_minute15->has_operation())
	|| (otu_second30 !=  nullptr && otu_second30->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24")
    {
        if(otu_hour24 == nullptr)
        {
            otu_hour24 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24>();
        }
        return otu_hour24;
    }

    if(child_yang_name == "otu-minute15")
    {
        if(otu_minute15 == nullptr)
        {
            otu_minute15 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15>();
        }
        return otu_minute15;
    }

    if(child_yang_name == "otu-second30")
    {
        if(otu_second30 == nullptr)
        {
            otu_second30 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30>();
        }
        return otu_second30;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_hour24 != nullptr)
    {
        children["otu-hour24"] = otu_hour24;
    }

    if(otu_minute15 != nullptr)
    {
        children["otu-minute15"] = otu_minute15;
    }

    if(otu_second30 != nullptr)
    {
        children["otu-second30"] = otu_second30;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24" || name == "otu-minute15" || name == "otu-second30")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24()
    :
    otu_hour24fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>())
	,otu_hour24otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>())
	,otu_hour24prbses(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses>())
{
    otu_hour24fecs->parent = this;
    otu_hour24otns->parent = this;
    otu_hour24prbses->parent = this;

    yang_name = "otu-hour24"; yang_parent_name = "otu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::~OtuHour24()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_data() const
{
    return (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_data())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_data())
	|| (otu_hour24prbses !=  nullptr && otu_hour24prbses->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_operation() const
{
    return is_set(yfilter)
	|| (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_operation())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_operation())
	|| (otu_hour24prbses !=  nullptr && otu_hour24prbses->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fecs")
    {
        if(otu_hour24fecs == nullptr)
        {
            otu_hour24fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>();
        }
        return otu_hour24fecs;
    }

    if(child_yang_name == "otu-hour24otns")
    {
        if(otu_hour24otns == nullptr)
        {
            otu_hour24otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>();
        }
        return otu_hour24otns;
    }

    if(child_yang_name == "otu-hour24prbses")
    {
        if(otu_hour24prbses == nullptr)
        {
            otu_hour24prbses = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses>();
        }
        return otu_hour24prbses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_hour24fecs != nullptr)
    {
        children["otu-hour24fecs"] = otu_hour24fecs;
    }

    if(otu_hour24otns != nullptr)
    {
        children["otu-hour24otns"] = otu_hour24otns;
    }

    if(otu_hour24prbses != nullptr)
    {
        children["otu-hour24prbses"] = otu_hour24prbses;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fecs" || name == "otu-hour24otns" || name == "otu-hour24prbses")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fecs()
{

    yang_name = "otu-hour24fecs"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::~OtuHour24Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fec")
    {
        for(auto const & c : otu_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec>();
        c->parent = this;
        otu_hour24fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fec")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::OtuHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "otu-hour24fec"; yang_parent_name = "otu-hour24fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::~OtuHour24Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_children() const
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}


}
}

