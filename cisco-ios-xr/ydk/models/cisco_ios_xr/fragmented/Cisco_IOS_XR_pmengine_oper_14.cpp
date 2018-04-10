
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstances()
{

    yang_name = "otu-second30fec-time-line-instances"; yang_parent_name = "otu-second30fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::~OtuSecond30FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.size(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.size(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance>();
        c->parent = this;
        otu_second30fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_second30fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::OtuSecond30FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-second30fec-time-line-instance"; yang_parent_name = "otu-second30fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::~OtuSecond30FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::PreFecBer()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::PostFecBer()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::Q()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::Qmargin()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistories()
{

    yang_name = "otu-second30otn-histories"; yang_parent_name = "otu-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::~OtuSecond30OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn_history.size(); index++)
    {
        if(otu_second30otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_history.size(); index++)
    {
        if(otu_second30otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory>();
        c->parent = this;
        otu_second30otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_second30otn_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_second30otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances>())
{
    otu_second30otn_time_line_instances->parent = this;

    yang_name = "otu-second30otn-history"; yang_parent_name = "otu-second30otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::~OtuSecond30OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instances")
    {
        if(otu_second30otn_time_line_instances == nullptr)
        {
            otu_second30otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances>();
        }
        return otu_second30otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_second30otn_time_line_instances != nullptr)
    {
        children["otu-second30otn-time-line-instances"] = otu_second30otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstances()
{

    yang_name = "otu-second30otn-time-line-instances"; yang_parent_name = "otu-second30otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::~OtuSecond30OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.size(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.size(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance>();
        c->parent = this;
        otu_second30otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_second30otn_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::OtuSecond30OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe>())
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::~OtuSecond30OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15History()
    :
    otu_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories>())
	,otu_minute15prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories>())
	,otu_minute15otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories>())
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-histories")
    {
        if(otu_minute15fec_histories == nullptr)
        {
            otu_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories>();
        }
        return otu_minute15fec_histories;
    }

    if(child_yang_name == "otu-minute15prbs-histories")
    {
        if(otu_minute15prbs_histories == nullptr)
        {
            otu_minute15prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories>();
        }
        return otu_minute15prbs_histories;
    }

    if(child_yang_name == "otu-minute15otn-histories")
    {
        if(otu_minute15otn_histories == nullptr)
        {
            otu_minute15otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories>();
        }
        return otu_minute15otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_minute15fec_histories != nullptr)
    {
        children["otu-minute15fec-histories"] = otu_minute15fec_histories;
    }

    if(otu_minute15prbs_histories != nullptr)
    {
        children["otu-minute15prbs-histories"] = otu_minute15prbs_histories;
    }

    if(otu_minute15otn_histories != nullptr)
    {
        children["otu-minute15otn-histories"] = otu_minute15otn_histories;
    }

    return children;
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistories()
{

    yang_name = "otu-minute15fec-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::~OtuMinute15FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec_history.size(); index++)
    {
        if(otu_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_history.size(); index++)
    {
        if(otu_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory>();
        c->parent = this;
        otu_minute15fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15fec_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances>())
{
    otu_minute15fec_time_line_instances->parent = this;

    yang_name = "otu-minute15fec-history"; yang_parent_name = "otu-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::~OtuMinute15FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instances")
    {
        if(otu_minute15fec_time_line_instances == nullptr)
        {
            otu_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances>();
        }
        return otu_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_minute15fec_time_line_instances != nullptr)
    {
        children["otu-minute15fec-time-line-instances"] = otu_minute15fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstances()
{

    yang_name = "otu-minute15fec-time-line-instances"; yang_parent_name = "otu-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::~OtuMinute15FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.size(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.size(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance>();
        c->parent = this;
        otu_minute15fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::OtuMinute15FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-minute15fec-time-line-instance"; yang_parent_name = "otu-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::~OtuMinute15FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::PreFecBer()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::PostFecBer()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::Q()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::Qmargin()
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistories()
{

    yang_name = "otu-minute15prbs-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::~OtuMinute15PrbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs_history.size(); index++)
    {
        if(otu_minute15prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_history.size(); index++)
    {
        if(otu_minute15prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory>();
        c->parent = this;
        otu_minute15prbs_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15prbs_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances>())
{
    otu_minute15prbs_time_line_instances->parent = this;

    yang_name = "otu-minute15prbs-history"; yang_parent_name = "otu-minute15prbs-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::~OtuMinute15PrbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instances")
    {
        if(otu_minute15prbs_time_line_instances == nullptr)
        {
            otu_minute15prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances>();
        }
        return otu_minute15prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_minute15prbs_time_line_instances != nullptr)
    {
        children["otu-minute15prbs-time-line-instances"] = otu_minute15prbs_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstances()
{

    yang_name = "otu-minute15prbs-time-line-instances"; yang_parent_name = "otu-minute15prbs-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::~OtuMinute15PrbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.size(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.size(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance>();
        c->parent = this;
        otu_minute15prbs_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15prbs_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::OtuMinute15PrbsTimeLineInstance()
    :
    number{YType::int32, "number"},
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
    rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt>())
	,prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "otu-minute15prbs-time-line-instance"; yang_parent_name = "otu-minute15prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::~OtuMinute15PrbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_data() const
{
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_data() const
{
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistories()
{

    yang_name = "otu-minute15otn-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::~OtuMinute15OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn_history.size(); index++)
    {
        if(otu_minute15otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_history.size(); index++)
    {
        if(otu_minute15otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory>();
        c->parent = this;
        otu_minute15otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15otn_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances>())
{
    otu_minute15otn_time_line_instances->parent = this;

    yang_name = "otu-minute15otn-history"; yang_parent_name = "otu-minute15otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::~OtuMinute15OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instances")
    {
        if(otu_minute15otn_time_line_instances == nullptr)
        {
            otu_minute15otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances>();
        }
        return otu_minute15otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_minute15otn_time_line_instances != nullptr)
    {
        children["otu-minute15otn-time-line-instances"] = otu_minute15otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstances()
{

    yang_name = "otu-minute15otn-time-line-instances"; yang_parent_name = "otu-minute15otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::~OtuMinute15OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.size(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.size(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance>();
        c->parent = this;
        otu_minute15otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_minute15otn_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::OtuMinute15OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe>())
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

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::~OtuMinute15OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24History()
    :
    otu_hour24prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories>())
	,otu_hour24otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories>())
	,otu_hour24fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories>())
{
    otu_hour24prbs_histories->parent = this;
    otu_hour24otn_histories->parent = this;
    otu_hour24fec_histories->parent = this;

    yang_name = "otu-hour24-history"; yang_parent_name = "otu-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::~OtuHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::has_data() const
{
    return (otu_hour24prbs_histories !=  nullptr && otu_hour24prbs_histories->has_data())
	|| (otu_hour24otn_histories !=  nullptr && otu_hour24otn_histories->has_data())
	|| (otu_hour24fec_histories !=  nullptr && otu_hour24fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (otu_hour24prbs_histories !=  nullptr && otu_hour24prbs_histories->has_operation())
	|| (otu_hour24otn_histories !=  nullptr && otu_hour24otn_histories->has_operation())
	|| (otu_hour24fec_histories !=  nullptr && otu_hour24fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-histories")
    {
        if(otu_hour24prbs_histories == nullptr)
        {
            otu_hour24prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories>();
        }
        return otu_hour24prbs_histories;
    }

    if(child_yang_name == "otu-hour24otn-histories")
    {
        if(otu_hour24otn_histories == nullptr)
        {
            otu_hour24otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories>();
        }
        return otu_hour24otn_histories;
    }

    if(child_yang_name == "otu-hour24fec-histories")
    {
        if(otu_hour24fec_histories == nullptr)
        {
            otu_hour24fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories>();
        }
        return otu_hour24fec_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_hour24prbs_histories != nullptr)
    {
        children["otu-hour24prbs-histories"] = otu_hour24prbs_histories;
    }

    if(otu_hour24otn_histories != nullptr)
    {
        children["otu-hour24otn-histories"] = otu_hour24otn_histories;
    }

    if(otu_hour24fec_histories != nullptr)
    {
        children["otu-hour24fec-histories"] = otu_hour24fec_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-histories" || name == "otu-hour24otn-histories" || name == "otu-hour24fec-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistories()
{

    yang_name = "otu-hour24prbs-histories"; yang_parent_name = "otu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::~OtuHour24PrbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs_history.size(); index++)
    {
        if(otu_hour24prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs_history.size(); index++)
    {
        if(otu_hour24prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory>();
        c->parent = this;
        otu_hour24prbs_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24prbs_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_hour24prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances>())
{
    otu_hour24prbs_time_line_instances->parent = this;

    yang_name = "otu-hour24prbs-history"; yang_parent_name = "otu-hour24prbs-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::~OtuHour24PrbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_data() const
{
    return number.is_set
	|| (otu_hour24prbs_time_line_instances !=  nullptr && otu_hour24prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_hour24prbs_time_line_instances !=  nullptr && otu_hour24prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-time-line-instances")
    {
        if(otu_hour24prbs_time_line_instances == nullptr)
        {
            otu_hour24prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances>();
        }
        return otu_hour24prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_hour24prbs_time_line_instances != nullptr)
    {
        children["otu-hour24prbs-time-line-instances"] = otu_hour24prbs_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstances()
{

    yang_name = "otu-hour24prbs-time-line-instances"; yang_parent_name = "otu-hour24prbs-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::~OtuHour24PrbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs_time_line_instance.size(); index++)
    {
        if(otu_hour24prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs_time_line_instance.size(); index++)
    {
        if(otu_hour24prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance>();
        c->parent = this;
        otu_hour24prbs_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24prbs_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::OtuHour24PrbsTimeLineInstance()
    :
    number{YType::int32, "number"},
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
    rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt>())
	,prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "otu-hour24prbs-time-line-instance"; yang_parent_name = "otu-hour24prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::~OtuHour24PrbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_data() const
{
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_data() const
{
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistories()
{

    yang_name = "otu-hour24otn-histories"; yang_parent_name = "otu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::~OtuHour24OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn_history.size(); index++)
    {
        if(otu_hour24otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn_history.size(); index++)
    {
        if(otu_hour24otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory>();
        c->parent = this;
        otu_hour24otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24otn_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_hour24otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances>())
{
    otu_hour24otn_time_line_instances->parent = this;

    yang_name = "otu-hour24otn-history"; yang_parent_name = "otu-hour24otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::~OtuHour24OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_hour24otn_time_line_instances !=  nullptr && otu_hour24otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_hour24otn_time_line_instances !=  nullptr && otu_hour24otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-time-line-instances")
    {
        if(otu_hour24otn_time_line_instances == nullptr)
        {
            otu_hour24otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances>();
        }
        return otu_hour24otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_hour24otn_time_line_instances != nullptr)
    {
        children["otu-hour24otn-time-line-instances"] = otu_hour24otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstances()
{

    yang_name = "otu-hour24otn-time-line-instances"; yang_parent_name = "otu-hour24otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::~OtuHour24OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn_time_line_instance.size(); index++)
    {
        if(otu_hour24otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn_time_line_instance.size(); index++)
    {
        if(otu_hour24otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance>();
        c->parent = this;
        otu_hour24otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24otn_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::OtuHour24OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe>())
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

    yang_name = "otu-hour24otn-time-line-instance"; yang_parent_name = "otu-hour24otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::~OtuHour24OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistories()
{

    yang_name = "otu-hour24fec-histories"; yang_parent_name = "otu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::~OtuHour24FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::has_data() const
{
    for (std::size_t index=0; index<otu_hour24fec_history.size(); index++)
    {
        if(otu_hour24fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24fec_history.size(); index++)
    {
        if(otu_hour24fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fec-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory>();
        c->parent = this;
        otu_hour24fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24fec_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_hour24fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances>())
{
    otu_hour24fec_time_line_instances->parent = this;

    yang_name = "otu-hour24fec-history"; yang_parent_name = "otu-hour24fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::~OtuHour24FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::has_data() const
{
    return number.is_set
	|| (otu_hour24fec_time_line_instances !=  nullptr && otu_hour24fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_hour24fec_time_line_instances !=  nullptr && otu_hour24fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fec-time-line-instances")
    {
        if(otu_hour24fec_time_line_instances == nullptr)
        {
            otu_hour24fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances>();
        }
        return otu_hour24fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_hour24fec_time_line_instances != nullptr)
    {
        children["otu-hour24fec-time-line-instances"] = otu_hour24fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstances()
{

    yang_name = "otu-hour24fec-time-line-instances"; yang_parent_name = "otu-hour24fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::~OtuHour24FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_hour24fec_time_line_instance.size(); index++)
    {
        if(otu_hour24fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24fec_time_line_instance.size(); index++)
    {
        if(otu_hour24fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fec-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance>();
        c->parent = this;
        otu_hour24fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_hour24fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::OtuHour24FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-hour24fec-time-line-instance"; yang_parent_name = "otu-hour24fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::~OtuHour24FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::Q()
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

    yang_name = "q"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcHistory()
    :
    ho_vc_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories>())
{
    ho_vc_port_histories->parent = this;

    yang_name = "ho-vc-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::~HoVcHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_data() const
{
    return (ho_vc_port_histories !=  nullptr && ho_vc_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_port_histories !=  nullptr && ho_vc_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-port-histories")
    {
        if(ho_vc_port_histories == nullptr)
        {
            ho_vc_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories>();
        }
        return ho_vc_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_port_histories != nullptr)
    {
        children["ho-vc-port-histories"] = ho_vc_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistories()
{

    yang_name = "ho-vc-port-histories"; yang_parent_name = "ho-vc-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::~HoVcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_data() const
{
    for (std::size_t index=0; index<ho_vc_port_history.size(); index++)
    {
        if(ho_vc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_port_history.size(); index++)
    {
        if(ho_vc_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ho-vc-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-port-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory>();
        c->parent = this;
        ho_vc_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ho_vc_port_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcPortHistory()
    :
    name{YType::str, "name"}
    	,
    ho_vc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History>())
	,ho_vc_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History>())
{
    ho_vc_minute15_history->parent = this;
    ho_vc_hour24_history->parent = this;

    yang_name = "ho-vc-port-history"; yang_parent_name = "ho-vc-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::~HoVcPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_data() const
{
    return name.is_set
	|| (ho_vc_minute15_history !=  nullptr && ho_vc_minute15_history->has_data())
	|| (ho_vc_hour24_history !=  nullptr && ho_vc_hour24_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ho_vc_minute15_history !=  nullptr && ho_vc_minute15_history->has_operation())
	|| (ho_vc_hour24_history !=  nullptr && ho_vc_hour24_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ho-vc-history/ho-vc-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-history")
    {
        if(ho_vc_minute15_history == nullptr)
        {
            ho_vc_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History>();
        }
        return ho_vc_minute15_history;
    }

    if(child_yang_name == "ho-vc-hour24-history")
    {
        if(ho_vc_hour24_history == nullptr)
        {
            ho_vc_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History>();
        }
        return ho_vc_hour24_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_minute15_history != nullptr)
    {
        children["ho-vc-minute15-history"] = ho_vc_minute15_history;
    }

    if(ho_vc_hour24_history != nullptr)
    {
        children["ho-vc-hour24-history"] = ho_vc_hour24_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-history" || name == "ho-vc-hour24-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15History()
    :
    ho_vc_minute15_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories>())
{
    ho_vc_minute15_path_histories->parent = this;

    yang_name = "ho-vc-minute15-history"; yang_parent_name = "ho-vc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::~HoVcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_data() const
{
    return (ho_vc_minute15_path_histories !=  nullptr && ho_vc_minute15_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15_path_histories !=  nullptr && ho_vc_minute15_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path-histories")
    {
        if(ho_vc_minute15_path_histories == nullptr)
        {
            ho_vc_minute15_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories>();
        }
        return ho_vc_minute15_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_minute15_path_histories != nullptr)
    {
        children["ho-vc-minute15-path-histories"] = ho_vc_minute15_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistories()
{

    yang_name = "ho-vc-minute15-path-histories"; yang_parent_name = "ho-vc-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::~HoVcMinute15PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path_history.size(); index++)
    {
        if(ho_vc_minute15_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path_history.size(); index++)
    {
        if(ho_vc_minute15_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory>();
        c->parent = this;
        ho_vc_minute15_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ho_vc_minute15_path_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathHistory()
    :
    number{YType::int32, "number"}
    	,
    ho_vc_minute15_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances>())
{
    ho_vc_minute15_path_time_line_instances->parent = this;

    yang_name = "ho-vc-minute15-path-history"; yang_parent_name = "ho-vc-minute15-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::~HoVcMinute15PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::has_data() const
{
    return number.is_set
	|| (ho_vc_minute15_path_time_line_instances !=  nullptr && ho_vc_minute15_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (ho_vc_minute15_path_time_line_instances !=  nullptr && ho_vc_minute15_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path-time-line-instances")
    {
        if(ho_vc_minute15_path_time_line_instances == nullptr)
        {
            ho_vc_minute15_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances>();
        }
        return ho_vc_minute15_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_minute15_path_time_line_instances != nullptr)
    {
        children["ho-vc-minute15-path-time-line-instances"] = ho_vc_minute15_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstances()
{

    yang_name = "ho-vc-minute15-path-time-line-instances"; yang_parent_name = "ho-vc-minute15-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::~HoVcMinute15PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path_time_line_instance.size(); index++)
    {
        if(ho_vc_minute15_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path_time_line_instance.size(); index++)
    {
        if(ho_vc_minute15_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance>();
        c->parent = this;
        ho_vc_minute15_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ho_vc_minute15_path_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::HoVcMinute15PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path>())
	,fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "ho-vc-minute15-path-time-line-instance"; yang_parent_name = "ho-vc-minute15-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::~HoVcMinute15PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs>())
	,path_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs>())
	,path_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs>())
{
    path_e_ss->parent = this;
    path_es_rs->parent = this;
    path_se_ss->parent = this;
    path_ses_rs->parent = this;
    path_e_bs->parent = this;
    path_ua_ss->parent = this;
    path_bb_es->parent = this;
    path_bbe_rs->parent = this;

    yang_name = "path"; yang_parent_name = "ho-vc-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data())
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation())
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs == nullptr)
        {
            path_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs>();
        }
        return path_es_rs;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs == nullptr)
        {
            path_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs>();
        }
        return path_ses_rs;
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs == nullptr)
        {
            path_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs>();
        }
        return path_e_bs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es == nullptr)
        {
            path_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs>();
        }
        return path_bb_es;
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs == nullptr)
        {
            path_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs>();
        }
        return path_bbe_rs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(path_e_bs != nullptr)
    {
        children["path-e-bs"] = path_e_bs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    if(path_bb_es != nullptr)
    {
        children["path-bb-es"] = path_bb_es;
    }

    if(path_bbe_rs != nullptr)
    {
        children["path-bbe-rs"] = path_bbe_rs;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-es-rs" || name == "path-se-ss" || name == "path-ses-rs" || name == "path-e-bs" || name == "path-ua-ss" || name == "path-bb-es" || name == "path-bbe-rs" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-es-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ses-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-bs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-bb-es"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-bbe-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "ho-vc-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24History()
    :
    ho_vc_hour24_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories>())
{
    ho_vc_hour24_path_histories->parent = this;

    yang_name = "ho-vc-hour24-history"; yang_parent_name = "ho-vc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::~HoVcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_data() const
{
    return (ho_vc_hour24_path_histories !=  nullptr && ho_vc_hour24_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24_path_histories !=  nullptr && ho_vc_hour24_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-histories")
    {
        if(ho_vc_hour24_path_histories == nullptr)
        {
            ho_vc_hour24_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories>();
        }
        return ho_vc_hour24_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_hour24_path_histories != nullptr)
    {
        children["ho-vc-hour24-path-histories"] = ho_vc_hour24_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistories()
{

    yang_name = "ho-vc-hour24-path-histories"; yang_parent_name = "ho-vc-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::~HoVcHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_history.size(); index++)
    {
        if(ho_vc_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_history.size(); index++)
    {
        if(ho_vc_hour24_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory>();
        c->parent = this;
        ho_vc_hour24_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ho_vc_hour24_path_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathHistory()
    :
    number{YType::int32, "number"}
    	,
    ho_vc_hour24_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances>())
{
    ho_vc_hour24_path_time_line_instances->parent = this;

    yang_name = "ho-vc-hour24-path-history"; yang_parent_name = "ho-vc-hour24-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::~HoVcHour24PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_data() const
{
    return number.is_set
	|| (ho_vc_hour24_path_time_line_instances !=  nullptr && ho_vc_hour24_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (ho_vc_hour24_path_time_line_instances !=  nullptr && ho_vc_hour24_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-time-line-instances")
    {
        if(ho_vc_hour24_path_time_line_instances == nullptr)
        {
            ho_vc_hour24_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances>();
        }
        return ho_vc_hour24_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_hour24_path_time_line_instances != nullptr)
    {
        children["ho-vc-hour24-path-time-line-instances"] = ho_vc_hour24_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstances()
{

    yang_name = "ho-vc-hour24-path-time-line-instances"; yang_parent_name = "ho-vc-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::~HoVcHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_time_line_instance.size(); index++)
    {
        if(ho_vc_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_time_line_instance.size(); index++)
    {
        if(ho_vc_hour24_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance>();
        c->parent = this;
        ho_vc_hour24_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ho_vc_hour24_path_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::HoVcHour24PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path>())
	,fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "ho-vc-hour24-path-time-line-instance"; yang_parent_name = "ho-vc-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::~HoVcHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs>())
	,path_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs>())
	,path_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs>())
{
    path_e_ss->parent = this;
    path_es_rs->parent = this;
    path_se_ss->parent = this;
    path_ses_rs->parent = this;
    path_e_bs->parent = this;
    path_ua_ss->parent = this;
    path_bb_es->parent = this;
    path_bbe_rs->parent = this;

    yang_name = "path"; yang_parent_name = "ho-vc-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data())
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation())
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs == nullptr)
        {
            path_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs>();
        }
        return path_es_rs;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs == nullptr)
        {
            path_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs>();
        }
        return path_ses_rs;
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs == nullptr)
        {
            path_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs>();
        }
        return path_e_bs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es == nullptr)
        {
            path_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs>();
        }
        return path_bb_es;
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs == nullptr)
        {
            path_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs>();
        }
        return path_bbe_rs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(path_e_bs != nullptr)
    {
        children["path-e-bs"] = path_e_bs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    if(path_bb_es != nullptr)
    {
        children["path-bb-es"] = path_bb_es;
    }

    if(path_bbe_rs != nullptr)
    {
        children["path-bbe-rs"] = path_bbe_rs;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-es-rs" || name == "path-se-ss" || name == "path-ses-rs" || name == "path-e-bs" || name == "path-ua-ss" || name == "path-bb-es" || name == "path-bbe-rs" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-es-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ses-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-bs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-bb-es"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-bbe-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "ho-vc-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsHistory()
    :
    optics_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories>())
{
    optics_port_histories->parent = this;

    yang_name = "optics-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::~OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::has_data() const
{
    return (optics_port_histories !=  nullptr && optics_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::has_operation() const
{
    return is_set(yfilter)
	|| (optics_port_histories !=  nullptr && optics_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-port-histories")
    {
        if(optics_port_histories == nullptr)
        {
            optics_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories>();
        }
        return optics_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_port_histories != nullptr)
    {
        children["optics-port-histories"] = optics_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistories()
{

    yang_name = "optics-port-histories"; yang_parent_name = "optics-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::~OpticsPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::has_data() const
{
    for (std::size_t index=0; index<optics_port_history.size(); index++)
    {
        if(optics_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_port_history.size(); index++)
    {
        if(optics_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/optics-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-port-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory>();
        c->parent = this;
        optics_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_port_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsPortHistory()
    :
    name{YType::str, "name"}
    	,
    optics_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History>())
	,optics_second30_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History>())
	,optics_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History>())
{
    optics_hour24_history->parent = this;
    optics_second30_history->parent = this;
    optics_minute15_history->parent = this;

    yang_name = "optics-port-history"; yang_parent_name = "optics-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::~OpticsPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::has_data() const
{
    return name.is_set
	|| (optics_hour24_history !=  nullptr && optics_hour24_history->has_data())
	|| (optics_second30_history !=  nullptr && optics_second30_history->has_data())
	|| (optics_minute15_history !=  nullptr && optics_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (optics_hour24_history !=  nullptr && optics_hour24_history->has_operation())
	|| (optics_second30_history !=  nullptr && optics_second30_history->has_operation())
	|| (optics_minute15_history !=  nullptr && optics_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/optics-history/optics-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-history")
    {
        if(optics_hour24_history == nullptr)
        {
            optics_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History>();
        }
        return optics_hour24_history;
    }

    if(child_yang_name == "optics-second30-history")
    {
        if(optics_second30_history == nullptr)
        {
            optics_second30_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History>();
        }
        return optics_second30_history;
    }

    if(child_yang_name == "optics-minute15-history")
    {
        if(optics_minute15_history == nullptr)
        {
            optics_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History>();
        }
        return optics_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_hour24_history != nullptr)
    {
        children["optics-hour24-history"] = optics_hour24_history;
    }

    if(optics_second30_history != nullptr)
    {
        children["optics-second30-history"] = optics_second30_history;
    }

    if(optics_minute15_history != nullptr)
    {
        children["optics-minute15-history"] = optics_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-history" || name == "optics-second30-history" || name == "optics-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24History()
    :
    optics_hour24_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories>())
	,optics_hour24fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories>())
{
    optics_hour24_optics_histories->parent = this;
    optics_hour24fec_histories->parent = this;

    yang_name = "optics-hour24-history"; yang_parent_name = "optics-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::~OpticsHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::has_data() const
{
    return (optics_hour24_optics_histories !=  nullptr && optics_hour24_optics_histories->has_data())
	|| (optics_hour24fec_histories !=  nullptr && optics_hour24fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (optics_hour24_optics_histories !=  nullptr && optics_hour24_optics_histories->has_operation())
	|| (optics_hour24fec_histories !=  nullptr && optics_hour24fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics-histories")
    {
        if(optics_hour24_optics_histories == nullptr)
        {
            optics_hour24_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories>();
        }
        return optics_hour24_optics_histories;
    }

    if(child_yang_name == "optics-hour24fec-histories")
    {
        if(optics_hour24fec_histories == nullptr)
        {
            optics_hour24fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories>();
        }
        return optics_hour24fec_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_hour24_optics_histories != nullptr)
    {
        children["optics-hour24-optics-histories"] = optics_hour24_optics_histories;
    }

    if(optics_hour24fec_histories != nullptr)
    {
        children["optics-hour24fec-histories"] = optics_hour24fec_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics-histories" || name == "optics-hour24fec-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistories()
{

    yang_name = "optics-hour24-optics-histories"; yang_parent_name = "optics-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::~OpticsHour24OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optics_history.size(); index++)
    {
        if(optics_hour24_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optics_history.size(); index++)
    {
        if(optics_hour24_optics_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory>();
        c->parent = this;
        optics_hour24_optics_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_hour24_optics_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_hour24_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances>())
{
    optics_hour24_optics_time_line_instances->parent = this;

    yang_name = "optics-hour24-optics-history"; yang_parent_name = "optics-hour24-optics-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::~OpticsHour24OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_hour24_optics_time_line_instances !=  nullptr && optics_hour24_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_hour24_optics_time_line_instances !=  nullptr && optics_hour24_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics-time-line-instances")
    {
        if(optics_hour24_optics_time_line_instances == nullptr)
        {
            optics_hour24_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances>();
        }
        return optics_hour24_optics_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_hour24_optics_time_line_instances != nullptr)
    {
        children["optics-hour24-optics-time-line-instances"] = optics_hour24_optics_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstances()
{

    yang_name = "optics-hour24-optics-time-line-instances"; yang_parent_name = "optics-hour24-optics-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::~OpticsHour24OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optics_time_line_instance.size(); index++)
    {
        if(optics_hour24_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optics_time_line_instance.size(); index++)
    {
        if(optics_hour24_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance>();
        c->parent = this;
        optics_hour24_optics_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_hour24_optics_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::OpticsHour24OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr>())
	,cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff>())
	,ampli_gain(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::AmpliGain>())
	,ampli_gain_tilt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::AmpliGainTilt>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;
    ampli_gain->parent = this;
    ampli_gain_tilt->parent = this;

    yang_name = "optics-hour24-optics-time-line-instance"; yang_parent_name = "optics-hour24-optics-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::~OpticsHour24OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::has_data() const
{
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (ampli_gain !=  nullptr && ampli_gain->has_data())
	|| (ampli_gain_tilt !=  nullptr && ampli_gain_tilt->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::has_operation() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (ampli_gain !=  nullptr && ampli_gain->has_operation())
	|| (ampli_gain_tilt !=  nullptr && ampli_gain_tilt->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    if(child_yang_name == "ampli-gain")
    {
        if(ampli_gain == nullptr)
        {
            ampli_gain = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::AmpliGain>();
        }
        return ampli_gain;
    }

    if(child_yang_name == "ampli-gain-tilt")
    {
        if(ampli_gain_tilt == nullptr)
        {
            ampli_gain_tilt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::AmpliGainTilt>();
        }
        return ampli_gain_tilt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    if(ampli_gain != nullptr)
    {
        children["ampli-gain"] = ampli_gain;
    }

    if(ampli_gain_tilt != nullptr)
    {
        children["ampli-gain-tilt"] = ampli_gain_tilt;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "ampli-gain" || name == "ampli-gain-tilt" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-hour24-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-hour24-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-hour24-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-hour24-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
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
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}


}
}

