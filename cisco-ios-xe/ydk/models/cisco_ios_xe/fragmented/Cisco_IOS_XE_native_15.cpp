
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_15.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::PoliceRatePercent()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police>())
{
    police->parent = this;

    yang_name = "police-rate-percent"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::~PoliceRatePercent()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-rate-percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Police()
    :
    rate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate>())
{
    rate->parent = this;

    yang_name = "police"; yang_parent_name = "police-rate-percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Rate()
    :
    percent(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent>())
{
    percent->parent = this;

    yang_name = "rate"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::~Rate()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::has_data() const
{
    return (percent !=  nullptr && percent->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Percent()
    :
    percentage{YType::uint8, "percentage"},
    burst{YType::uint16, "burst"},
    ms{YType::empty, "ms"},
    peak_burst{YType::uint16, "peak-burst"}
    	,
    peak_rate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate>())
	,peak_burst_ms(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs>())
	,actions(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions>())
{
    peak_rate->parent = this;
    peak_burst_ms->parent = this;
    actions->parent = this;

    yang_name = "percent"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::~Percent()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::has_data() const
{
    return percentage.is_set
	|| burst.is_set
	|| ms.is_set
	|| peak_burst.is_set
	|| (peak_rate !=  nullptr && peak_rate->has_data())
	|| (peak_burst_ms !=  nullptr && peak_burst_ms->has_data())
	|| (actions !=  nullptr && actions->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(peak_burst.yfilter)
	|| (peak_rate !=  nullptr && peak_rate->has_operation())
	|| (peak_burst_ms !=  nullptr && peak_burst_ms->has_operation())
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (peak_burst.is_set || is_set(peak_burst.yfilter)) leaf_name_data.push_back(peak_burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate>();
        }
        return peak_rate;
    }

    if(child_yang_name == "peak-burst-ms")
    {
        if(peak_burst_ms == nullptr)
        {
            peak_burst_ms = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs>();
        }
        return peak_burst_ms;
    }

    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    if(peak_burst_ms != nullptr)
    {
        children["peak-burst-ms"] = peak_burst_ms;
    }

    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-burst")
    {
        peak_burst = value;
        peak_burst.value_namespace = name_space;
        peak_burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "peak-burst")
    {
        peak_burst.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peak-rate" || name == "peak-burst-ms" || name == "actions" || name == "percentage" || name == "burst" || name == "ms" || name == "peak-burst")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::PeakRate()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "peak-rate"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::~PeakRate()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_data() const
{
    return percent.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::PeakBurstMs()
    :
    ms{YType::empty, "ms"}
{

    yang_name = "peak-burst-ms"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::~PeakBurstMs()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_data() const
{
    return ms.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-burst-ms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::Actions()
    :
    conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit>())
	,conform_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop>())
{
    conform_set_clp_transmit->parent = this;
    conform_set_cos_transmit->parent = this;
    conform_set_cos_transmit_table->parent = this;
    conform_set_discard_class_transmit->parent = this;
    conform_set_dscp_transmit->parent = this;
    conform_set_dscp_transmit_table->parent = this;
    conform_set_frde_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit_table->parent = this;
    conform_set_mpls_exp_topmost_transmit->parent = this;
    conform_set_mpls_exp_topmost_transmit_table->parent = this;
    conform_set_prec_transmit->parent = this;
    conform_set_prec_transmit_table->parent = this;
    conform_set_qos_transmit->parent = this;
    conform_set_qos_transmit_table->parent = this;
    conform_transmit->parent = this;
    conform_drop->parent = this;
    exceed_dscp->parent = this;
    exceed_set_clp_transmit->parent = this;
    exceed_set_cos_transmit->parent = this;
    exceed_set_discard_class_transmit->parent = this;
    exceed_set_dscp_transmit->parent = this;
    exceed_set_dscp_transmit_table->parent = this;
    exceed_set_frde_transmit->parent = this;
    exceed_set_mpls_exp_imposition_transmit->parent = this;
    exceed_set_mpls_exp_topmost_transmit->parent = this;
    exceed_set_prec_transmit->parent = this;
    exceed_set_qos_transmit->parent = this;
    exceed_transmit->parent = this;
    exceed_drop->parent = this;
    violate_set_clp_transmit->parent = this;
    violate_set_cos_transmit->parent = this;
    violate_set_discard_class_transmit->parent = this;
    violate_set_dscp_transmit->parent = this;
    violate_set_frde_transmit->parent = this;
    violate_set_mpls_exp_imposition_transmit->parent = this;
    violate_set_mpls_exp_topmost_transmit->parent = this;
    violate_set_prec_transmit->parent = this;
    violate_set_qos_transmit->parent = this;
    violate_transmit->parent = this;
    violate_drop->parent = this;

    yang_name = "actions"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::has_data() const
{
    return (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (conform_drop !=  nullptr && conform_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-set-clp-transmit" || name == "conform-set-cos-transmit" || name == "conform-set-cos-transmit-table" || name == "conform-set-discard-class-transmit" || name == "conform-set-dscp-transmit" || name == "conform-set-dscp-transmit-table" || name == "conform-set-frde-transmit" || name == "conform-set-mpls-exp-imposition-transmit" || name == "conform-set-mpls-exp-imposition-transmit-table" || name == "conform-set-mpls-exp-topmost-transmit" || name == "conform-set-mpls-exp-topmost-transmit-table" || name == "conform-set-prec-transmit" || name == "conform-set-prec-transmit-table" || name == "conform-set-qos-transmit" || name == "conform-set-qos-transmit-table" || name == "conform-transmit" || name == "conform-drop" || name == "exceed-dscp" || name == "exceed-set-clp-transmit" || name == "exceed-set-cos-transmit" || name == "exceed-set-discard-class-transmit" || name == "exceed-set-dscp-transmit" || name == "exceed-set-dscp-transmit-table" || name == "exceed-set-frde-transmit" || name == "exceed-set-mpls-exp-imposition-transmit" || name == "exceed-set-mpls-exp-topmost-transmit" || name == "exceed-set-prec-transmit" || name == "exceed-set-qos-transmit" || name == "exceed-transmit" || name == "exceed-drop" || name == "violate-set-clp-transmit" || name == "violate-set-cos-transmit" || name == "violate-set-discard-class-transmit" || name == "violate-set-dscp-transmit" || name == "violate-set-frde-transmit" || name == "violate-set-mpls-exp-imposition-transmit" || name == "violate-set-mpls-exp-topmost-transmit" || name == "violate-set-prec-transmit" || name == "violate-set-qos-transmit" || name == "violate-transmit" || name == "violate-drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetClpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetCosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDiscardClassTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetDscpTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetFrdeTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{

    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::PoliceRatePdp()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police>())
{
    police->parent = this;

    yang_name = "police-rate-pdp"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::~PoliceRatePdp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-rate-pdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Police()
    :
    rate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate>())
{
    rate->parent = this;

    yang_name = "police"; yang_parent_name = "police-rate-pdp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Rate()
    :
    pdp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp>())
{
    pdp->parent = this;

    yang_name = "rate"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::~Rate()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::has_data() const
{
    return (pdp !=  nullptr && pdp->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (pdp !=  nullptr && pdp->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pdp")
    {
        if(pdp == nullptr)
        {
            pdp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp>();
        }
        return pdp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pdp != nullptr)
    {
        children["pdp"] = pdp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Pdp()
    :
    burst{YType::uint32, "burst"},
    peak_rate{YType::enumeration, "peak-rate"},
    peak_burst{YType::uint32, "peak-burst"}
    	,
    actions(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions>())
{
    actions->parent = this;

    yang_name = "pdp"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::~Pdp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::has_data() const
{
    return burst.is_set
	|| peak_rate.is_set
	|| peak_burst.is_set
	|| (actions !=  nullptr && actions->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter)
	|| ydk::is_set(peak_burst.yfilter)
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());
    if (peak_burst.is_set || is_set(peak_burst.yfilter)) leaf_name_data.push_back(peak_burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-burst")
    {
        peak_burst = value;
        peak_burst.value_namespace = name_space;
        peak_burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
    if(value_path == "peak-burst")
    {
        peak_burst.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actions" || name == "burst" || name == "peak-rate" || name == "peak-burst")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::Actions()
    :
    conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit>())
	,conform_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop>())
{
    conform_set_clp_transmit->parent = this;
    conform_set_cos_transmit->parent = this;
    conform_set_cos_transmit_table->parent = this;
    conform_set_discard_class_transmit->parent = this;
    conform_set_dscp_transmit->parent = this;
    conform_set_dscp_transmit_table->parent = this;
    conform_set_frde_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit_table->parent = this;
    conform_set_mpls_exp_topmost_transmit->parent = this;
    conform_set_mpls_exp_topmost_transmit_table->parent = this;
    conform_set_prec_transmit->parent = this;
    conform_set_prec_transmit_table->parent = this;
    conform_set_qos_transmit->parent = this;
    conform_set_qos_transmit_table->parent = this;
    conform_transmit->parent = this;
    conform_drop->parent = this;
    exceed_dscp->parent = this;
    exceed_set_clp_transmit->parent = this;
    exceed_set_cos_transmit->parent = this;
    exceed_set_discard_class_transmit->parent = this;
    exceed_set_dscp_transmit->parent = this;
    exceed_set_dscp_transmit_table->parent = this;
    exceed_set_frde_transmit->parent = this;
    exceed_set_mpls_exp_imposition_transmit->parent = this;
    exceed_set_mpls_exp_topmost_transmit->parent = this;
    exceed_set_prec_transmit->parent = this;
    exceed_set_qos_transmit->parent = this;
    exceed_transmit->parent = this;
    exceed_drop->parent = this;
    violate_set_clp_transmit->parent = this;
    violate_set_cos_transmit->parent = this;
    violate_set_discard_class_transmit->parent = this;
    violate_set_dscp_transmit->parent = this;
    violate_set_frde_transmit->parent = this;
    violate_set_mpls_exp_imposition_transmit->parent = this;
    violate_set_mpls_exp_topmost_transmit->parent = this;
    violate_set_prec_transmit->parent = this;
    violate_set_qos_transmit->parent = this;
    violate_transmit->parent = this;
    violate_drop->parent = this;

    yang_name = "actions"; yang_parent_name = "pdp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::has_data() const
{
    return (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (conform_drop !=  nullptr && conform_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-set-clp-transmit" || name == "conform-set-cos-transmit" || name == "conform-set-cos-transmit-table" || name == "conform-set-discard-class-transmit" || name == "conform-set-dscp-transmit" || name == "conform-set-dscp-transmit-table" || name == "conform-set-frde-transmit" || name == "conform-set-mpls-exp-imposition-transmit" || name == "conform-set-mpls-exp-imposition-transmit-table" || name == "conform-set-mpls-exp-topmost-transmit" || name == "conform-set-mpls-exp-topmost-transmit-table" || name == "conform-set-prec-transmit" || name == "conform-set-prec-transmit-table" || name == "conform-set-qos-transmit" || name == "conform-set-qos-transmit-table" || name == "conform-transmit" || name == "conform-drop" || name == "exceed-dscp" || name == "exceed-set-clp-transmit" || name == "exceed-set-cos-transmit" || name == "exceed-set-discard-class-transmit" || name == "exceed-set-dscp-transmit" || name == "exceed-set-dscp-transmit-table" || name == "exceed-set-frde-transmit" || name == "exceed-set-mpls-exp-imposition-transmit" || name == "exceed-set-mpls-exp-topmost-transmit" || name == "exceed-set-prec-transmit" || name == "exceed-set-qos-transmit" || name == "exceed-transmit" || name == "exceed-drop" || name == "violate-set-clp-transmit" || name == "violate-set-cos-transmit" || name == "violate-set-discard-class-transmit" || name == "violate-set-dscp-transmit" || name == "violate-set-frde-transmit" || name == "violate-set-mpls-exp-imposition-transmit" || name == "violate-set-mpls-exp-topmost-transmit" || name == "violate-set-prec-transmit" || name == "violate-set-qos-transmit" || name == "violate-transmit" || name == "violate-drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{

    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table::policed_dscp {0, "policed-dscp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::PeakRate::pdp {0, "pdp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table::policed_dscp {0, "policed-dscp"};


}
}

