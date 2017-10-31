
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DS3_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DS3_MIB {

DS3MIB::DS3MIB()
    :
    dsx3configtable(std::make_shared<DS3MIB::Dsx3Configtable>())
	,dsx3currenttable(std::make_shared<DS3MIB::Dsx3Currenttable>())
	,dsx3intervaltable(std::make_shared<DS3MIB::Dsx3Intervaltable>())
	,dsx3totaltable(std::make_shared<DS3MIB::Dsx3Totaltable>())
	,dsx3farendconfigtable(std::make_shared<DS3MIB::Dsx3Farendconfigtable>())
	,dsx3farendcurrenttable(std::make_shared<DS3MIB::Dsx3Farendcurrenttable>())
	,dsx3farendintervaltable(std::make_shared<DS3MIB::Dsx3Farendintervaltable>())
	,dsx3farendtotaltable(std::make_shared<DS3MIB::Dsx3Farendtotaltable>())
	,dsx3fractable(std::make_shared<DS3MIB::Dsx3Fractable>())
{
    dsx3configtable->parent = this;
    dsx3currenttable->parent = this;
    dsx3intervaltable->parent = this;
    dsx3totaltable->parent = this;
    dsx3farendconfigtable->parent = this;
    dsx3farendcurrenttable->parent = this;
    dsx3farendintervaltable->parent = this;
    dsx3farendtotaltable->parent = this;
    dsx3fractable->parent = this;

    yang_name = "DS3-MIB"; yang_parent_name = "DS3-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

DS3MIB::~DS3MIB()
{
}

bool DS3MIB::has_data() const
{
    return (dsx3configtable !=  nullptr && dsx3configtable->has_data())
	|| (dsx3currenttable !=  nullptr && dsx3currenttable->has_data())
	|| (dsx3intervaltable !=  nullptr && dsx3intervaltable->has_data())
	|| (dsx3totaltable !=  nullptr && dsx3totaltable->has_data())
	|| (dsx3farendconfigtable !=  nullptr && dsx3farendconfigtable->has_data())
	|| (dsx3farendcurrenttable !=  nullptr && dsx3farendcurrenttable->has_data())
	|| (dsx3farendintervaltable !=  nullptr && dsx3farendintervaltable->has_data())
	|| (dsx3farendtotaltable !=  nullptr && dsx3farendtotaltable->has_data())
	|| (dsx3fractable !=  nullptr && dsx3fractable->has_data());
}

bool DS3MIB::has_operation() const
{
    return is_set(yfilter)
	|| (dsx3configtable !=  nullptr && dsx3configtable->has_operation())
	|| (dsx3currenttable !=  nullptr && dsx3currenttable->has_operation())
	|| (dsx3intervaltable !=  nullptr && dsx3intervaltable->has_operation())
	|| (dsx3totaltable !=  nullptr && dsx3totaltable->has_operation())
	|| (dsx3farendconfigtable !=  nullptr && dsx3farendconfigtable->has_operation())
	|| (dsx3farendcurrenttable !=  nullptr && dsx3farendcurrenttable->has_operation())
	|| (dsx3farendintervaltable !=  nullptr && dsx3farendintervaltable->has_operation())
	|| (dsx3farendtotaltable !=  nullptr && dsx3farendtotaltable->has_operation())
	|| (dsx3fractable !=  nullptr && dsx3fractable->has_operation());
}

std::string DS3MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3ConfigTable")
    {
        if(dsx3configtable == nullptr)
        {
            dsx3configtable = std::make_shared<DS3MIB::Dsx3Configtable>();
        }
        return dsx3configtable;
    }

    if(child_yang_name == "dsx3CurrentTable")
    {
        if(dsx3currenttable == nullptr)
        {
            dsx3currenttable = std::make_shared<DS3MIB::Dsx3Currenttable>();
        }
        return dsx3currenttable;
    }

    if(child_yang_name == "dsx3IntervalTable")
    {
        if(dsx3intervaltable == nullptr)
        {
            dsx3intervaltable = std::make_shared<DS3MIB::Dsx3Intervaltable>();
        }
        return dsx3intervaltable;
    }

    if(child_yang_name == "dsx3TotalTable")
    {
        if(dsx3totaltable == nullptr)
        {
            dsx3totaltable = std::make_shared<DS3MIB::Dsx3Totaltable>();
        }
        return dsx3totaltable;
    }

    if(child_yang_name == "dsx3FarEndConfigTable")
    {
        if(dsx3farendconfigtable == nullptr)
        {
            dsx3farendconfigtable = std::make_shared<DS3MIB::Dsx3Farendconfigtable>();
        }
        return dsx3farendconfigtable;
    }

    if(child_yang_name == "dsx3FarEndCurrentTable")
    {
        if(dsx3farendcurrenttable == nullptr)
        {
            dsx3farendcurrenttable = std::make_shared<DS3MIB::Dsx3Farendcurrenttable>();
        }
        return dsx3farendcurrenttable;
    }

    if(child_yang_name == "dsx3FarEndIntervalTable")
    {
        if(dsx3farendintervaltable == nullptr)
        {
            dsx3farendintervaltable = std::make_shared<DS3MIB::Dsx3Farendintervaltable>();
        }
        return dsx3farendintervaltable;
    }

    if(child_yang_name == "dsx3FarEndTotalTable")
    {
        if(dsx3farendtotaltable == nullptr)
        {
            dsx3farendtotaltable = std::make_shared<DS3MIB::Dsx3Farendtotaltable>();
        }
        return dsx3farendtotaltable;
    }

    if(child_yang_name == "dsx3FracTable")
    {
        if(dsx3fractable == nullptr)
        {
            dsx3fractable = std::make_shared<DS3MIB::Dsx3Fractable>();
        }
        return dsx3fractable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dsx3configtable != nullptr)
    {
        children["dsx3ConfigTable"] = dsx3configtable;
    }

    if(dsx3currenttable != nullptr)
    {
        children["dsx3CurrentTable"] = dsx3currenttable;
    }

    if(dsx3intervaltable != nullptr)
    {
        children["dsx3IntervalTable"] = dsx3intervaltable;
    }

    if(dsx3totaltable != nullptr)
    {
        children["dsx3TotalTable"] = dsx3totaltable;
    }

    if(dsx3farendconfigtable != nullptr)
    {
        children["dsx3FarEndConfigTable"] = dsx3farendconfigtable;
    }

    if(dsx3farendcurrenttable != nullptr)
    {
        children["dsx3FarEndCurrentTable"] = dsx3farendcurrenttable;
    }

    if(dsx3farendintervaltable != nullptr)
    {
        children["dsx3FarEndIntervalTable"] = dsx3farendintervaltable;
    }

    if(dsx3farendtotaltable != nullptr)
    {
        children["dsx3FarEndTotalTable"] = dsx3farendtotaltable;
    }

    if(dsx3fractable != nullptr)
    {
        children["dsx3FracTable"] = dsx3fractable;
    }

    return children;
}

void DS3MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DS3MIB::clone_ptr() const
{
    return std::make_shared<DS3MIB>();
}

std::string DS3MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DS3MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DS3MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DS3MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DS3MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3ConfigTable" || name == "dsx3CurrentTable" || name == "dsx3IntervalTable" || name == "dsx3TotalTable" || name == "dsx3FarEndConfigTable" || name == "dsx3FarEndCurrentTable" || name == "dsx3FarEndIntervalTable" || name == "dsx3FarEndTotalTable" || name == "dsx3FracTable")
        return true;
    return false;
}

DS3MIB::Dsx3Configtable::Dsx3Configtable()
{

    yang_name = "dsx3ConfigTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Configtable::~Dsx3Configtable()
{
}

bool DS3MIB::Dsx3Configtable::has_data() const
{
    for (std::size_t index=0; index<dsx3configentry.size(); index++)
    {
        if(dsx3configentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Configtable::has_operation() const
{
    for (std::size_t index=0; index<dsx3configentry.size(); index++)
    {
        if(dsx3configentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Configtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Configtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3ConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Configtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Configtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3ConfigEntry")
    {
        for(auto const & c : dsx3configentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Configtable::Dsx3Configentry>();
        c->parent = this;
        dsx3configentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Configtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3configentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Configtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Configtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Configtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3ConfigEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Configentry()
    :
    dsx3lineindex{YType::int32, "dsx3LineIndex"},
    dsx3ifindex{YType::int32, "dsx3IfIndex"},
    dsx3timeelapsed{YType::int32, "dsx3TimeElapsed"},
    dsx3validintervals{YType::int32, "dsx3ValidIntervals"},
    dsx3linetype{YType::enumeration, "dsx3LineType"},
    dsx3linecoding{YType::enumeration, "dsx3LineCoding"},
    dsx3sendcode{YType::enumeration, "dsx3SendCode"},
    dsx3circuitidentifier{YType::str, "dsx3CircuitIdentifier"},
    dsx3loopbackconfig{YType::enumeration, "dsx3LoopbackConfig"},
    dsx3linestatus{YType::int32, "dsx3LineStatus"},
    dsx3transmitclocksource{YType::enumeration, "dsx3TransmitClockSource"},
    dsx3invalidintervals{YType::int32, "dsx3InvalidIntervals"},
    dsx3linelength{YType::int32, "dsx3LineLength"},
    dsx3linestatuslastchange{YType::uint32, "dsx3LineStatusLastChange"},
    dsx3linestatuschangetrapenable{YType::enumeration, "dsx3LineStatusChangeTrapEnable"},
    dsx3loopbackstatus{YType::int32, "dsx3LoopbackStatus"},
    dsx3channelization{YType::enumeration, "dsx3Channelization"},
    dsx3ds1forremoteloop{YType::int32, "dsx3Ds1ForRemoteLoop"}
{

    yang_name = "dsx3ConfigEntry"; yang_parent_name = "dsx3ConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Configtable::Dsx3Configentry::~Dsx3Configentry()
{
}

bool DS3MIB::Dsx3Configtable::Dsx3Configentry::has_data() const
{
    return dsx3lineindex.is_set
	|| dsx3ifindex.is_set
	|| dsx3timeelapsed.is_set
	|| dsx3validintervals.is_set
	|| dsx3linetype.is_set
	|| dsx3linecoding.is_set
	|| dsx3sendcode.is_set
	|| dsx3circuitidentifier.is_set
	|| dsx3loopbackconfig.is_set
	|| dsx3linestatus.is_set
	|| dsx3transmitclocksource.is_set
	|| dsx3invalidintervals.is_set
	|| dsx3linelength.is_set
	|| dsx3linestatuslastchange.is_set
	|| dsx3linestatuschangetrapenable.is_set
	|| dsx3loopbackstatus.is_set
	|| dsx3channelization.is_set
	|| dsx3ds1forremoteloop.is_set;
}

bool DS3MIB::Dsx3Configtable::Dsx3Configentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3lineindex.yfilter)
	|| ydk::is_set(dsx3ifindex.yfilter)
	|| ydk::is_set(dsx3timeelapsed.yfilter)
	|| ydk::is_set(dsx3validintervals.yfilter)
	|| ydk::is_set(dsx3linetype.yfilter)
	|| ydk::is_set(dsx3linecoding.yfilter)
	|| ydk::is_set(dsx3sendcode.yfilter)
	|| ydk::is_set(dsx3circuitidentifier.yfilter)
	|| ydk::is_set(dsx3loopbackconfig.yfilter)
	|| ydk::is_set(dsx3linestatus.yfilter)
	|| ydk::is_set(dsx3transmitclocksource.yfilter)
	|| ydk::is_set(dsx3invalidintervals.yfilter)
	|| ydk::is_set(dsx3linelength.yfilter)
	|| ydk::is_set(dsx3linestatuslastchange.yfilter)
	|| ydk::is_set(dsx3linestatuschangetrapenable.yfilter)
	|| ydk::is_set(dsx3loopbackstatus.yfilter)
	|| ydk::is_set(dsx3channelization.yfilter)
	|| ydk::is_set(dsx3ds1forremoteloop.yfilter);
}

std::string DS3MIB::Dsx3Configtable::Dsx3Configentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3ConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Configtable::Dsx3Configentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3ConfigEntry" <<"[dsx3LineIndex='" <<dsx3lineindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Configtable::Dsx3Configentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3lineindex.is_set || is_set(dsx3lineindex.yfilter)) leaf_name_data.push_back(dsx3lineindex.get_name_leafdata());
    if (dsx3ifindex.is_set || is_set(dsx3ifindex.yfilter)) leaf_name_data.push_back(dsx3ifindex.get_name_leafdata());
    if (dsx3timeelapsed.is_set || is_set(dsx3timeelapsed.yfilter)) leaf_name_data.push_back(dsx3timeelapsed.get_name_leafdata());
    if (dsx3validintervals.is_set || is_set(dsx3validintervals.yfilter)) leaf_name_data.push_back(dsx3validintervals.get_name_leafdata());
    if (dsx3linetype.is_set || is_set(dsx3linetype.yfilter)) leaf_name_data.push_back(dsx3linetype.get_name_leafdata());
    if (dsx3linecoding.is_set || is_set(dsx3linecoding.yfilter)) leaf_name_data.push_back(dsx3linecoding.get_name_leafdata());
    if (dsx3sendcode.is_set || is_set(dsx3sendcode.yfilter)) leaf_name_data.push_back(dsx3sendcode.get_name_leafdata());
    if (dsx3circuitidentifier.is_set || is_set(dsx3circuitidentifier.yfilter)) leaf_name_data.push_back(dsx3circuitidentifier.get_name_leafdata());
    if (dsx3loopbackconfig.is_set || is_set(dsx3loopbackconfig.yfilter)) leaf_name_data.push_back(dsx3loopbackconfig.get_name_leafdata());
    if (dsx3linestatus.is_set || is_set(dsx3linestatus.yfilter)) leaf_name_data.push_back(dsx3linestatus.get_name_leafdata());
    if (dsx3transmitclocksource.is_set || is_set(dsx3transmitclocksource.yfilter)) leaf_name_data.push_back(dsx3transmitclocksource.get_name_leafdata());
    if (dsx3invalidintervals.is_set || is_set(dsx3invalidintervals.yfilter)) leaf_name_data.push_back(dsx3invalidintervals.get_name_leafdata());
    if (dsx3linelength.is_set || is_set(dsx3linelength.yfilter)) leaf_name_data.push_back(dsx3linelength.get_name_leafdata());
    if (dsx3linestatuslastchange.is_set || is_set(dsx3linestatuslastchange.yfilter)) leaf_name_data.push_back(dsx3linestatuslastchange.get_name_leafdata());
    if (dsx3linestatuschangetrapenable.is_set || is_set(dsx3linestatuschangetrapenable.yfilter)) leaf_name_data.push_back(dsx3linestatuschangetrapenable.get_name_leafdata());
    if (dsx3loopbackstatus.is_set || is_set(dsx3loopbackstatus.yfilter)) leaf_name_data.push_back(dsx3loopbackstatus.get_name_leafdata());
    if (dsx3channelization.is_set || is_set(dsx3channelization.yfilter)) leaf_name_data.push_back(dsx3channelization.get_name_leafdata());
    if (dsx3ds1forremoteloop.is_set || is_set(dsx3ds1forremoteloop.yfilter)) leaf_name_data.push_back(dsx3ds1forremoteloop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Configtable::Dsx3Configentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Configtable::Dsx3Configentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Configtable::Dsx3Configentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3LineIndex")
    {
        dsx3lineindex = value;
        dsx3lineindex.value_namespace = name_space;
        dsx3lineindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IfIndex")
    {
        dsx3ifindex = value;
        dsx3ifindex.value_namespace = name_space;
        dsx3ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TimeElapsed")
    {
        dsx3timeelapsed = value;
        dsx3timeelapsed.value_namespace = name_space;
        dsx3timeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3ValidIntervals")
    {
        dsx3validintervals = value;
        dsx3validintervals.value_namespace = name_space;
        dsx3validintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineType")
    {
        dsx3linetype = value;
        dsx3linetype.value_namespace = name_space;
        dsx3linetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineCoding")
    {
        dsx3linecoding = value;
        dsx3linecoding.value_namespace = name_space;
        dsx3linecoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3SendCode")
    {
        dsx3sendcode = value;
        dsx3sendcode.value_namespace = name_space;
        dsx3sendcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CircuitIdentifier")
    {
        dsx3circuitidentifier = value;
        dsx3circuitidentifier.value_namespace = name_space;
        dsx3circuitidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LoopbackConfig")
    {
        dsx3loopbackconfig = value;
        dsx3loopbackconfig.value_namespace = name_space;
        dsx3loopbackconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineStatus")
    {
        dsx3linestatus = value;
        dsx3linestatus.value_namespace = name_space;
        dsx3linestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TransmitClockSource")
    {
        dsx3transmitclocksource = value;
        dsx3transmitclocksource.value_namespace = name_space;
        dsx3transmitclocksource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3InvalidIntervals")
    {
        dsx3invalidintervals = value;
        dsx3invalidintervals.value_namespace = name_space;
        dsx3invalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineLength")
    {
        dsx3linelength = value;
        dsx3linelength.value_namespace = name_space;
        dsx3linelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineStatusLastChange")
    {
        dsx3linestatuslastchange = value;
        dsx3linestatuslastchange.value_namespace = name_space;
        dsx3linestatuslastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LineStatusChangeTrapEnable")
    {
        dsx3linestatuschangetrapenable = value;
        dsx3linestatuschangetrapenable.value_namespace = name_space;
        dsx3linestatuschangetrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3LoopbackStatus")
    {
        dsx3loopbackstatus = value;
        dsx3loopbackstatus.value_namespace = name_space;
        dsx3loopbackstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3Channelization")
    {
        dsx3channelization = value;
        dsx3channelization.value_namespace = name_space;
        dsx3channelization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3Ds1ForRemoteLoop")
    {
        dsx3ds1forremoteloop = value;
        dsx3ds1forremoteloop.value_namespace = name_space;
        dsx3ds1forremoteloop.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Configtable::Dsx3Configentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3LineIndex")
    {
        dsx3lineindex.yfilter = yfilter;
    }
    if(value_path == "dsx3IfIndex")
    {
        dsx3ifindex.yfilter = yfilter;
    }
    if(value_path == "dsx3TimeElapsed")
    {
        dsx3timeelapsed.yfilter = yfilter;
    }
    if(value_path == "dsx3ValidIntervals")
    {
        dsx3validintervals.yfilter = yfilter;
    }
    if(value_path == "dsx3LineType")
    {
        dsx3linetype.yfilter = yfilter;
    }
    if(value_path == "dsx3LineCoding")
    {
        dsx3linecoding.yfilter = yfilter;
    }
    if(value_path == "dsx3SendCode")
    {
        dsx3sendcode.yfilter = yfilter;
    }
    if(value_path == "dsx3CircuitIdentifier")
    {
        dsx3circuitidentifier.yfilter = yfilter;
    }
    if(value_path == "dsx3LoopbackConfig")
    {
        dsx3loopbackconfig.yfilter = yfilter;
    }
    if(value_path == "dsx3LineStatus")
    {
        dsx3linestatus.yfilter = yfilter;
    }
    if(value_path == "dsx3TransmitClockSource")
    {
        dsx3transmitclocksource.yfilter = yfilter;
    }
    if(value_path == "dsx3InvalidIntervals")
    {
        dsx3invalidintervals.yfilter = yfilter;
    }
    if(value_path == "dsx3LineLength")
    {
        dsx3linelength.yfilter = yfilter;
    }
    if(value_path == "dsx3LineStatusLastChange")
    {
        dsx3linestatuslastchange.yfilter = yfilter;
    }
    if(value_path == "dsx3LineStatusChangeTrapEnable")
    {
        dsx3linestatuschangetrapenable.yfilter = yfilter;
    }
    if(value_path == "dsx3LoopbackStatus")
    {
        dsx3loopbackstatus.yfilter = yfilter;
    }
    if(value_path == "dsx3Channelization")
    {
        dsx3channelization.yfilter = yfilter;
    }
    if(value_path == "dsx3Ds1ForRemoteLoop")
    {
        dsx3ds1forremoteloop.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Configtable::Dsx3Configentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3LineIndex" || name == "dsx3IfIndex" || name == "dsx3TimeElapsed" || name == "dsx3ValidIntervals" || name == "dsx3LineType" || name == "dsx3LineCoding" || name == "dsx3SendCode" || name == "dsx3CircuitIdentifier" || name == "dsx3LoopbackConfig" || name == "dsx3LineStatus" || name == "dsx3TransmitClockSource" || name == "dsx3InvalidIntervals" || name == "dsx3LineLength" || name == "dsx3LineStatusLastChange" || name == "dsx3LineStatusChangeTrapEnable" || name == "dsx3LoopbackStatus" || name == "dsx3Channelization" || name == "dsx3Ds1ForRemoteLoop")
        return true;
    return false;
}

DS3MIB::Dsx3Currenttable::Dsx3Currenttable()
{

    yang_name = "dsx3CurrentTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Currenttable::~Dsx3Currenttable()
{
}

bool DS3MIB::Dsx3Currenttable::has_data() const
{
    for (std::size_t index=0; index<dsx3currententry.size(); index++)
    {
        if(dsx3currententry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Currenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx3currententry.size(); index++)
    {
        if(dsx3currententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Currenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Currenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3CurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Currenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Currenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3CurrentEntry")
    {
        for(auto const & c : dsx3currententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Currenttable::Dsx3Currententry>();
        c->parent = this;
        dsx3currententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Currenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3currententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Currenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Currenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Currenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3CurrentEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Currenttable::Dsx3Currententry::Dsx3Currententry()
    :
    dsx3currentindex{YType::int32, "dsx3CurrentIndex"},
    dsx3currentpess{YType::uint32, "dsx3CurrentPESs"},
    dsx3currentpsess{YType::uint32, "dsx3CurrentPSESs"},
    dsx3currentsefss{YType::uint32, "dsx3CurrentSEFSs"},
    dsx3currentuass{YType::uint32, "dsx3CurrentUASs"},
    dsx3currentlcvs{YType::uint32, "dsx3CurrentLCVs"},
    dsx3currentpcvs{YType::uint32, "dsx3CurrentPCVs"},
    dsx3currentless{YType::uint32, "dsx3CurrentLESs"},
    dsx3currentccvs{YType::uint32, "dsx3CurrentCCVs"},
    dsx3currentcess{YType::uint32, "dsx3CurrentCESs"},
    dsx3currentcsess{YType::uint32, "dsx3CurrentCSESs"}
{

    yang_name = "dsx3CurrentEntry"; yang_parent_name = "dsx3CurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Currenttable::Dsx3Currententry::~Dsx3Currententry()
{
}

bool DS3MIB::Dsx3Currenttable::Dsx3Currententry::has_data() const
{
    return dsx3currentindex.is_set
	|| dsx3currentpess.is_set
	|| dsx3currentpsess.is_set
	|| dsx3currentsefss.is_set
	|| dsx3currentuass.is_set
	|| dsx3currentlcvs.is_set
	|| dsx3currentpcvs.is_set
	|| dsx3currentless.is_set
	|| dsx3currentccvs.is_set
	|| dsx3currentcess.is_set
	|| dsx3currentcsess.is_set;
}

bool DS3MIB::Dsx3Currenttable::Dsx3Currententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3currentindex.yfilter)
	|| ydk::is_set(dsx3currentpess.yfilter)
	|| ydk::is_set(dsx3currentpsess.yfilter)
	|| ydk::is_set(dsx3currentsefss.yfilter)
	|| ydk::is_set(dsx3currentuass.yfilter)
	|| ydk::is_set(dsx3currentlcvs.yfilter)
	|| ydk::is_set(dsx3currentpcvs.yfilter)
	|| ydk::is_set(dsx3currentless.yfilter)
	|| ydk::is_set(dsx3currentccvs.yfilter)
	|| ydk::is_set(dsx3currentcess.yfilter)
	|| ydk::is_set(dsx3currentcsess.yfilter);
}

std::string DS3MIB::Dsx3Currenttable::Dsx3Currententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3CurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Currenttable::Dsx3Currententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3CurrentEntry" <<"[dsx3CurrentIndex='" <<dsx3currentindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Currenttable::Dsx3Currententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3currentindex.is_set || is_set(dsx3currentindex.yfilter)) leaf_name_data.push_back(dsx3currentindex.get_name_leafdata());
    if (dsx3currentpess.is_set || is_set(dsx3currentpess.yfilter)) leaf_name_data.push_back(dsx3currentpess.get_name_leafdata());
    if (dsx3currentpsess.is_set || is_set(dsx3currentpsess.yfilter)) leaf_name_data.push_back(dsx3currentpsess.get_name_leafdata());
    if (dsx3currentsefss.is_set || is_set(dsx3currentsefss.yfilter)) leaf_name_data.push_back(dsx3currentsefss.get_name_leafdata());
    if (dsx3currentuass.is_set || is_set(dsx3currentuass.yfilter)) leaf_name_data.push_back(dsx3currentuass.get_name_leafdata());
    if (dsx3currentlcvs.is_set || is_set(dsx3currentlcvs.yfilter)) leaf_name_data.push_back(dsx3currentlcvs.get_name_leafdata());
    if (dsx3currentpcvs.is_set || is_set(dsx3currentpcvs.yfilter)) leaf_name_data.push_back(dsx3currentpcvs.get_name_leafdata());
    if (dsx3currentless.is_set || is_set(dsx3currentless.yfilter)) leaf_name_data.push_back(dsx3currentless.get_name_leafdata());
    if (dsx3currentccvs.is_set || is_set(dsx3currentccvs.yfilter)) leaf_name_data.push_back(dsx3currentccvs.get_name_leafdata());
    if (dsx3currentcess.is_set || is_set(dsx3currentcess.yfilter)) leaf_name_data.push_back(dsx3currentcess.get_name_leafdata());
    if (dsx3currentcsess.is_set || is_set(dsx3currentcsess.yfilter)) leaf_name_data.push_back(dsx3currentcsess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Currenttable::Dsx3Currententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Currenttable::Dsx3Currententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Currenttable::Dsx3Currententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3CurrentIndex")
    {
        dsx3currentindex = value;
        dsx3currentindex.value_namespace = name_space;
        dsx3currentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentPESs")
    {
        dsx3currentpess = value;
        dsx3currentpess.value_namespace = name_space;
        dsx3currentpess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentPSESs")
    {
        dsx3currentpsess = value;
        dsx3currentpsess.value_namespace = name_space;
        dsx3currentpsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentSEFSs")
    {
        dsx3currentsefss = value;
        dsx3currentsefss.value_namespace = name_space;
        dsx3currentsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentUASs")
    {
        dsx3currentuass = value;
        dsx3currentuass.value_namespace = name_space;
        dsx3currentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentLCVs")
    {
        dsx3currentlcvs = value;
        dsx3currentlcvs.value_namespace = name_space;
        dsx3currentlcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentPCVs")
    {
        dsx3currentpcvs = value;
        dsx3currentpcvs.value_namespace = name_space;
        dsx3currentpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentLESs")
    {
        dsx3currentless = value;
        dsx3currentless.value_namespace = name_space;
        dsx3currentless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentCCVs")
    {
        dsx3currentccvs = value;
        dsx3currentccvs.value_namespace = name_space;
        dsx3currentccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentCESs")
    {
        dsx3currentcess = value;
        dsx3currentcess.value_namespace = name_space;
        dsx3currentcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3CurrentCSESs")
    {
        dsx3currentcsess = value;
        dsx3currentcsess.value_namespace = name_space;
        dsx3currentcsess.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Currenttable::Dsx3Currententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3CurrentIndex")
    {
        dsx3currentindex.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentPESs")
    {
        dsx3currentpess.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentPSESs")
    {
        dsx3currentpsess.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentSEFSs")
    {
        dsx3currentsefss.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentUASs")
    {
        dsx3currentuass.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentLCVs")
    {
        dsx3currentlcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentPCVs")
    {
        dsx3currentpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentLESs")
    {
        dsx3currentless.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentCCVs")
    {
        dsx3currentccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentCESs")
    {
        dsx3currentcess.yfilter = yfilter;
    }
    if(value_path == "dsx3CurrentCSESs")
    {
        dsx3currentcsess.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Currenttable::Dsx3Currententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3CurrentIndex" || name == "dsx3CurrentPESs" || name == "dsx3CurrentPSESs" || name == "dsx3CurrentSEFSs" || name == "dsx3CurrentUASs" || name == "dsx3CurrentLCVs" || name == "dsx3CurrentPCVs" || name == "dsx3CurrentLESs" || name == "dsx3CurrentCCVs" || name == "dsx3CurrentCESs" || name == "dsx3CurrentCSESs")
        return true;
    return false;
}

DS3MIB::Dsx3Intervaltable::Dsx3Intervaltable()
{

    yang_name = "dsx3IntervalTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Intervaltable::~Dsx3Intervaltable()
{
}

bool DS3MIB::Dsx3Intervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3intervalentry.size(); index++)
    {
        if(dsx3intervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Intervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3intervalentry.size(); index++)
    {
        if(dsx3intervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Intervaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Intervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3IntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Intervaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Intervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3IntervalEntry")
    {
        for(auto const & c : dsx3intervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry>();
        c->parent = this;
        dsx3intervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Intervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3intervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Intervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Intervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Intervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3IntervalEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::Dsx3Intervalentry()
    :
    dsx3intervalindex{YType::int32, "dsx3IntervalIndex"},
    dsx3intervalnumber{YType::int32, "dsx3IntervalNumber"},
    dsx3intervalpess{YType::uint32, "dsx3IntervalPESs"},
    dsx3intervalpsess{YType::uint32, "dsx3IntervalPSESs"},
    dsx3intervalsefss{YType::uint32, "dsx3IntervalSEFSs"},
    dsx3intervaluass{YType::uint32, "dsx3IntervalUASs"},
    dsx3intervallcvs{YType::uint32, "dsx3IntervalLCVs"},
    dsx3intervalpcvs{YType::uint32, "dsx3IntervalPCVs"},
    dsx3intervalless{YType::uint32, "dsx3IntervalLESs"},
    dsx3intervalccvs{YType::uint32, "dsx3IntervalCCVs"},
    dsx3intervalcess{YType::uint32, "dsx3IntervalCESs"},
    dsx3intervalcsess{YType::uint32, "dsx3IntervalCSESs"},
    dsx3intervalvaliddata{YType::boolean, "dsx3IntervalValidData"}
{

    yang_name = "dsx3IntervalEntry"; yang_parent_name = "dsx3IntervalTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::~Dsx3Intervalentry()
{
}

bool DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::has_data() const
{
    return dsx3intervalindex.is_set
	|| dsx3intervalnumber.is_set
	|| dsx3intervalpess.is_set
	|| dsx3intervalpsess.is_set
	|| dsx3intervalsefss.is_set
	|| dsx3intervaluass.is_set
	|| dsx3intervallcvs.is_set
	|| dsx3intervalpcvs.is_set
	|| dsx3intervalless.is_set
	|| dsx3intervalccvs.is_set
	|| dsx3intervalcess.is_set
	|| dsx3intervalcsess.is_set
	|| dsx3intervalvaliddata.is_set;
}

bool DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3intervalindex.yfilter)
	|| ydk::is_set(dsx3intervalnumber.yfilter)
	|| ydk::is_set(dsx3intervalpess.yfilter)
	|| ydk::is_set(dsx3intervalpsess.yfilter)
	|| ydk::is_set(dsx3intervalsefss.yfilter)
	|| ydk::is_set(dsx3intervaluass.yfilter)
	|| ydk::is_set(dsx3intervallcvs.yfilter)
	|| ydk::is_set(dsx3intervalpcvs.yfilter)
	|| ydk::is_set(dsx3intervalless.yfilter)
	|| ydk::is_set(dsx3intervalccvs.yfilter)
	|| ydk::is_set(dsx3intervalcess.yfilter)
	|| ydk::is_set(dsx3intervalcsess.yfilter)
	|| ydk::is_set(dsx3intervalvaliddata.yfilter);
}

std::string DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3IntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3IntervalEntry" <<"[dsx3IntervalIndex='" <<dsx3intervalindex <<"']" <<"[dsx3IntervalNumber='" <<dsx3intervalnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3intervalindex.is_set || is_set(dsx3intervalindex.yfilter)) leaf_name_data.push_back(dsx3intervalindex.get_name_leafdata());
    if (dsx3intervalnumber.is_set || is_set(dsx3intervalnumber.yfilter)) leaf_name_data.push_back(dsx3intervalnumber.get_name_leafdata());
    if (dsx3intervalpess.is_set || is_set(dsx3intervalpess.yfilter)) leaf_name_data.push_back(dsx3intervalpess.get_name_leafdata());
    if (dsx3intervalpsess.is_set || is_set(dsx3intervalpsess.yfilter)) leaf_name_data.push_back(dsx3intervalpsess.get_name_leafdata());
    if (dsx3intervalsefss.is_set || is_set(dsx3intervalsefss.yfilter)) leaf_name_data.push_back(dsx3intervalsefss.get_name_leafdata());
    if (dsx3intervaluass.is_set || is_set(dsx3intervaluass.yfilter)) leaf_name_data.push_back(dsx3intervaluass.get_name_leafdata());
    if (dsx3intervallcvs.is_set || is_set(dsx3intervallcvs.yfilter)) leaf_name_data.push_back(dsx3intervallcvs.get_name_leafdata());
    if (dsx3intervalpcvs.is_set || is_set(dsx3intervalpcvs.yfilter)) leaf_name_data.push_back(dsx3intervalpcvs.get_name_leafdata());
    if (dsx3intervalless.is_set || is_set(dsx3intervalless.yfilter)) leaf_name_data.push_back(dsx3intervalless.get_name_leafdata());
    if (dsx3intervalccvs.is_set || is_set(dsx3intervalccvs.yfilter)) leaf_name_data.push_back(dsx3intervalccvs.get_name_leafdata());
    if (dsx3intervalcess.is_set || is_set(dsx3intervalcess.yfilter)) leaf_name_data.push_back(dsx3intervalcess.get_name_leafdata());
    if (dsx3intervalcsess.is_set || is_set(dsx3intervalcsess.yfilter)) leaf_name_data.push_back(dsx3intervalcsess.get_name_leafdata());
    if (dsx3intervalvaliddata.is_set || is_set(dsx3intervalvaliddata.yfilter)) leaf_name_data.push_back(dsx3intervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3IntervalIndex")
    {
        dsx3intervalindex = value;
        dsx3intervalindex.value_namespace = name_space;
        dsx3intervalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalNumber")
    {
        dsx3intervalnumber = value;
        dsx3intervalnumber.value_namespace = name_space;
        dsx3intervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalPESs")
    {
        dsx3intervalpess = value;
        dsx3intervalpess.value_namespace = name_space;
        dsx3intervalpess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalPSESs")
    {
        dsx3intervalpsess = value;
        dsx3intervalpsess.value_namespace = name_space;
        dsx3intervalpsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalSEFSs")
    {
        dsx3intervalsefss = value;
        dsx3intervalsefss.value_namespace = name_space;
        dsx3intervalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalUASs")
    {
        dsx3intervaluass = value;
        dsx3intervaluass.value_namespace = name_space;
        dsx3intervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalLCVs")
    {
        dsx3intervallcvs = value;
        dsx3intervallcvs.value_namespace = name_space;
        dsx3intervallcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalPCVs")
    {
        dsx3intervalpcvs = value;
        dsx3intervalpcvs.value_namespace = name_space;
        dsx3intervalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalLESs")
    {
        dsx3intervalless = value;
        dsx3intervalless.value_namespace = name_space;
        dsx3intervalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalCCVs")
    {
        dsx3intervalccvs = value;
        dsx3intervalccvs.value_namespace = name_space;
        dsx3intervalccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalCESs")
    {
        dsx3intervalcess = value;
        dsx3intervalcess.value_namespace = name_space;
        dsx3intervalcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalCSESs")
    {
        dsx3intervalcsess = value;
        dsx3intervalcsess.value_namespace = name_space;
        dsx3intervalcsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3IntervalValidData")
    {
        dsx3intervalvaliddata = value;
        dsx3intervalvaliddata.value_namespace = name_space;
        dsx3intervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3IntervalIndex")
    {
        dsx3intervalindex.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalNumber")
    {
        dsx3intervalnumber.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalPESs")
    {
        dsx3intervalpess.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalPSESs")
    {
        dsx3intervalpsess.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalSEFSs")
    {
        dsx3intervalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalUASs")
    {
        dsx3intervaluass.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalLCVs")
    {
        dsx3intervallcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalPCVs")
    {
        dsx3intervalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalLESs")
    {
        dsx3intervalless.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalCCVs")
    {
        dsx3intervalccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalCESs")
    {
        dsx3intervalcess.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalCSESs")
    {
        dsx3intervalcsess.yfilter = yfilter;
    }
    if(value_path == "dsx3IntervalValidData")
    {
        dsx3intervalvaliddata.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Intervaltable::Dsx3Intervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3IntervalIndex" || name == "dsx3IntervalNumber" || name == "dsx3IntervalPESs" || name == "dsx3IntervalPSESs" || name == "dsx3IntervalSEFSs" || name == "dsx3IntervalUASs" || name == "dsx3IntervalLCVs" || name == "dsx3IntervalPCVs" || name == "dsx3IntervalLESs" || name == "dsx3IntervalCCVs" || name == "dsx3IntervalCESs" || name == "dsx3IntervalCSESs" || name == "dsx3IntervalValidData")
        return true;
    return false;
}

DS3MIB::Dsx3Totaltable::Dsx3Totaltable()
{

    yang_name = "dsx3TotalTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Totaltable::~Dsx3Totaltable()
{
}

bool DS3MIB::Dsx3Totaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3totalentry.size(); index++)
    {
        if(dsx3totalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Totaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3totalentry.size(); index++)
    {
        if(dsx3totalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Totaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Totaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3TotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Totaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Totaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3TotalEntry")
    {
        for(auto const & c : dsx3totalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Totaltable::Dsx3Totalentry>();
        c->parent = this;
        dsx3totalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Totaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3totalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Totaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Totaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Totaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3TotalEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Totaltable::Dsx3Totalentry::Dsx3Totalentry()
    :
    dsx3totalindex{YType::int32, "dsx3TotalIndex"},
    dsx3totalpess{YType::uint32, "dsx3TotalPESs"},
    dsx3totalpsess{YType::uint32, "dsx3TotalPSESs"},
    dsx3totalsefss{YType::uint32, "dsx3TotalSEFSs"},
    dsx3totaluass{YType::uint32, "dsx3TotalUASs"},
    dsx3totallcvs{YType::uint32, "dsx3TotalLCVs"},
    dsx3totalpcvs{YType::uint32, "dsx3TotalPCVs"},
    dsx3totalless{YType::uint32, "dsx3TotalLESs"},
    dsx3totalccvs{YType::uint32, "dsx3TotalCCVs"},
    dsx3totalcess{YType::uint32, "dsx3TotalCESs"},
    dsx3totalcsess{YType::uint32, "dsx3TotalCSESs"}
{

    yang_name = "dsx3TotalEntry"; yang_parent_name = "dsx3TotalTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Totaltable::Dsx3Totalentry::~Dsx3Totalentry()
{
}

bool DS3MIB::Dsx3Totaltable::Dsx3Totalentry::has_data() const
{
    return dsx3totalindex.is_set
	|| dsx3totalpess.is_set
	|| dsx3totalpsess.is_set
	|| dsx3totalsefss.is_set
	|| dsx3totaluass.is_set
	|| dsx3totallcvs.is_set
	|| dsx3totalpcvs.is_set
	|| dsx3totalless.is_set
	|| dsx3totalccvs.is_set
	|| dsx3totalcess.is_set
	|| dsx3totalcsess.is_set;
}

bool DS3MIB::Dsx3Totaltable::Dsx3Totalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3totalindex.yfilter)
	|| ydk::is_set(dsx3totalpess.yfilter)
	|| ydk::is_set(dsx3totalpsess.yfilter)
	|| ydk::is_set(dsx3totalsefss.yfilter)
	|| ydk::is_set(dsx3totaluass.yfilter)
	|| ydk::is_set(dsx3totallcvs.yfilter)
	|| ydk::is_set(dsx3totalpcvs.yfilter)
	|| ydk::is_set(dsx3totalless.yfilter)
	|| ydk::is_set(dsx3totalccvs.yfilter)
	|| ydk::is_set(dsx3totalcess.yfilter)
	|| ydk::is_set(dsx3totalcsess.yfilter);
}

std::string DS3MIB::Dsx3Totaltable::Dsx3Totalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3TotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Totaltable::Dsx3Totalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3TotalEntry" <<"[dsx3TotalIndex='" <<dsx3totalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Totaltable::Dsx3Totalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3totalindex.is_set || is_set(dsx3totalindex.yfilter)) leaf_name_data.push_back(dsx3totalindex.get_name_leafdata());
    if (dsx3totalpess.is_set || is_set(dsx3totalpess.yfilter)) leaf_name_data.push_back(dsx3totalpess.get_name_leafdata());
    if (dsx3totalpsess.is_set || is_set(dsx3totalpsess.yfilter)) leaf_name_data.push_back(dsx3totalpsess.get_name_leafdata());
    if (dsx3totalsefss.is_set || is_set(dsx3totalsefss.yfilter)) leaf_name_data.push_back(dsx3totalsefss.get_name_leafdata());
    if (dsx3totaluass.is_set || is_set(dsx3totaluass.yfilter)) leaf_name_data.push_back(dsx3totaluass.get_name_leafdata());
    if (dsx3totallcvs.is_set || is_set(dsx3totallcvs.yfilter)) leaf_name_data.push_back(dsx3totallcvs.get_name_leafdata());
    if (dsx3totalpcvs.is_set || is_set(dsx3totalpcvs.yfilter)) leaf_name_data.push_back(dsx3totalpcvs.get_name_leafdata());
    if (dsx3totalless.is_set || is_set(dsx3totalless.yfilter)) leaf_name_data.push_back(dsx3totalless.get_name_leafdata());
    if (dsx3totalccvs.is_set || is_set(dsx3totalccvs.yfilter)) leaf_name_data.push_back(dsx3totalccvs.get_name_leafdata());
    if (dsx3totalcess.is_set || is_set(dsx3totalcess.yfilter)) leaf_name_data.push_back(dsx3totalcess.get_name_leafdata());
    if (dsx3totalcsess.is_set || is_set(dsx3totalcsess.yfilter)) leaf_name_data.push_back(dsx3totalcsess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Totaltable::Dsx3Totalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Totaltable::Dsx3Totalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Totaltable::Dsx3Totalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3TotalIndex")
    {
        dsx3totalindex = value;
        dsx3totalindex.value_namespace = name_space;
        dsx3totalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalPESs")
    {
        dsx3totalpess = value;
        dsx3totalpess.value_namespace = name_space;
        dsx3totalpess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalPSESs")
    {
        dsx3totalpsess = value;
        dsx3totalpsess.value_namespace = name_space;
        dsx3totalpsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalSEFSs")
    {
        dsx3totalsefss = value;
        dsx3totalsefss.value_namespace = name_space;
        dsx3totalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalUASs")
    {
        dsx3totaluass = value;
        dsx3totaluass.value_namespace = name_space;
        dsx3totaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalLCVs")
    {
        dsx3totallcvs = value;
        dsx3totallcvs.value_namespace = name_space;
        dsx3totallcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalPCVs")
    {
        dsx3totalpcvs = value;
        dsx3totalpcvs.value_namespace = name_space;
        dsx3totalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalLESs")
    {
        dsx3totalless = value;
        dsx3totalless.value_namespace = name_space;
        dsx3totalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalCCVs")
    {
        dsx3totalccvs = value;
        dsx3totalccvs.value_namespace = name_space;
        dsx3totalccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalCESs")
    {
        dsx3totalcess = value;
        dsx3totalcess.value_namespace = name_space;
        dsx3totalcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3TotalCSESs")
    {
        dsx3totalcsess = value;
        dsx3totalcsess.value_namespace = name_space;
        dsx3totalcsess.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Totaltable::Dsx3Totalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3TotalIndex")
    {
        dsx3totalindex.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalPESs")
    {
        dsx3totalpess.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalPSESs")
    {
        dsx3totalpsess.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalSEFSs")
    {
        dsx3totalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalUASs")
    {
        dsx3totaluass.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalLCVs")
    {
        dsx3totallcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalPCVs")
    {
        dsx3totalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalLESs")
    {
        dsx3totalless.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalCCVs")
    {
        dsx3totalccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalCESs")
    {
        dsx3totalcess.yfilter = yfilter;
    }
    if(value_path == "dsx3TotalCSESs")
    {
        dsx3totalcsess.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Totaltable::Dsx3Totalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3TotalIndex" || name == "dsx3TotalPESs" || name == "dsx3TotalPSESs" || name == "dsx3TotalSEFSs" || name == "dsx3TotalUASs" || name == "dsx3TotalLCVs" || name == "dsx3TotalPCVs" || name == "dsx3TotalLESs" || name == "dsx3TotalCCVs" || name == "dsx3TotalCESs" || name == "dsx3TotalCSESs")
        return true;
    return false;
}

DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigtable()
{

    yang_name = "dsx3FarEndConfigTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendconfigtable::~Dsx3Farendconfigtable()
{
}

bool DS3MIB::Dsx3Farendconfigtable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendconfigentry.size(); index++)
    {
        if(dsx3farendconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Farendconfigtable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendconfigentry.size(); index++)
    {
        if(dsx3farendconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Farendconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndConfigEntry")
    {
        for(auto const & c : dsx3farendconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry>();
        c->parent = this;
        dsx3farendconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Farendconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Farendconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Farendconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndConfigEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::Dsx3Farendconfigentry()
    :
    dsx3farendlineindex{YType::int32, "dsx3FarEndLineIndex"},
    dsx3farendequipcode{YType::str, "dsx3FarEndEquipCode"},
    dsx3farendlocationidcode{YType::str, "dsx3FarEndLocationIDCode"},
    dsx3farendframeidcode{YType::str, "dsx3FarEndFrameIDCode"},
    dsx3farendunitcode{YType::str, "dsx3FarEndUnitCode"},
    dsx3farendfacilityidcode{YType::str, "dsx3FarEndFacilityIDCode"}
{

    yang_name = "dsx3FarEndConfigEntry"; yang_parent_name = "dsx3FarEndConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::~Dsx3Farendconfigentry()
{
}

bool DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::has_data() const
{
    return dsx3farendlineindex.is_set
	|| dsx3farendequipcode.is_set
	|| dsx3farendlocationidcode.is_set
	|| dsx3farendframeidcode.is_set
	|| dsx3farendunitcode.is_set
	|| dsx3farendfacilityidcode.is_set;
}

bool DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3farendlineindex.yfilter)
	|| ydk::is_set(dsx3farendequipcode.yfilter)
	|| ydk::is_set(dsx3farendlocationidcode.yfilter)
	|| ydk::is_set(dsx3farendframeidcode.yfilter)
	|| ydk::is_set(dsx3farendunitcode.yfilter)
	|| ydk::is_set(dsx3farendfacilityidcode.yfilter);
}

std::string DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndConfigEntry" <<"[dsx3FarEndLineIndex='" <<dsx3farendlineindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendlineindex.is_set || is_set(dsx3farendlineindex.yfilter)) leaf_name_data.push_back(dsx3farendlineindex.get_name_leafdata());
    if (dsx3farendequipcode.is_set || is_set(dsx3farendequipcode.yfilter)) leaf_name_data.push_back(dsx3farendequipcode.get_name_leafdata());
    if (dsx3farendlocationidcode.is_set || is_set(dsx3farendlocationidcode.yfilter)) leaf_name_data.push_back(dsx3farendlocationidcode.get_name_leafdata());
    if (dsx3farendframeidcode.is_set || is_set(dsx3farendframeidcode.yfilter)) leaf_name_data.push_back(dsx3farendframeidcode.get_name_leafdata());
    if (dsx3farendunitcode.is_set || is_set(dsx3farendunitcode.yfilter)) leaf_name_data.push_back(dsx3farendunitcode.get_name_leafdata());
    if (dsx3farendfacilityidcode.is_set || is_set(dsx3farendfacilityidcode.yfilter)) leaf_name_data.push_back(dsx3farendfacilityidcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3FarEndLineIndex")
    {
        dsx3farendlineindex = value;
        dsx3farendlineindex.value_namespace = name_space;
        dsx3farendlineindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndEquipCode")
    {
        dsx3farendequipcode = value;
        dsx3farendequipcode.value_namespace = name_space;
        dsx3farendequipcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndLocationIDCode")
    {
        dsx3farendlocationidcode = value;
        dsx3farendlocationidcode.value_namespace = name_space;
        dsx3farendlocationidcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndFrameIDCode")
    {
        dsx3farendframeidcode = value;
        dsx3farendframeidcode.value_namespace = name_space;
        dsx3farendframeidcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndUnitCode")
    {
        dsx3farendunitcode = value;
        dsx3farendunitcode.value_namespace = name_space;
        dsx3farendunitcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndFacilityIDCode")
    {
        dsx3farendfacilityidcode = value;
        dsx3farendfacilityidcode.value_namespace = name_space;
        dsx3farendfacilityidcode.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3FarEndLineIndex")
    {
        dsx3farendlineindex.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndEquipCode")
    {
        dsx3farendequipcode.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndLocationIDCode")
    {
        dsx3farendlocationidcode.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndFrameIDCode")
    {
        dsx3farendframeidcode.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndUnitCode")
    {
        dsx3farendunitcode.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndFacilityIDCode")
    {
        dsx3farendfacilityidcode.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Farendconfigtable::Dsx3Farendconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndLineIndex" || name == "dsx3FarEndEquipCode" || name == "dsx3FarEndLocationIDCode" || name == "dsx3FarEndFrameIDCode" || name == "dsx3FarEndUnitCode" || name == "dsx3FarEndFacilityIDCode")
        return true;
    return false;
}

DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrenttable()
{

    yang_name = "dsx3FarEndCurrentTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendcurrenttable::~Dsx3Farendcurrenttable()
{
}

bool DS3MIB::Dsx3Farendcurrenttable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendcurrententry.size(); index++)
    {
        if(dsx3farendcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Farendcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendcurrententry.size(); index++)
    {
        if(dsx3farendcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Farendcurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendcurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndCurrentEntry")
    {
        for(auto const & c : dsx3farendcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry>();
        c->parent = this;
        dsx3farendcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Farendcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Farendcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Farendcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndCurrentEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::Dsx3Farendcurrententry()
    :
    dsx3farendcurrentindex{YType::int32, "dsx3FarEndCurrentIndex"},
    dsx3farendtimeelapsed{YType::int32, "dsx3FarEndTimeElapsed"},
    dsx3farendvalidintervals{YType::int32, "dsx3FarEndValidIntervals"},
    dsx3farendcurrentcess{YType::uint32, "dsx3FarEndCurrentCESs"},
    dsx3farendcurrentcsess{YType::uint32, "dsx3FarEndCurrentCSESs"},
    dsx3farendcurrentccvs{YType::uint32, "dsx3FarEndCurrentCCVs"},
    dsx3farendcurrentuass{YType::uint32, "dsx3FarEndCurrentUASs"},
    dsx3farendinvalidintervals{YType::int32, "dsx3FarEndInvalidIntervals"}
{

    yang_name = "dsx3FarEndCurrentEntry"; yang_parent_name = "dsx3FarEndCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::~Dsx3Farendcurrententry()
{
}

bool DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::has_data() const
{
    return dsx3farendcurrentindex.is_set
	|| dsx3farendtimeelapsed.is_set
	|| dsx3farendvalidintervals.is_set
	|| dsx3farendcurrentcess.is_set
	|| dsx3farendcurrentcsess.is_set
	|| dsx3farendcurrentccvs.is_set
	|| dsx3farendcurrentuass.is_set
	|| dsx3farendinvalidintervals.is_set;
}

bool DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3farendcurrentindex.yfilter)
	|| ydk::is_set(dsx3farendtimeelapsed.yfilter)
	|| ydk::is_set(dsx3farendvalidintervals.yfilter)
	|| ydk::is_set(dsx3farendcurrentcess.yfilter)
	|| ydk::is_set(dsx3farendcurrentcsess.yfilter)
	|| ydk::is_set(dsx3farendcurrentccvs.yfilter)
	|| ydk::is_set(dsx3farendcurrentuass.yfilter)
	|| ydk::is_set(dsx3farendinvalidintervals.yfilter);
}

std::string DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndCurrentEntry" <<"[dsx3FarEndCurrentIndex='" <<dsx3farendcurrentindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendcurrentindex.is_set || is_set(dsx3farendcurrentindex.yfilter)) leaf_name_data.push_back(dsx3farendcurrentindex.get_name_leafdata());
    if (dsx3farendtimeelapsed.is_set || is_set(dsx3farendtimeelapsed.yfilter)) leaf_name_data.push_back(dsx3farendtimeelapsed.get_name_leafdata());
    if (dsx3farendvalidintervals.is_set || is_set(dsx3farendvalidintervals.yfilter)) leaf_name_data.push_back(dsx3farendvalidintervals.get_name_leafdata());
    if (dsx3farendcurrentcess.is_set || is_set(dsx3farendcurrentcess.yfilter)) leaf_name_data.push_back(dsx3farendcurrentcess.get_name_leafdata());
    if (dsx3farendcurrentcsess.is_set || is_set(dsx3farendcurrentcsess.yfilter)) leaf_name_data.push_back(dsx3farendcurrentcsess.get_name_leafdata());
    if (dsx3farendcurrentccvs.is_set || is_set(dsx3farendcurrentccvs.yfilter)) leaf_name_data.push_back(dsx3farendcurrentccvs.get_name_leafdata());
    if (dsx3farendcurrentuass.is_set || is_set(dsx3farendcurrentuass.yfilter)) leaf_name_data.push_back(dsx3farendcurrentuass.get_name_leafdata());
    if (dsx3farendinvalidintervals.is_set || is_set(dsx3farendinvalidintervals.yfilter)) leaf_name_data.push_back(dsx3farendinvalidintervals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3FarEndCurrentIndex")
    {
        dsx3farendcurrentindex = value;
        dsx3farendcurrentindex.value_namespace = name_space;
        dsx3farendcurrentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndTimeElapsed")
    {
        dsx3farendtimeelapsed = value;
        dsx3farendtimeelapsed.value_namespace = name_space;
        dsx3farendtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndValidIntervals")
    {
        dsx3farendvalidintervals = value;
        dsx3farendvalidintervals.value_namespace = name_space;
        dsx3farendvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndCurrentCESs")
    {
        dsx3farendcurrentcess = value;
        dsx3farendcurrentcess.value_namespace = name_space;
        dsx3farendcurrentcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndCurrentCSESs")
    {
        dsx3farendcurrentcsess = value;
        dsx3farendcurrentcsess.value_namespace = name_space;
        dsx3farendcurrentcsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndCurrentCCVs")
    {
        dsx3farendcurrentccvs = value;
        dsx3farendcurrentccvs.value_namespace = name_space;
        dsx3farendcurrentccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndCurrentUASs")
    {
        dsx3farendcurrentuass = value;
        dsx3farendcurrentuass.value_namespace = name_space;
        dsx3farendcurrentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndInvalidIntervals")
    {
        dsx3farendinvalidintervals = value;
        dsx3farendinvalidintervals.value_namespace = name_space;
        dsx3farendinvalidintervals.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3FarEndCurrentIndex")
    {
        dsx3farendcurrentindex.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndTimeElapsed")
    {
        dsx3farendtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndValidIntervals")
    {
        dsx3farendvalidintervals.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndCurrentCESs")
    {
        dsx3farendcurrentcess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndCurrentCSESs")
    {
        dsx3farendcurrentcsess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndCurrentCCVs")
    {
        dsx3farendcurrentccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndCurrentUASs")
    {
        dsx3farendcurrentuass.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndInvalidIntervals")
    {
        dsx3farendinvalidintervals.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndCurrentIndex" || name == "dsx3FarEndTimeElapsed" || name == "dsx3FarEndValidIntervals" || name == "dsx3FarEndCurrentCESs" || name == "dsx3FarEndCurrentCSESs" || name == "dsx3FarEndCurrentCCVs" || name == "dsx3FarEndCurrentUASs" || name == "dsx3FarEndInvalidIntervals")
        return true;
    return false;
}

DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervaltable()
{

    yang_name = "dsx3FarEndIntervalTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendintervaltable::~Dsx3Farendintervaltable()
{
}

bool DS3MIB::Dsx3Farendintervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendintervalentry.size(); index++)
    {
        if(dsx3farendintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Farendintervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendintervalentry.size(); index++)
    {
        if(dsx3farendintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Farendintervaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendintervaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndIntervalEntry")
    {
        for(auto const & c : dsx3farendintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry>();
        c->parent = this;
        dsx3farendintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Farendintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Farendintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Farendintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndIntervalEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::Dsx3Farendintervalentry()
    :
    dsx3farendintervalindex{YType::int32, "dsx3FarEndIntervalIndex"},
    dsx3farendintervalnumber{YType::int32, "dsx3FarEndIntervalNumber"},
    dsx3farendintervalcess{YType::uint32, "dsx3FarEndIntervalCESs"},
    dsx3farendintervalcsess{YType::uint32, "dsx3FarEndIntervalCSESs"},
    dsx3farendintervalccvs{YType::uint32, "dsx3FarEndIntervalCCVs"},
    dsx3farendintervaluass{YType::uint32, "dsx3FarEndIntervalUASs"},
    dsx3farendintervalvaliddata{YType::boolean, "dsx3FarEndIntervalValidData"}
{

    yang_name = "dsx3FarEndIntervalEntry"; yang_parent_name = "dsx3FarEndIntervalTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::~Dsx3Farendintervalentry()
{
}

bool DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::has_data() const
{
    return dsx3farendintervalindex.is_set
	|| dsx3farendintervalnumber.is_set
	|| dsx3farendintervalcess.is_set
	|| dsx3farendintervalcsess.is_set
	|| dsx3farendintervalccvs.is_set
	|| dsx3farendintervaluass.is_set
	|| dsx3farendintervalvaliddata.is_set;
}

bool DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3farendintervalindex.yfilter)
	|| ydk::is_set(dsx3farendintervalnumber.yfilter)
	|| ydk::is_set(dsx3farendintervalcess.yfilter)
	|| ydk::is_set(dsx3farendintervalcsess.yfilter)
	|| ydk::is_set(dsx3farendintervalccvs.yfilter)
	|| ydk::is_set(dsx3farendintervaluass.yfilter)
	|| ydk::is_set(dsx3farendintervalvaliddata.yfilter);
}

std::string DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndIntervalEntry" <<"[dsx3FarEndIntervalIndex='" <<dsx3farendintervalindex <<"']" <<"[dsx3FarEndIntervalNumber='" <<dsx3farendintervalnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendintervalindex.is_set || is_set(dsx3farendintervalindex.yfilter)) leaf_name_data.push_back(dsx3farendintervalindex.get_name_leafdata());
    if (dsx3farendintervalnumber.is_set || is_set(dsx3farendintervalnumber.yfilter)) leaf_name_data.push_back(dsx3farendintervalnumber.get_name_leafdata());
    if (dsx3farendintervalcess.is_set || is_set(dsx3farendintervalcess.yfilter)) leaf_name_data.push_back(dsx3farendintervalcess.get_name_leafdata());
    if (dsx3farendintervalcsess.is_set || is_set(dsx3farendintervalcsess.yfilter)) leaf_name_data.push_back(dsx3farendintervalcsess.get_name_leafdata());
    if (dsx3farendintervalccvs.is_set || is_set(dsx3farendintervalccvs.yfilter)) leaf_name_data.push_back(dsx3farendintervalccvs.get_name_leafdata());
    if (dsx3farendintervaluass.is_set || is_set(dsx3farendintervaluass.yfilter)) leaf_name_data.push_back(dsx3farendintervaluass.get_name_leafdata());
    if (dsx3farendintervalvaliddata.is_set || is_set(dsx3farendintervalvaliddata.yfilter)) leaf_name_data.push_back(dsx3farendintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3FarEndIntervalIndex")
    {
        dsx3farendintervalindex = value;
        dsx3farendintervalindex.value_namespace = name_space;
        dsx3farendintervalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalNumber")
    {
        dsx3farendintervalnumber = value;
        dsx3farendintervalnumber.value_namespace = name_space;
        dsx3farendintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalCESs")
    {
        dsx3farendintervalcess = value;
        dsx3farendintervalcess.value_namespace = name_space;
        dsx3farendintervalcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalCSESs")
    {
        dsx3farendintervalcsess = value;
        dsx3farendintervalcsess.value_namespace = name_space;
        dsx3farendintervalcsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalCCVs")
    {
        dsx3farendintervalccvs = value;
        dsx3farendintervalccvs.value_namespace = name_space;
        dsx3farendintervalccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalUASs")
    {
        dsx3farendintervaluass = value;
        dsx3farendintervaluass.value_namespace = name_space;
        dsx3farendintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndIntervalValidData")
    {
        dsx3farendintervalvaliddata = value;
        dsx3farendintervalvaliddata.value_namespace = name_space;
        dsx3farendintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3FarEndIntervalIndex")
    {
        dsx3farendintervalindex.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalNumber")
    {
        dsx3farendintervalnumber.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalCESs")
    {
        dsx3farendintervalcess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalCSESs")
    {
        dsx3farendintervalcsess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalCCVs")
    {
        dsx3farendintervalccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalUASs")
    {
        dsx3farendintervaluass.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndIntervalValidData")
    {
        dsx3farendintervalvaliddata.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Farendintervaltable::Dsx3Farendintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndIntervalIndex" || name == "dsx3FarEndIntervalNumber" || name == "dsx3FarEndIntervalCESs" || name == "dsx3FarEndIntervalCSESs" || name == "dsx3FarEndIntervalCCVs" || name == "dsx3FarEndIntervalUASs" || name == "dsx3FarEndIntervalValidData")
        return true;
    return false;
}

DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotaltable()
{

    yang_name = "dsx3FarEndTotalTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendtotaltable::~Dsx3Farendtotaltable()
{
}

bool DS3MIB::Dsx3Farendtotaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendtotalentry.size(); index++)
    {
        if(dsx3farendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Farendtotaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendtotalentry.size(); index++)
    {
        if(dsx3farendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Farendtotaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendtotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendtotaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendtotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndTotalEntry")
    {
        for(auto const & c : dsx3farendtotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry>();
        c->parent = this;
        dsx3farendtotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendtotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendtotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Farendtotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Farendtotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Farendtotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndTotalEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::Dsx3Farendtotalentry()
    :
    dsx3farendtotalindex{YType::int32, "dsx3FarEndTotalIndex"},
    dsx3farendtotalcess{YType::uint32, "dsx3FarEndTotalCESs"},
    dsx3farendtotalcsess{YType::uint32, "dsx3FarEndTotalCSESs"},
    dsx3farendtotalccvs{YType::uint32, "dsx3FarEndTotalCCVs"},
    dsx3farendtotaluass{YType::uint32, "dsx3FarEndTotalUASs"}
{

    yang_name = "dsx3FarEndTotalEntry"; yang_parent_name = "dsx3FarEndTotalTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::~Dsx3Farendtotalentry()
{
}

bool DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::has_data() const
{
    return dsx3farendtotalindex.is_set
	|| dsx3farendtotalcess.is_set
	|| dsx3farendtotalcsess.is_set
	|| dsx3farendtotalccvs.is_set
	|| dsx3farendtotaluass.is_set;
}

bool DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3farendtotalindex.yfilter)
	|| ydk::is_set(dsx3farendtotalcess.yfilter)
	|| ydk::is_set(dsx3farendtotalcsess.yfilter)
	|| ydk::is_set(dsx3farendtotalccvs.yfilter)
	|| ydk::is_set(dsx3farendtotaluass.yfilter);
}

std::string DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndTotalEntry" <<"[dsx3FarEndTotalIndex='" <<dsx3farendtotalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendtotalindex.is_set || is_set(dsx3farendtotalindex.yfilter)) leaf_name_data.push_back(dsx3farendtotalindex.get_name_leafdata());
    if (dsx3farendtotalcess.is_set || is_set(dsx3farendtotalcess.yfilter)) leaf_name_data.push_back(dsx3farendtotalcess.get_name_leafdata());
    if (dsx3farendtotalcsess.is_set || is_set(dsx3farendtotalcsess.yfilter)) leaf_name_data.push_back(dsx3farendtotalcsess.get_name_leafdata());
    if (dsx3farendtotalccvs.is_set || is_set(dsx3farendtotalccvs.yfilter)) leaf_name_data.push_back(dsx3farendtotalccvs.get_name_leafdata());
    if (dsx3farendtotaluass.is_set || is_set(dsx3farendtotaluass.yfilter)) leaf_name_data.push_back(dsx3farendtotaluass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3FarEndTotalIndex")
    {
        dsx3farendtotalindex = value;
        dsx3farendtotalindex.value_namespace = name_space;
        dsx3farendtotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndTotalCESs")
    {
        dsx3farendtotalcess = value;
        dsx3farendtotalcess.value_namespace = name_space;
        dsx3farendtotalcess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndTotalCSESs")
    {
        dsx3farendtotalcsess = value;
        dsx3farendtotalcsess.value_namespace = name_space;
        dsx3farendtotalcsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndTotalCCVs")
    {
        dsx3farendtotalccvs = value;
        dsx3farendtotalccvs.value_namespace = name_space;
        dsx3farendtotalccvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FarEndTotalUASs")
    {
        dsx3farendtotaluass = value;
        dsx3farendtotaluass.value_namespace = name_space;
        dsx3farendtotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3FarEndTotalIndex")
    {
        dsx3farendtotalindex.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndTotalCESs")
    {
        dsx3farendtotalcess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndTotalCSESs")
    {
        dsx3farendtotalcsess.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndTotalCCVs")
    {
        dsx3farendtotalccvs.yfilter = yfilter;
    }
    if(value_path == "dsx3FarEndTotalUASs")
    {
        dsx3farendtotaluass.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Farendtotaltable::Dsx3Farendtotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FarEndTotalIndex" || name == "dsx3FarEndTotalCESs" || name == "dsx3FarEndTotalCSESs" || name == "dsx3FarEndTotalCCVs" || name == "dsx3FarEndTotalUASs")
        return true;
    return false;
}

DS3MIB::Dsx3Fractable::Dsx3Fractable()
{

    yang_name = "dsx3FracTable"; yang_parent_name = "DS3-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Fractable::~Dsx3Fractable()
{
}

bool DS3MIB::Dsx3Fractable::has_data() const
{
    for (std::size_t index=0; index<dsx3fracentry.size(); index++)
    {
        if(dsx3fracentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS3MIB::Dsx3Fractable::has_operation() const
{
    for (std::size_t index=0; index<dsx3fracentry.size(); index++)
    {
        if(dsx3fracentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS3MIB::Dsx3Fractable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Fractable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FracTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Fractable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Fractable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FracEntry")
    {
        for(auto const & c : dsx3fracentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DS3MIB::Dsx3Fractable::Dsx3Fracentry>();
        c->parent = this;
        dsx3fracentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Fractable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3fracentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DS3MIB::Dsx3Fractable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS3MIB::Dsx3Fractable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS3MIB::Dsx3Fractable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FracEntry")
        return true;
    return false;
}

DS3MIB::Dsx3Fractable::Dsx3Fracentry::Dsx3Fracentry()
    :
    dsx3fracindex{YType::int32, "dsx3FracIndex"},
    dsx3fracnumber{YType::int32, "dsx3FracNumber"},
    dsx3fracifindex{YType::int32, "dsx3FracIfIndex"}
{

    yang_name = "dsx3FracEntry"; yang_parent_name = "dsx3FracTable"; is_top_level_class = false; has_list_ancestor = false;
}

DS3MIB::Dsx3Fractable::Dsx3Fracentry::~Dsx3Fracentry()
{
}

bool DS3MIB::Dsx3Fractable::Dsx3Fracentry::has_data() const
{
    return dsx3fracindex.is_set
	|| dsx3fracnumber.is_set
	|| dsx3fracifindex.is_set;
}

bool DS3MIB::Dsx3Fractable::Dsx3Fracentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx3fracindex.yfilter)
	|| ydk::is_set(dsx3fracnumber.yfilter)
	|| ydk::is_set(dsx3fracifindex.yfilter);
}

std::string DS3MIB::Dsx3Fractable::Dsx3Fracentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB/dsx3FracTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS3MIB::Dsx3Fractable::Dsx3Fracentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FracEntry" <<"[dsx3FracIndex='" <<dsx3fracindex <<"']" <<"[dsx3FracNumber='" <<dsx3fracnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS3MIB::Dsx3Fractable::Dsx3Fracentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3fracindex.is_set || is_set(dsx3fracindex.yfilter)) leaf_name_data.push_back(dsx3fracindex.get_name_leafdata());
    if (dsx3fracnumber.is_set || is_set(dsx3fracnumber.yfilter)) leaf_name_data.push_back(dsx3fracnumber.get_name_leafdata());
    if (dsx3fracifindex.is_set || is_set(dsx3fracifindex.yfilter)) leaf_name_data.push_back(dsx3fracifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS3MIB::Dsx3Fractable::Dsx3Fracentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS3MIB::Dsx3Fractable::Dsx3Fracentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DS3MIB::Dsx3Fractable::Dsx3Fracentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx3FracIndex")
    {
        dsx3fracindex = value;
        dsx3fracindex.value_namespace = name_space;
        dsx3fracindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FracNumber")
    {
        dsx3fracnumber = value;
        dsx3fracnumber.value_namespace = name_space;
        dsx3fracnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx3FracIfIndex")
    {
        dsx3fracifindex = value;
        dsx3fracifindex.value_namespace = name_space;
        dsx3fracifindex.value_namespace_prefix = name_space_prefix;
    }
}

void DS3MIB::Dsx3Fractable::Dsx3Fracentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx3FracIndex")
    {
        dsx3fracindex.yfilter = yfilter;
    }
    if(value_path == "dsx3FracNumber")
    {
        dsx3fracnumber.yfilter = yfilter;
    }
    if(value_path == "dsx3FracIfIndex")
    {
        dsx3fracifindex.yfilter = yfilter;
    }
}

bool DS3MIB::Dsx3Fractable::Dsx3Fracentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx3FracIndex" || name == "dsx3FracNumber" || name == "dsx3FracIfIndex")
        return true;
    return false;
}

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::dsx3other {1, "dsx3other"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::dsx3M23 {2, "dsx3M23"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::dsx3SYNTRAN {3, "dsx3SYNTRAN"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::dsx3CbitParity {4, "dsx3CbitParity"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::dsx3ClearChannel {5, "dsx3ClearChannel"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::e3other {6, "e3other"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::e3Framed {7, "e3Framed"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype::e3Plcp {8, "e3Plcp"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linecoding::dsx3Other {1, "dsx3Other"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linecoding::dsx3B3ZS {2, "dsx3B3ZS"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linecoding::e3HDB3 {3, "e3HDB3"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendNoCode {1, "dsx3SendNoCode"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendLineCode {2, "dsx3SendLineCode"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendPayloadCode {3, "dsx3SendPayloadCode"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendResetCode {4, "dsx3SendResetCode"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendDS1LoopCode {5, "dsx3SendDS1LoopCode"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode::dsx3SendTestPattern {6, "dsx3SendTestPattern"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3NoLoop {1, "dsx3NoLoop"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3PayloadLoop {2, "dsx3PayloadLoop"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3LineLoop {3, "dsx3LineLoop"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3OtherLoop {4, "dsx3OtherLoop"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3InwardLoop {5, "dsx3InwardLoop"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig::dsx3DualLoop {6, "dsx3DualLoop"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Transmitclocksource::loopTiming {1, "loopTiming"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Transmitclocksource::localTiming {2, "localTiming"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Transmitclocksource::throughTiming {3, "throughTiming"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linestatuschangetrapenable::enabled {1, "enabled"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Linestatuschangetrapenable::disabled {2, "disabled"};

const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Channelization::disabled {1, "disabled"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Channelization::enabledDs1 {2, "enabledDs1"};
const Enum::YLeaf DS3MIB::Dsx3Configtable::Dsx3Configentry::Dsx3Channelization::enabledDs2 {3, "enabledDs2"};


}
}

