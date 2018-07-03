
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DS1_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DS1_MIB {

DS1MIB::DS1MIB()
    :
    dsx1configtable(std::make_shared<DS1MIB::Dsx1ConfigTable>())
    , dsx1currenttable(std::make_shared<DS1MIB::Dsx1CurrentTable>())
    , dsx1intervaltable(std::make_shared<DS1MIB::Dsx1IntervalTable>())
    , dsx1totaltable(std::make_shared<DS1MIB::Dsx1TotalTable>())
    , dsx1farendcurrenttable(std::make_shared<DS1MIB::Dsx1FarEndCurrentTable>())
    , dsx1farendintervaltable(std::make_shared<DS1MIB::Dsx1FarEndIntervalTable>())
    , dsx1farendtotaltable(std::make_shared<DS1MIB::Dsx1FarEndTotalTable>())
    , dsx1fractable(std::make_shared<DS1MIB::Dsx1FracTable>())
    , dsx1chanmappingtable(std::make_shared<DS1MIB::Dsx1ChanMappingTable>())
{
    dsx1configtable->parent = this;
    dsx1currenttable->parent = this;
    dsx1intervaltable->parent = this;
    dsx1totaltable->parent = this;
    dsx1farendcurrenttable->parent = this;
    dsx1farendintervaltable->parent = this;
    dsx1farendtotaltable->parent = this;
    dsx1fractable->parent = this;
    dsx1chanmappingtable->parent = this;

    yang_name = "DS1-MIB"; yang_parent_name = "DS1-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DS1MIB::~DS1MIB()
{
}

bool DS1MIB::has_data() const
{
    if (is_presence_container) return true;
    return (dsx1configtable !=  nullptr && dsx1configtable->has_data())
	|| (dsx1currenttable !=  nullptr && dsx1currenttable->has_data())
	|| (dsx1intervaltable !=  nullptr && dsx1intervaltable->has_data())
	|| (dsx1totaltable !=  nullptr && dsx1totaltable->has_data())
	|| (dsx1farendcurrenttable !=  nullptr && dsx1farendcurrenttable->has_data())
	|| (dsx1farendintervaltable !=  nullptr && dsx1farendintervaltable->has_data())
	|| (dsx1farendtotaltable !=  nullptr && dsx1farendtotaltable->has_data())
	|| (dsx1fractable !=  nullptr && dsx1fractable->has_data())
	|| (dsx1chanmappingtable !=  nullptr && dsx1chanmappingtable->has_data());
}

bool DS1MIB::has_operation() const
{
    return is_set(yfilter)
	|| (dsx1configtable !=  nullptr && dsx1configtable->has_operation())
	|| (dsx1currenttable !=  nullptr && dsx1currenttable->has_operation())
	|| (dsx1intervaltable !=  nullptr && dsx1intervaltable->has_operation())
	|| (dsx1totaltable !=  nullptr && dsx1totaltable->has_operation())
	|| (dsx1farendcurrenttable !=  nullptr && dsx1farendcurrenttable->has_operation())
	|| (dsx1farendintervaltable !=  nullptr && dsx1farendintervaltable->has_operation())
	|| (dsx1farendtotaltable !=  nullptr && dsx1farendtotaltable->has_operation())
	|| (dsx1fractable !=  nullptr && dsx1fractable->has_operation())
	|| (dsx1chanmappingtable !=  nullptr && dsx1chanmappingtable->has_operation());
}

std::string DS1MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ConfigTable")
    {
        if(dsx1configtable == nullptr)
        {
            dsx1configtable = std::make_shared<DS1MIB::Dsx1ConfigTable>();
        }
        return dsx1configtable;
    }

    if(child_yang_name == "dsx1CurrentTable")
    {
        if(dsx1currenttable == nullptr)
        {
            dsx1currenttable = std::make_shared<DS1MIB::Dsx1CurrentTable>();
        }
        return dsx1currenttable;
    }

    if(child_yang_name == "dsx1IntervalTable")
    {
        if(dsx1intervaltable == nullptr)
        {
            dsx1intervaltable = std::make_shared<DS1MIB::Dsx1IntervalTable>();
        }
        return dsx1intervaltable;
    }

    if(child_yang_name == "dsx1TotalTable")
    {
        if(dsx1totaltable == nullptr)
        {
            dsx1totaltable = std::make_shared<DS1MIB::Dsx1TotalTable>();
        }
        return dsx1totaltable;
    }

    if(child_yang_name == "dsx1FarEndCurrentTable")
    {
        if(dsx1farendcurrenttable == nullptr)
        {
            dsx1farendcurrenttable = std::make_shared<DS1MIB::Dsx1FarEndCurrentTable>();
        }
        return dsx1farendcurrenttable;
    }

    if(child_yang_name == "dsx1FarEndIntervalTable")
    {
        if(dsx1farendintervaltable == nullptr)
        {
            dsx1farendintervaltable = std::make_shared<DS1MIB::Dsx1FarEndIntervalTable>();
        }
        return dsx1farendintervaltable;
    }

    if(child_yang_name == "dsx1FarEndTotalTable")
    {
        if(dsx1farendtotaltable == nullptr)
        {
            dsx1farendtotaltable = std::make_shared<DS1MIB::Dsx1FarEndTotalTable>();
        }
        return dsx1farendtotaltable;
    }

    if(child_yang_name == "dsx1FracTable")
    {
        if(dsx1fractable == nullptr)
        {
            dsx1fractable = std::make_shared<DS1MIB::Dsx1FracTable>();
        }
        return dsx1fractable;
    }

    if(child_yang_name == "dsx1ChanMappingTable")
    {
        if(dsx1chanmappingtable == nullptr)
        {
            dsx1chanmappingtable = std::make_shared<DS1MIB::Dsx1ChanMappingTable>();
        }
        return dsx1chanmappingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dsx1configtable != nullptr)
    {
        children["dsx1ConfigTable"] = dsx1configtable;
    }

    if(dsx1currenttable != nullptr)
    {
        children["dsx1CurrentTable"] = dsx1currenttable;
    }

    if(dsx1intervaltable != nullptr)
    {
        children["dsx1IntervalTable"] = dsx1intervaltable;
    }

    if(dsx1totaltable != nullptr)
    {
        children["dsx1TotalTable"] = dsx1totaltable;
    }

    if(dsx1farendcurrenttable != nullptr)
    {
        children["dsx1FarEndCurrentTable"] = dsx1farendcurrenttable;
    }

    if(dsx1farendintervaltable != nullptr)
    {
        children["dsx1FarEndIntervalTable"] = dsx1farendintervaltable;
    }

    if(dsx1farendtotaltable != nullptr)
    {
        children["dsx1FarEndTotalTable"] = dsx1farendtotaltable;
    }

    if(dsx1fractable != nullptr)
    {
        children["dsx1FracTable"] = dsx1fractable;
    }

    if(dsx1chanmappingtable != nullptr)
    {
        children["dsx1ChanMappingTable"] = dsx1chanmappingtable;
    }

    return children;
}

void DS1MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DS1MIB::clone_ptr() const
{
    return std::make_shared<DS1MIB>();
}

std::string DS1MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DS1MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DS1MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DS1MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DS1MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1ConfigTable" || name == "dsx1CurrentTable" || name == "dsx1IntervalTable" || name == "dsx1TotalTable" || name == "dsx1FarEndCurrentTable" || name == "dsx1FarEndIntervalTable" || name == "dsx1FarEndTotalTable" || name == "dsx1FracTable" || name == "dsx1ChanMappingTable")
        return true;
    return false;
}

DS1MIB::Dsx1ConfigTable::Dsx1ConfigTable()
    :
    dsx1configentry(this, {"dsx1lineindex"})
{

    yang_name = "dsx1ConfigTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1ConfigTable::~Dsx1ConfigTable()
{
}

bool DS1MIB::Dsx1ConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1configentry.len(); index++)
    {
        if(dsx1configentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1ConfigTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1configentry.len(); index++)
    {
        if(dsx1configentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1ConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1ConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1ConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1ConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ConfigEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry>();
        c->parent = this;
        dsx1configentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1ConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1configentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1ConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1ConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1ConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1ConfigEntry")
        return true;
    return false;
}

DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1ConfigEntry()
    :
    dsx1lineindex{YType::int32, "dsx1LineIndex"},
    dsx1ifindex{YType::int32, "dsx1IfIndex"},
    dsx1timeelapsed{YType::int32, "dsx1TimeElapsed"},
    dsx1validintervals{YType::int32, "dsx1ValidIntervals"},
    dsx1linetype{YType::enumeration, "dsx1LineType"},
    dsx1linecoding{YType::enumeration, "dsx1LineCoding"},
    dsx1sendcode{YType::enumeration, "dsx1SendCode"},
    dsx1circuitidentifier{YType::str, "dsx1CircuitIdentifier"},
    dsx1loopbackconfig{YType::enumeration, "dsx1LoopbackConfig"},
    dsx1linestatus{YType::int32, "dsx1LineStatus"},
    dsx1signalmode{YType::enumeration, "dsx1SignalMode"},
    dsx1transmitclocksource{YType::enumeration, "dsx1TransmitClockSource"},
    dsx1fdl{YType::int32, "dsx1Fdl"},
    dsx1invalidintervals{YType::int32, "dsx1InvalidIntervals"},
    dsx1linelength{YType::int32, "dsx1LineLength"},
    dsx1linestatuslastchange{YType::uint32, "dsx1LineStatusLastChange"},
    dsx1linestatuschangetrapenable{YType::enumeration, "dsx1LineStatusChangeTrapEnable"},
    dsx1loopbackstatus{YType::int32, "dsx1LoopbackStatus"},
    dsx1ds1channelnumber{YType::int32, "dsx1Ds1ChannelNumber"},
    dsx1channelization{YType::enumeration, "dsx1Channelization"}
{

    yang_name = "dsx1ConfigEntry"; yang_parent_name = "dsx1ConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::~Dsx1ConfigEntry()
{
}

bool DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1lineindex.is_set
	|| dsx1ifindex.is_set
	|| dsx1timeelapsed.is_set
	|| dsx1validintervals.is_set
	|| dsx1linetype.is_set
	|| dsx1linecoding.is_set
	|| dsx1sendcode.is_set
	|| dsx1circuitidentifier.is_set
	|| dsx1loopbackconfig.is_set
	|| dsx1linestatus.is_set
	|| dsx1signalmode.is_set
	|| dsx1transmitclocksource.is_set
	|| dsx1fdl.is_set
	|| dsx1invalidintervals.is_set
	|| dsx1linelength.is_set
	|| dsx1linestatuslastchange.is_set
	|| dsx1linestatuschangetrapenable.is_set
	|| dsx1loopbackstatus.is_set
	|| dsx1ds1channelnumber.is_set
	|| dsx1channelization.is_set;
}

bool DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1lineindex.yfilter)
	|| ydk::is_set(dsx1ifindex.yfilter)
	|| ydk::is_set(dsx1timeelapsed.yfilter)
	|| ydk::is_set(dsx1validintervals.yfilter)
	|| ydk::is_set(dsx1linetype.yfilter)
	|| ydk::is_set(dsx1linecoding.yfilter)
	|| ydk::is_set(dsx1sendcode.yfilter)
	|| ydk::is_set(dsx1circuitidentifier.yfilter)
	|| ydk::is_set(dsx1loopbackconfig.yfilter)
	|| ydk::is_set(dsx1linestatus.yfilter)
	|| ydk::is_set(dsx1signalmode.yfilter)
	|| ydk::is_set(dsx1transmitclocksource.yfilter)
	|| ydk::is_set(dsx1fdl.yfilter)
	|| ydk::is_set(dsx1invalidintervals.yfilter)
	|| ydk::is_set(dsx1linelength.yfilter)
	|| ydk::is_set(dsx1linestatuslastchange.yfilter)
	|| ydk::is_set(dsx1linestatuschangetrapenable.yfilter)
	|| ydk::is_set(dsx1loopbackstatus.yfilter)
	|| ydk::is_set(dsx1ds1channelnumber.yfilter)
	|| ydk::is_set(dsx1channelization.yfilter);
}

std::string DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1ConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ConfigEntry";
    ADD_KEY_TOKEN(dsx1lineindex, "dsx1LineIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1lineindex.is_set || is_set(dsx1lineindex.yfilter)) leaf_name_data.push_back(dsx1lineindex.get_name_leafdata());
    if (dsx1ifindex.is_set || is_set(dsx1ifindex.yfilter)) leaf_name_data.push_back(dsx1ifindex.get_name_leafdata());
    if (dsx1timeelapsed.is_set || is_set(dsx1timeelapsed.yfilter)) leaf_name_data.push_back(dsx1timeelapsed.get_name_leafdata());
    if (dsx1validintervals.is_set || is_set(dsx1validintervals.yfilter)) leaf_name_data.push_back(dsx1validintervals.get_name_leafdata());
    if (dsx1linetype.is_set || is_set(dsx1linetype.yfilter)) leaf_name_data.push_back(dsx1linetype.get_name_leafdata());
    if (dsx1linecoding.is_set || is_set(dsx1linecoding.yfilter)) leaf_name_data.push_back(dsx1linecoding.get_name_leafdata());
    if (dsx1sendcode.is_set || is_set(dsx1sendcode.yfilter)) leaf_name_data.push_back(dsx1sendcode.get_name_leafdata());
    if (dsx1circuitidentifier.is_set || is_set(dsx1circuitidentifier.yfilter)) leaf_name_data.push_back(dsx1circuitidentifier.get_name_leafdata());
    if (dsx1loopbackconfig.is_set || is_set(dsx1loopbackconfig.yfilter)) leaf_name_data.push_back(dsx1loopbackconfig.get_name_leafdata());
    if (dsx1linestatus.is_set || is_set(dsx1linestatus.yfilter)) leaf_name_data.push_back(dsx1linestatus.get_name_leafdata());
    if (dsx1signalmode.is_set || is_set(dsx1signalmode.yfilter)) leaf_name_data.push_back(dsx1signalmode.get_name_leafdata());
    if (dsx1transmitclocksource.is_set || is_set(dsx1transmitclocksource.yfilter)) leaf_name_data.push_back(dsx1transmitclocksource.get_name_leafdata());
    if (dsx1fdl.is_set || is_set(dsx1fdl.yfilter)) leaf_name_data.push_back(dsx1fdl.get_name_leafdata());
    if (dsx1invalidintervals.is_set || is_set(dsx1invalidintervals.yfilter)) leaf_name_data.push_back(dsx1invalidintervals.get_name_leafdata());
    if (dsx1linelength.is_set || is_set(dsx1linelength.yfilter)) leaf_name_data.push_back(dsx1linelength.get_name_leafdata());
    if (dsx1linestatuslastchange.is_set || is_set(dsx1linestatuslastchange.yfilter)) leaf_name_data.push_back(dsx1linestatuslastchange.get_name_leafdata());
    if (dsx1linestatuschangetrapenable.is_set || is_set(dsx1linestatuschangetrapenable.yfilter)) leaf_name_data.push_back(dsx1linestatuschangetrapenable.get_name_leafdata());
    if (dsx1loopbackstatus.is_set || is_set(dsx1loopbackstatus.yfilter)) leaf_name_data.push_back(dsx1loopbackstatus.get_name_leafdata());
    if (dsx1ds1channelnumber.is_set || is_set(dsx1ds1channelnumber.yfilter)) leaf_name_data.push_back(dsx1ds1channelnumber.get_name_leafdata());
    if (dsx1channelization.is_set || is_set(dsx1channelization.yfilter)) leaf_name_data.push_back(dsx1channelization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1LineIndex")
    {
        dsx1lineindex = value;
        dsx1lineindex.value_namespace = name_space;
        dsx1lineindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IfIndex")
    {
        dsx1ifindex = value;
        dsx1ifindex.value_namespace = name_space;
        dsx1ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TimeElapsed")
    {
        dsx1timeelapsed = value;
        dsx1timeelapsed.value_namespace = name_space;
        dsx1timeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1ValidIntervals")
    {
        dsx1validintervals = value;
        dsx1validintervals.value_namespace = name_space;
        dsx1validintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineType")
    {
        dsx1linetype = value;
        dsx1linetype.value_namespace = name_space;
        dsx1linetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineCoding")
    {
        dsx1linecoding = value;
        dsx1linecoding.value_namespace = name_space;
        dsx1linecoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1SendCode")
    {
        dsx1sendcode = value;
        dsx1sendcode.value_namespace = name_space;
        dsx1sendcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CircuitIdentifier")
    {
        dsx1circuitidentifier = value;
        dsx1circuitidentifier.value_namespace = name_space;
        dsx1circuitidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LoopbackConfig")
    {
        dsx1loopbackconfig = value;
        dsx1loopbackconfig.value_namespace = name_space;
        dsx1loopbackconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineStatus")
    {
        dsx1linestatus = value;
        dsx1linestatus.value_namespace = name_space;
        dsx1linestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1SignalMode")
    {
        dsx1signalmode = value;
        dsx1signalmode.value_namespace = name_space;
        dsx1signalmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TransmitClockSource")
    {
        dsx1transmitclocksource = value;
        dsx1transmitclocksource.value_namespace = name_space;
        dsx1transmitclocksource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1Fdl")
    {
        dsx1fdl = value;
        dsx1fdl.value_namespace = name_space;
        dsx1fdl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1InvalidIntervals")
    {
        dsx1invalidintervals = value;
        dsx1invalidintervals.value_namespace = name_space;
        dsx1invalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineLength")
    {
        dsx1linelength = value;
        dsx1linelength.value_namespace = name_space;
        dsx1linelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineStatusLastChange")
    {
        dsx1linestatuslastchange = value;
        dsx1linestatuslastchange.value_namespace = name_space;
        dsx1linestatuslastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LineStatusChangeTrapEnable")
    {
        dsx1linestatuschangetrapenable = value;
        dsx1linestatuschangetrapenable.value_namespace = name_space;
        dsx1linestatuschangetrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1LoopbackStatus")
    {
        dsx1loopbackstatus = value;
        dsx1loopbackstatus.value_namespace = name_space;
        dsx1loopbackstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber = value;
        dsx1ds1channelnumber.value_namespace = name_space;
        dsx1ds1channelnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1Channelization")
    {
        dsx1channelization = value;
        dsx1channelization.value_namespace = name_space;
        dsx1channelization.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1LineIndex")
    {
        dsx1lineindex.yfilter = yfilter;
    }
    if(value_path == "dsx1IfIndex")
    {
        dsx1ifindex.yfilter = yfilter;
    }
    if(value_path == "dsx1TimeElapsed")
    {
        dsx1timeelapsed.yfilter = yfilter;
    }
    if(value_path == "dsx1ValidIntervals")
    {
        dsx1validintervals.yfilter = yfilter;
    }
    if(value_path == "dsx1LineType")
    {
        dsx1linetype.yfilter = yfilter;
    }
    if(value_path == "dsx1LineCoding")
    {
        dsx1linecoding.yfilter = yfilter;
    }
    if(value_path == "dsx1SendCode")
    {
        dsx1sendcode.yfilter = yfilter;
    }
    if(value_path == "dsx1CircuitIdentifier")
    {
        dsx1circuitidentifier.yfilter = yfilter;
    }
    if(value_path == "dsx1LoopbackConfig")
    {
        dsx1loopbackconfig.yfilter = yfilter;
    }
    if(value_path == "dsx1LineStatus")
    {
        dsx1linestatus.yfilter = yfilter;
    }
    if(value_path == "dsx1SignalMode")
    {
        dsx1signalmode.yfilter = yfilter;
    }
    if(value_path == "dsx1TransmitClockSource")
    {
        dsx1transmitclocksource.yfilter = yfilter;
    }
    if(value_path == "dsx1Fdl")
    {
        dsx1fdl.yfilter = yfilter;
    }
    if(value_path == "dsx1InvalidIntervals")
    {
        dsx1invalidintervals.yfilter = yfilter;
    }
    if(value_path == "dsx1LineLength")
    {
        dsx1linelength.yfilter = yfilter;
    }
    if(value_path == "dsx1LineStatusLastChange")
    {
        dsx1linestatuslastchange.yfilter = yfilter;
    }
    if(value_path == "dsx1LineStatusChangeTrapEnable")
    {
        dsx1linestatuschangetrapenable.yfilter = yfilter;
    }
    if(value_path == "dsx1LoopbackStatus")
    {
        dsx1loopbackstatus.yfilter = yfilter;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber.yfilter = yfilter;
    }
    if(value_path == "dsx1Channelization")
    {
        dsx1channelization.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1LineIndex" || name == "dsx1IfIndex" || name == "dsx1TimeElapsed" || name == "dsx1ValidIntervals" || name == "dsx1LineType" || name == "dsx1LineCoding" || name == "dsx1SendCode" || name == "dsx1CircuitIdentifier" || name == "dsx1LoopbackConfig" || name == "dsx1LineStatus" || name == "dsx1SignalMode" || name == "dsx1TransmitClockSource" || name == "dsx1Fdl" || name == "dsx1InvalidIntervals" || name == "dsx1LineLength" || name == "dsx1LineStatusLastChange" || name == "dsx1LineStatusChangeTrapEnable" || name == "dsx1LoopbackStatus" || name == "dsx1Ds1ChannelNumber" || name == "dsx1Channelization")
        return true;
    return false;
}

DS1MIB::Dsx1CurrentTable::Dsx1CurrentTable()
    :
    dsx1currententry(this, {"dsx1currentindex"})
{

    yang_name = "dsx1CurrentTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1CurrentTable::~Dsx1CurrentTable()
{
}

bool DS1MIB::Dsx1CurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1currententry.len(); index++)
    {
        if(dsx1currententry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1CurrentTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1currententry.len(); index++)
    {
        if(dsx1currententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1CurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1CurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1CurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1CurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1CurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1CurrentEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry>();
        c->parent = this;
        dsx1currententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1CurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1currententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1CurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1CurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1CurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1CurrentEntry")
        return true;
    return false;
}

DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::Dsx1CurrentEntry()
    :
    dsx1currentindex{YType::int32, "dsx1CurrentIndex"},
    dsx1currentess{YType::uint32, "dsx1CurrentESs"},
    dsx1currentsess{YType::uint32, "dsx1CurrentSESs"},
    dsx1currentsefss{YType::uint32, "dsx1CurrentSEFSs"},
    dsx1currentuass{YType::uint32, "dsx1CurrentUASs"},
    dsx1currentcsss{YType::uint32, "dsx1CurrentCSSs"},
    dsx1currentpcvs{YType::uint32, "dsx1CurrentPCVs"},
    dsx1currentless{YType::uint32, "dsx1CurrentLESs"},
    dsx1currentbess{YType::uint32, "dsx1CurrentBESs"},
    dsx1currentdms{YType::uint32, "dsx1CurrentDMs"},
    dsx1currentlcvs{YType::uint32, "dsx1CurrentLCVs"}
{

    yang_name = "dsx1CurrentEntry"; yang_parent_name = "dsx1CurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::~Dsx1CurrentEntry()
{
}

bool DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1currentindex.is_set
	|| dsx1currentess.is_set
	|| dsx1currentsess.is_set
	|| dsx1currentsefss.is_set
	|| dsx1currentuass.is_set
	|| dsx1currentcsss.is_set
	|| dsx1currentpcvs.is_set
	|| dsx1currentless.is_set
	|| dsx1currentbess.is_set
	|| dsx1currentdms.is_set
	|| dsx1currentlcvs.is_set;
}

bool DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1currentindex.yfilter)
	|| ydk::is_set(dsx1currentess.yfilter)
	|| ydk::is_set(dsx1currentsess.yfilter)
	|| ydk::is_set(dsx1currentsefss.yfilter)
	|| ydk::is_set(dsx1currentuass.yfilter)
	|| ydk::is_set(dsx1currentcsss.yfilter)
	|| ydk::is_set(dsx1currentpcvs.yfilter)
	|| ydk::is_set(dsx1currentless.yfilter)
	|| ydk::is_set(dsx1currentbess.yfilter)
	|| ydk::is_set(dsx1currentdms.yfilter)
	|| ydk::is_set(dsx1currentlcvs.yfilter);
}

std::string DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1CurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1CurrentEntry";
    ADD_KEY_TOKEN(dsx1currentindex, "dsx1CurrentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1currentindex.is_set || is_set(dsx1currentindex.yfilter)) leaf_name_data.push_back(dsx1currentindex.get_name_leafdata());
    if (dsx1currentess.is_set || is_set(dsx1currentess.yfilter)) leaf_name_data.push_back(dsx1currentess.get_name_leafdata());
    if (dsx1currentsess.is_set || is_set(dsx1currentsess.yfilter)) leaf_name_data.push_back(dsx1currentsess.get_name_leafdata());
    if (dsx1currentsefss.is_set || is_set(dsx1currentsefss.yfilter)) leaf_name_data.push_back(dsx1currentsefss.get_name_leafdata());
    if (dsx1currentuass.is_set || is_set(dsx1currentuass.yfilter)) leaf_name_data.push_back(dsx1currentuass.get_name_leafdata());
    if (dsx1currentcsss.is_set || is_set(dsx1currentcsss.yfilter)) leaf_name_data.push_back(dsx1currentcsss.get_name_leafdata());
    if (dsx1currentpcvs.is_set || is_set(dsx1currentpcvs.yfilter)) leaf_name_data.push_back(dsx1currentpcvs.get_name_leafdata());
    if (dsx1currentless.is_set || is_set(dsx1currentless.yfilter)) leaf_name_data.push_back(dsx1currentless.get_name_leafdata());
    if (dsx1currentbess.is_set || is_set(dsx1currentbess.yfilter)) leaf_name_data.push_back(dsx1currentbess.get_name_leafdata());
    if (dsx1currentdms.is_set || is_set(dsx1currentdms.yfilter)) leaf_name_data.push_back(dsx1currentdms.get_name_leafdata());
    if (dsx1currentlcvs.is_set || is_set(dsx1currentlcvs.yfilter)) leaf_name_data.push_back(dsx1currentlcvs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1CurrentIndex")
    {
        dsx1currentindex = value;
        dsx1currentindex.value_namespace = name_space;
        dsx1currentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentESs")
    {
        dsx1currentess = value;
        dsx1currentess.value_namespace = name_space;
        dsx1currentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentSESs")
    {
        dsx1currentsess = value;
        dsx1currentsess.value_namespace = name_space;
        dsx1currentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentSEFSs")
    {
        dsx1currentsefss = value;
        dsx1currentsefss.value_namespace = name_space;
        dsx1currentsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentUASs")
    {
        dsx1currentuass = value;
        dsx1currentuass.value_namespace = name_space;
        dsx1currentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentCSSs")
    {
        dsx1currentcsss = value;
        dsx1currentcsss.value_namespace = name_space;
        dsx1currentcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentPCVs")
    {
        dsx1currentpcvs = value;
        dsx1currentpcvs.value_namespace = name_space;
        dsx1currentpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentLESs")
    {
        dsx1currentless = value;
        dsx1currentless.value_namespace = name_space;
        dsx1currentless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentBESs")
    {
        dsx1currentbess = value;
        dsx1currentbess.value_namespace = name_space;
        dsx1currentbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentDMs")
    {
        dsx1currentdms = value;
        dsx1currentdms.value_namespace = name_space;
        dsx1currentdms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1CurrentLCVs")
    {
        dsx1currentlcvs = value;
        dsx1currentlcvs.value_namespace = name_space;
        dsx1currentlcvs.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1CurrentIndex")
    {
        dsx1currentindex.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentESs")
    {
        dsx1currentess.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentSESs")
    {
        dsx1currentsess.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentSEFSs")
    {
        dsx1currentsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentUASs")
    {
        dsx1currentuass.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentCSSs")
    {
        dsx1currentcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentPCVs")
    {
        dsx1currentpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentLESs")
    {
        dsx1currentless.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentBESs")
    {
        dsx1currentbess.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentDMs")
    {
        dsx1currentdms.yfilter = yfilter;
    }
    if(value_path == "dsx1CurrentLCVs")
    {
        dsx1currentlcvs.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1CurrentIndex" || name == "dsx1CurrentESs" || name == "dsx1CurrentSESs" || name == "dsx1CurrentSEFSs" || name == "dsx1CurrentUASs" || name == "dsx1CurrentCSSs" || name == "dsx1CurrentPCVs" || name == "dsx1CurrentLESs" || name == "dsx1CurrentBESs" || name == "dsx1CurrentDMs" || name == "dsx1CurrentLCVs")
        return true;
    return false;
}

DS1MIB::Dsx1IntervalTable::Dsx1IntervalTable()
    :
    dsx1intervalentry(this, {"dsx1intervalindex", "dsx1intervalnumber"})
{

    yang_name = "dsx1IntervalTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1IntervalTable::~Dsx1IntervalTable()
{
}

bool DS1MIB::Dsx1IntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1intervalentry.len(); index++)
    {
        if(dsx1intervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1IntervalTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1intervalentry.len(); index++)
    {
        if(dsx1intervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1IntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1IntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1IntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1IntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1IntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1IntervalEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry>();
        c->parent = this;
        dsx1intervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1IntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1intervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1IntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1IntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1IntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1IntervalEntry")
        return true;
    return false;
}

DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::Dsx1IntervalEntry()
    :
    dsx1intervalindex{YType::int32, "dsx1IntervalIndex"},
    dsx1intervalnumber{YType::int32, "dsx1IntervalNumber"},
    dsx1intervaless{YType::uint32, "dsx1IntervalESs"},
    dsx1intervalsess{YType::uint32, "dsx1IntervalSESs"},
    dsx1intervalsefss{YType::uint32, "dsx1IntervalSEFSs"},
    dsx1intervaluass{YType::uint32, "dsx1IntervalUASs"},
    dsx1intervalcsss{YType::uint32, "dsx1IntervalCSSs"},
    dsx1intervalpcvs{YType::uint32, "dsx1IntervalPCVs"},
    dsx1intervalless{YType::uint32, "dsx1IntervalLESs"},
    dsx1intervalbess{YType::uint32, "dsx1IntervalBESs"},
    dsx1intervaldms{YType::uint32, "dsx1IntervalDMs"},
    dsx1intervallcvs{YType::uint32, "dsx1IntervalLCVs"},
    dsx1intervalvaliddata{YType::boolean, "dsx1IntervalValidData"}
{

    yang_name = "dsx1IntervalEntry"; yang_parent_name = "dsx1IntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::~Dsx1IntervalEntry()
{
}

bool DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1intervalindex.is_set
	|| dsx1intervalnumber.is_set
	|| dsx1intervaless.is_set
	|| dsx1intervalsess.is_set
	|| dsx1intervalsefss.is_set
	|| dsx1intervaluass.is_set
	|| dsx1intervalcsss.is_set
	|| dsx1intervalpcvs.is_set
	|| dsx1intervalless.is_set
	|| dsx1intervalbess.is_set
	|| dsx1intervaldms.is_set
	|| dsx1intervallcvs.is_set
	|| dsx1intervalvaliddata.is_set;
}

bool DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1intervalindex.yfilter)
	|| ydk::is_set(dsx1intervalnumber.yfilter)
	|| ydk::is_set(dsx1intervaless.yfilter)
	|| ydk::is_set(dsx1intervalsess.yfilter)
	|| ydk::is_set(dsx1intervalsefss.yfilter)
	|| ydk::is_set(dsx1intervaluass.yfilter)
	|| ydk::is_set(dsx1intervalcsss.yfilter)
	|| ydk::is_set(dsx1intervalpcvs.yfilter)
	|| ydk::is_set(dsx1intervalless.yfilter)
	|| ydk::is_set(dsx1intervalbess.yfilter)
	|| ydk::is_set(dsx1intervaldms.yfilter)
	|| ydk::is_set(dsx1intervallcvs.yfilter)
	|| ydk::is_set(dsx1intervalvaliddata.yfilter);
}

std::string DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1IntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1IntervalEntry";
    ADD_KEY_TOKEN(dsx1intervalindex, "dsx1IntervalIndex");
    ADD_KEY_TOKEN(dsx1intervalnumber, "dsx1IntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1intervalindex.is_set || is_set(dsx1intervalindex.yfilter)) leaf_name_data.push_back(dsx1intervalindex.get_name_leafdata());
    if (dsx1intervalnumber.is_set || is_set(dsx1intervalnumber.yfilter)) leaf_name_data.push_back(dsx1intervalnumber.get_name_leafdata());
    if (dsx1intervaless.is_set || is_set(dsx1intervaless.yfilter)) leaf_name_data.push_back(dsx1intervaless.get_name_leafdata());
    if (dsx1intervalsess.is_set || is_set(dsx1intervalsess.yfilter)) leaf_name_data.push_back(dsx1intervalsess.get_name_leafdata());
    if (dsx1intervalsefss.is_set || is_set(dsx1intervalsefss.yfilter)) leaf_name_data.push_back(dsx1intervalsefss.get_name_leafdata());
    if (dsx1intervaluass.is_set || is_set(dsx1intervaluass.yfilter)) leaf_name_data.push_back(dsx1intervaluass.get_name_leafdata());
    if (dsx1intervalcsss.is_set || is_set(dsx1intervalcsss.yfilter)) leaf_name_data.push_back(dsx1intervalcsss.get_name_leafdata());
    if (dsx1intervalpcvs.is_set || is_set(dsx1intervalpcvs.yfilter)) leaf_name_data.push_back(dsx1intervalpcvs.get_name_leafdata());
    if (dsx1intervalless.is_set || is_set(dsx1intervalless.yfilter)) leaf_name_data.push_back(dsx1intervalless.get_name_leafdata());
    if (dsx1intervalbess.is_set || is_set(dsx1intervalbess.yfilter)) leaf_name_data.push_back(dsx1intervalbess.get_name_leafdata());
    if (dsx1intervaldms.is_set || is_set(dsx1intervaldms.yfilter)) leaf_name_data.push_back(dsx1intervaldms.get_name_leafdata());
    if (dsx1intervallcvs.is_set || is_set(dsx1intervallcvs.yfilter)) leaf_name_data.push_back(dsx1intervallcvs.get_name_leafdata());
    if (dsx1intervalvaliddata.is_set || is_set(dsx1intervalvaliddata.yfilter)) leaf_name_data.push_back(dsx1intervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1IntervalIndex")
    {
        dsx1intervalindex = value;
        dsx1intervalindex.value_namespace = name_space;
        dsx1intervalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalNumber")
    {
        dsx1intervalnumber = value;
        dsx1intervalnumber.value_namespace = name_space;
        dsx1intervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalESs")
    {
        dsx1intervaless = value;
        dsx1intervaless.value_namespace = name_space;
        dsx1intervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalSESs")
    {
        dsx1intervalsess = value;
        dsx1intervalsess.value_namespace = name_space;
        dsx1intervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalSEFSs")
    {
        dsx1intervalsefss = value;
        dsx1intervalsefss.value_namespace = name_space;
        dsx1intervalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalUASs")
    {
        dsx1intervaluass = value;
        dsx1intervaluass.value_namespace = name_space;
        dsx1intervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalCSSs")
    {
        dsx1intervalcsss = value;
        dsx1intervalcsss.value_namespace = name_space;
        dsx1intervalcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalPCVs")
    {
        dsx1intervalpcvs = value;
        dsx1intervalpcvs.value_namespace = name_space;
        dsx1intervalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalLESs")
    {
        dsx1intervalless = value;
        dsx1intervalless.value_namespace = name_space;
        dsx1intervalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalBESs")
    {
        dsx1intervalbess = value;
        dsx1intervalbess.value_namespace = name_space;
        dsx1intervalbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalDMs")
    {
        dsx1intervaldms = value;
        dsx1intervaldms.value_namespace = name_space;
        dsx1intervaldms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalLCVs")
    {
        dsx1intervallcvs = value;
        dsx1intervallcvs.value_namespace = name_space;
        dsx1intervallcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1IntervalValidData")
    {
        dsx1intervalvaliddata = value;
        dsx1intervalvaliddata.value_namespace = name_space;
        dsx1intervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1IntervalIndex")
    {
        dsx1intervalindex.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalNumber")
    {
        dsx1intervalnumber.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalESs")
    {
        dsx1intervaless.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalSESs")
    {
        dsx1intervalsess.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalSEFSs")
    {
        dsx1intervalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalUASs")
    {
        dsx1intervaluass.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalCSSs")
    {
        dsx1intervalcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalPCVs")
    {
        dsx1intervalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalLESs")
    {
        dsx1intervalless.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalBESs")
    {
        dsx1intervalbess.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalDMs")
    {
        dsx1intervaldms.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalLCVs")
    {
        dsx1intervallcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1IntervalValidData")
    {
        dsx1intervalvaliddata.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1IntervalIndex" || name == "dsx1IntervalNumber" || name == "dsx1IntervalESs" || name == "dsx1IntervalSESs" || name == "dsx1IntervalSEFSs" || name == "dsx1IntervalUASs" || name == "dsx1IntervalCSSs" || name == "dsx1IntervalPCVs" || name == "dsx1IntervalLESs" || name == "dsx1IntervalBESs" || name == "dsx1IntervalDMs" || name == "dsx1IntervalLCVs" || name == "dsx1IntervalValidData")
        return true;
    return false;
}

DS1MIB::Dsx1TotalTable::Dsx1TotalTable()
    :
    dsx1totalentry(this, {"dsx1totalindex"})
{

    yang_name = "dsx1TotalTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1TotalTable::~Dsx1TotalTable()
{
}

bool DS1MIB::Dsx1TotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1totalentry.len(); index++)
    {
        if(dsx1totalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1TotalTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1totalentry.len(); index++)
    {
        if(dsx1totalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1TotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1TotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1TotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1TotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1TotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1TotalEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1TotalTable::Dsx1TotalEntry>();
        c->parent = this;
        dsx1totalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1TotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1totalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1TotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1TotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1TotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1TotalEntry")
        return true;
    return false;
}

DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::Dsx1TotalEntry()
    :
    dsx1totalindex{YType::int32, "dsx1TotalIndex"},
    dsx1totaless{YType::uint32, "dsx1TotalESs"},
    dsx1totalsess{YType::uint32, "dsx1TotalSESs"},
    dsx1totalsefss{YType::uint32, "dsx1TotalSEFSs"},
    dsx1totaluass{YType::uint32, "dsx1TotalUASs"},
    dsx1totalcsss{YType::uint32, "dsx1TotalCSSs"},
    dsx1totalpcvs{YType::uint32, "dsx1TotalPCVs"},
    dsx1totalless{YType::uint32, "dsx1TotalLESs"},
    dsx1totalbess{YType::uint32, "dsx1TotalBESs"},
    dsx1totaldms{YType::uint32, "dsx1TotalDMs"},
    dsx1totallcvs{YType::uint32, "dsx1TotalLCVs"}
{

    yang_name = "dsx1TotalEntry"; yang_parent_name = "dsx1TotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::~Dsx1TotalEntry()
{
}

bool DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1totalindex.is_set
	|| dsx1totaless.is_set
	|| dsx1totalsess.is_set
	|| dsx1totalsefss.is_set
	|| dsx1totaluass.is_set
	|| dsx1totalcsss.is_set
	|| dsx1totalpcvs.is_set
	|| dsx1totalless.is_set
	|| dsx1totalbess.is_set
	|| dsx1totaldms.is_set
	|| dsx1totallcvs.is_set;
}

bool DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1totalindex.yfilter)
	|| ydk::is_set(dsx1totaless.yfilter)
	|| ydk::is_set(dsx1totalsess.yfilter)
	|| ydk::is_set(dsx1totalsefss.yfilter)
	|| ydk::is_set(dsx1totaluass.yfilter)
	|| ydk::is_set(dsx1totalcsss.yfilter)
	|| ydk::is_set(dsx1totalpcvs.yfilter)
	|| ydk::is_set(dsx1totalless.yfilter)
	|| ydk::is_set(dsx1totalbess.yfilter)
	|| ydk::is_set(dsx1totaldms.yfilter)
	|| ydk::is_set(dsx1totallcvs.yfilter);
}

std::string DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1TotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1TotalEntry";
    ADD_KEY_TOKEN(dsx1totalindex, "dsx1TotalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1totalindex.is_set || is_set(dsx1totalindex.yfilter)) leaf_name_data.push_back(dsx1totalindex.get_name_leafdata());
    if (dsx1totaless.is_set || is_set(dsx1totaless.yfilter)) leaf_name_data.push_back(dsx1totaless.get_name_leafdata());
    if (dsx1totalsess.is_set || is_set(dsx1totalsess.yfilter)) leaf_name_data.push_back(dsx1totalsess.get_name_leafdata());
    if (dsx1totalsefss.is_set || is_set(dsx1totalsefss.yfilter)) leaf_name_data.push_back(dsx1totalsefss.get_name_leafdata());
    if (dsx1totaluass.is_set || is_set(dsx1totaluass.yfilter)) leaf_name_data.push_back(dsx1totaluass.get_name_leafdata());
    if (dsx1totalcsss.is_set || is_set(dsx1totalcsss.yfilter)) leaf_name_data.push_back(dsx1totalcsss.get_name_leafdata());
    if (dsx1totalpcvs.is_set || is_set(dsx1totalpcvs.yfilter)) leaf_name_data.push_back(dsx1totalpcvs.get_name_leafdata());
    if (dsx1totalless.is_set || is_set(dsx1totalless.yfilter)) leaf_name_data.push_back(dsx1totalless.get_name_leafdata());
    if (dsx1totalbess.is_set || is_set(dsx1totalbess.yfilter)) leaf_name_data.push_back(dsx1totalbess.get_name_leafdata());
    if (dsx1totaldms.is_set || is_set(dsx1totaldms.yfilter)) leaf_name_data.push_back(dsx1totaldms.get_name_leafdata());
    if (dsx1totallcvs.is_set || is_set(dsx1totallcvs.yfilter)) leaf_name_data.push_back(dsx1totallcvs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1TotalIndex")
    {
        dsx1totalindex = value;
        dsx1totalindex.value_namespace = name_space;
        dsx1totalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalESs")
    {
        dsx1totaless = value;
        dsx1totaless.value_namespace = name_space;
        dsx1totaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalSESs")
    {
        dsx1totalsess = value;
        dsx1totalsess.value_namespace = name_space;
        dsx1totalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalSEFSs")
    {
        dsx1totalsefss = value;
        dsx1totalsefss.value_namespace = name_space;
        dsx1totalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalUASs")
    {
        dsx1totaluass = value;
        dsx1totaluass.value_namespace = name_space;
        dsx1totaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalCSSs")
    {
        dsx1totalcsss = value;
        dsx1totalcsss.value_namespace = name_space;
        dsx1totalcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalPCVs")
    {
        dsx1totalpcvs = value;
        dsx1totalpcvs.value_namespace = name_space;
        dsx1totalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalLESs")
    {
        dsx1totalless = value;
        dsx1totalless.value_namespace = name_space;
        dsx1totalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalBESs")
    {
        dsx1totalbess = value;
        dsx1totalbess.value_namespace = name_space;
        dsx1totalbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalDMs")
    {
        dsx1totaldms = value;
        dsx1totaldms.value_namespace = name_space;
        dsx1totaldms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1TotalLCVs")
    {
        dsx1totallcvs = value;
        dsx1totallcvs.value_namespace = name_space;
        dsx1totallcvs.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1TotalIndex")
    {
        dsx1totalindex.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalESs")
    {
        dsx1totaless.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalSESs")
    {
        dsx1totalsess.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalSEFSs")
    {
        dsx1totalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalUASs")
    {
        dsx1totaluass.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalCSSs")
    {
        dsx1totalcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalPCVs")
    {
        dsx1totalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalLESs")
    {
        dsx1totalless.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalBESs")
    {
        dsx1totalbess.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalDMs")
    {
        dsx1totaldms.yfilter = yfilter;
    }
    if(value_path == "dsx1TotalLCVs")
    {
        dsx1totallcvs.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1TotalTable::Dsx1TotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1TotalIndex" || name == "dsx1TotalESs" || name == "dsx1TotalSESs" || name == "dsx1TotalSEFSs" || name == "dsx1TotalUASs" || name == "dsx1TotalCSSs" || name == "dsx1TotalPCVs" || name == "dsx1TotalLESs" || name == "dsx1TotalBESs" || name == "dsx1TotalDMs" || name == "dsx1TotalLCVs")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentTable()
    :
    dsx1farendcurrententry(this, {"dsx1farendcurrentindex"})
{

    yang_name = "dsx1FarEndCurrentTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndCurrentTable::~Dsx1FarEndCurrentTable()
{
}

bool DS1MIB::Dsx1FarEndCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1farendcurrententry.len(); index++)
    {
        if(dsx1farendcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1FarEndCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendcurrententry.len(); index++)
    {
        if(dsx1farendcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1FarEndCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndCurrentEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry>();
        c->parent = this;
        dsx1farendcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1farendcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1FarEndCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1FarEndCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1FarEndCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndCurrentEntry")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::Dsx1FarEndCurrentEntry()
    :
    dsx1farendcurrentindex{YType::int32, "dsx1FarEndCurrentIndex"},
    dsx1farendtimeelapsed{YType::int32, "dsx1FarEndTimeElapsed"},
    dsx1farendvalidintervals{YType::int32, "dsx1FarEndValidIntervals"},
    dsx1farendcurrentess{YType::uint32, "dsx1FarEndCurrentESs"},
    dsx1farendcurrentsess{YType::uint32, "dsx1FarEndCurrentSESs"},
    dsx1farendcurrentsefss{YType::uint32, "dsx1FarEndCurrentSEFSs"},
    dsx1farendcurrentuass{YType::uint32, "dsx1FarEndCurrentUASs"},
    dsx1farendcurrentcsss{YType::uint32, "dsx1FarEndCurrentCSSs"},
    dsx1farendcurrentless{YType::uint32, "dsx1FarEndCurrentLESs"},
    dsx1farendcurrentpcvs{YType::uint32, "dsx1FarEndCurrentPCVs"},
    dsx1farendcurrentbess{YType::uint32, "dsx1FarEndCurrentBESs"},
    dsx1farendcurrentdms{YType::uint32, "dsx1FarEndCurrentDMs"},
    dsx1farendinvalidintervals{YType::int32, "dsx1FarEndInvalidIntervals"}
{

    yang_name = "dsx1FarEndCurrentEntry"; yang_parent_name = "dsx1FarEndCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::~Dsx1FarEndCurrentEntry()
{
}

bool DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1farendcurrentindex.is_set
	|| dsx1farendtimeelapsed.is_set
	|| dsx1farendvalidintervals.is_set
	|| dsx1farendcurrentess.is_set
	|| dsx1farendcurrentsess.is_set
	|| dsx1farendcurrentsefss.is_set
	|| dsx1farendcurrentuass.is_set
	|| dsx1farendcurrentcsss.is_set
	|| dsx1farendcurrentless.is_set
	|| dsx1farendcurrentpcvs.is_set
	|| dsx1farendcurrentbess.is_set
	|| dsx1farendcurrentdms.is_set
	|| dsx1farendinvalidintervals.is_set;
}

bool DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1farendcurrentindex.yfilter)
	|| ydk::is_set(dsx1farendtimeelapsed.yfilter)
	|| ydk::is_set(dsx1farendvalidintervals.yfilter)
	|| ydk::is_set(dsx1farendcurrentess.yfilter)
	|| ydk::is_set(dsx1farendcurrentsess.yfilter)
	|| ydk::is_set(dsx1farendcurrentsefss.yfilter)
	|| ydk::is_set(dsx1farendcurrentuass.yfilter)
	|| ydk::is_set(dsx1farendcurrentcsss.yfilter)
	|| ydk::is_set(dsx1farendcurrentless.yfilter)
	|| ydk::is_set(dsx1farendcurrentpcvs.yfilter)
	|| ydk::is_set(dsx1farendcurrentbess.yfilter)
	|| ydk::is_set(dsx1farendcurrentdms.yfilter)
	|| ydk::is_set(dsx1farendinvalidintervals.yfilter);
}

std::string DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndCurrentEntry";
    ADD_KEY_TOKEN(dsx1farendcurrentindex, "dsx1FarEndCurrentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendcurrentindex.is_set || is_set(dsx1farendcurrentindex.yfilter)) leaf_name_data.push_back(dsx1farendcurrentindex.get_name_leafdata());
    if (dsx1farendtimeelapsed.is_set || is_set(dsx1farendtimeelapsed.yfilter)) leaf_name_data.push_back(dsx1farendtimeelapsed.get_name_leafdata());
    if (dsx1farendvalidintervals.is_set || is_set(dsx1farendvalidintervals.yfilter)) leaf_name_data.push_back(dsx1farendvalidintervals.get_name_leafdata());
    if (dsx1farendcurrentess.is_set || is_set(dsx1farendcurrentess.yfilter)) leaf_name_data.push_back(dsx1farendcurrentess.get_name_leafdata());
    if (dsx1farendcurrentsess.is_set || is_set(dsx1farendcurrentsess.yfilter)) leaf_name_data.push_back(dsx1farendcurrentsess.get_name_leafdata());
    if (dsx1farendcurrentsefss.is_set || is_set(dsx1farendcurrentsefss.yfilter)) leaf_name_data.push_back(dsx1farendcurrentsefss.get_name_leafdata());
    if (dsx1farendcurrentuass.is_set || is_set(dsx1farendcurrentuass.yfilter)) leaf_name_data.push_back(dsx1farendcurrentuass.get_name_leafdata());
    if (dsx1farendcurrentcsss.is_set || is_set(dsx1farendcurrentcsss.yfilter)) leaf_name_data.push_back(dsx1farendcurrentcsss.get_name_leafdata());
    if (dsx1farendcurrentless.is_set || is_set(dsx1farendcurrentless.yfilter)) leaf_name_data.push_back(dsx1farendcurrentless.get_name_leafdata());
    if (dsx1farendcurrentpcvs.is_set || is_set(dsx1farendcurrentpcvs.yfilter)) leaf_name_data.push_back(dsx1farendcurrentpcvs.get_name_leafdata());
    if (dsx1farendcurrentbess.is_set || is_set(dsx1farendcurrentbess.yfilter)) leaf_name_data.push_back(dsx1farendcurrentbess.get_name_leafdata());
    if (dsx1farendcurrentdms.is_set || is_set(dsx1farendcurrentdms.yfilter)) leaf_name_data.push_back(dsx1farendcurrentdms.get_name_leafdata());
    if (dsx1farendinvalidintervals.is_set || is_set(dsx1farendinvalidintervals.yfilter)) leaf_name_data.push_back(dsx1farendinvalidintervals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1FarEndCurrentIndex")
    {
        dsx1farendcurrentindex = value;
        dsx1farendcurrentindex.value_namespace = name_space;
        dsx1farendcurrentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTimeElapsed")
    {
        dsx1farendtimeelapsed = value;
        dsx1farendtimeelapsed.value_namespace = name_space;
        dsx1farendtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndValidIntervals")
    {
        dsx1farendvalidintervals = value;
        dsx1farendvalidintervals.value_namespace = name_space;
        dsx1farendvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentESs")
    {
        dsx1farendcurrentess = value;
        dsx1farendcurrentess.value_namespace = name_space;
        dsx1farendcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentSESs")
    {
        dsx1farendcurrentsess = value;
        dsx1farendcurrentsess.value_namespace = name_space;
        dsx1farendcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentSEFSs")
    {
        dsx1farendcurrentsefss = value;
        dsx1farendcurrentsefss.value_namespace = name_space;
        dsx1farendcurrentsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentUASs")
    {
        dsx1farendcurrentuass = value;
        dsx1farendcurrentuass.value_namespace = name_space;
        dsx1farendcurrentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentCSSs")
    {
        dsx1farendcurrentcsss = value;
        dsx1farendcurrentcsss.value_namespace = name_space;
        dsx1farendcurrentcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentLESs")
    {
        dsx1farendcurrentless = value;
        dsx1farendcurrentless.value_namespace = name_space;
        dsx1farendcurrentless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentPCVs")
    {
        dsx1farendcurrentpcvs = value;
        dsx1farendcurrentpcvs.value_namespace = name_space;
        dsx1farendcurrentpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentBESs")
    {
        dsx1farendcurrentbess = value;
        dsx1farendcurrentbess.value_namespace = name_space;
        dsx1farendcurrentbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndCurrentDMs")
    {
        dsx1farendcurrentdms = value;
        dsx1farendcurrentdms.value_namespace = name_space;
        dsx1farendcurrentdms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndInvalidIntervals")
    {
        dsx1farendinvalidintervals = value;
        dsx1farendinvalidintervals.value_namespace = name_space;
        dsx1farendinvalidintervals.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1FarEndCurrentIndex")
    {
        dsx1farendcurrentindex.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTimeElapsed")
    {
        dsx1farendtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndValidIntervals")
    {
        dsx1farendvalidintervals.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentESs")
    {
        dsx1farendcurrentess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentSESs")
    {
        dsx1farendcurrentsess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentSEFSs")
    {
        dsx1farendcurrentsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentUASs")
    {
        dsx1farendcurrentuass.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentCSSs")
    {
        dsx1farendcurrentcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentLESs")
    {
        dsx1farendcurrentless.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentPCVs")
    {
        dsx1farendcurrentpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentBESs")
    {
        dsx1farendcurrentbess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndCurrentDMs")
    {
        dsx1farendcurrentdms.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndInvalidIntervals")
    {
        dsx1farendinvalidintervals.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndCurrentIndex" || name == "dsx1FarEndTimeElapsed" || name == "dsx1FarEndValidIntervals" || name == "dsx1FarEndCurrentESs" || name == "dsx1FarEndCurrentSESs" || name == "dsx1FarEndCurrentSEFSs" || name == "dsx1FarEndCurrentUASs" || name == "dsx1FarEndCurrentCSSs" || name == "dsx1FarEndCurrentLESs" || name == "dsx1FarEndCurrentPCVs" || name == "dsx1FarEndCurrentBESs" || name == "dsx1FarEndCurrentDMs" || name == "dsx1FarEndInvalidIntervals")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalTable()
    :
    dsx1farendintervalentry(this, {"dsx1farendintervalindex", "dsx1farendintervalnumber"})
{

    yang_name = "dsx1FarEndIntervalTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndIntervalTable::~Dsx1FarEndIntervalTable()
{
}

bool DS1MIB::Dsx1FarEndIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1farendintervalentry.len(); index++)
    {
        if(dsx1farendintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1FarEndIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendintervalentry.len(); index++)
    {
        if(dsx1farendintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1FarEndIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndIntervalEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry>();
        c->parent = this;
        dsx1farendintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1farendintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1FarEndIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1FarEndIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1FarEndIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndIntervalEntry")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::Dsx1FarEndIntervalEntry()
    :
    dsx1farendintervalindex{YType::int32, "dsx1FarEndIntervalIndex"},
    dsx1farendintervalnumber{YType::int32, "dsx1FarEndIntervalNumber"},
    dsx1farendintervaless{YType::uint32, "dsx1FarEndIntervalESs"},
    dsx1farendintervalsess{YType::uint32, "dsx1FarEndIntervalSESs"},
    dsx1farendintervalsefss{YType::uint32, "dsx1FarEndIntervalSEFSs"},
    dsx1farendintervaluass{YType::uint32, "dsx1FarEndIntervalUASs"},
    dsx1farendintervalcsss{YType::uint32, "dsx1FarEndIntervalCSSs"},
    dsx1farendintervalless{YType::uint32, "dsx1FarEndIntervalLESs"},
    dsx1farendintervalpcvs{YType::uint32, "dsx1FarEndIntervalPCVs"},
    dsx1farendintervalbess{YType::uint32, "dsx1FarEndIntervalBESs"},
    dsx1farendintervaldms{YType::uint32, "dsx1FarEndIntervalDMs"},
    dsx1farendintervalvaliddata{YType::boolean, "dsx1FarEndIntervalValidData"}
{

    yang_name = "dsx1FarEndIntervalEntry"; yang_parent_name = "dsx1FarEndIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::~Dsx1FarEndIntervalEntry()
{
}

bool DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1farendintervalindex.is_set
	|| dsx1farendintervalnumber.is_set
	|| dsx1farendintervaless.is_set
	|| dsx1farendintervalsess.is_set
	|| dsx1farendintervalsefss.is_set
	|| dsx1farendintervaluass.is_set
	|| dsx1farendintervalcsss.is_set
	|| dsx1farendintervalless.is_set
	|| dsx1farendintervalpcvs.is_set
	|| dsx1farendintervalbess.is_set
	|| dsx1farendintervaldms.is_set
	|| dsx1farendintervalvaliddata.is_set;
}

bool DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1farendintervalindex.yfilter)
	|| ydk::is_set(dsx1farendintervalnumber.yfilter)
	|| ydk::is_set(dsx1farendintervaless.yfilter)
	|| ydk::is_set(dsx1farendintervalsess.yfilter)
	|| ydk::is_set(dsx1farendintervalsefss.yfilter)
	|| ydk::is_set(dsx1farendintervaluass.yfilter)
	|| ydk::is_set(dsx1farendintervalcsss.yfilter)
	|| ydk::is_set(dsx1farendintervalless.yfilter)
	|| ydk::is_set(dsx1farendintervalpcvs.yfilter)
	|| ydk::is_set(dsx1farendintervalbess.yfilter)
	|| ydk::is_set(dsx1farendintervaldms.yfilter)
	|| ydk::is_set(dsx1farendintervalvaliddata.yfilter);
}

std::string DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndIntervalEntry";
    ADD_KEY_TOKEN(dsx1farendintervalindex, "dsx1FarEndIntervalIndex");
    ADD_KEY_TOKEN(dsx1farendintervalnumber, "dsx1FarEndIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendintervalindex.is_set || is_set(dsx1farendintervalindex.yfilter)) leaf_name_data.push_back(dsx1farendintervalindex.get_name_leafdata());
    if (dsx1farendintervalnumber.is_set || is_set(dsx1farendintervalnumber.yfilter)) leaf_name_data.push_back(dsx1farendintervalnumber.get_name_leafdata());
    if (dsx1farendintervaless.is_set || is_set(dsx1farendintervaless.yfilter)) leaf_name_data.push_back(dsx1farendintervaless.get_name_leafdata());
    if (dsx1farendintervalsess.is_set || is_set(dsx1farendintervalsess.yfilter)) leaf_name_data.push_back(dsx1farendintervalsess.get_name_leafdata());
    if (dsx1farendintervalsefss.is_set || is_set(dsx1farendintervalsefss.yfilter)) leaf_name_data.push_back(dsx1farendintervalsefss.get_name_leafdata());
    if (dsx1farendintervaluass.is_set || is_set(dsx1farendintervaluass.yfilter)) leaf_name_data.push_back(dsx1farendintervaluass.get_name_leafdata());
    if (dsx1farendintervalcsss.is_set || is_set(dsx1farendintervalcsss.yfilter)) leaf_name_data.push_back(dsx1farendintervalcsss.get_name_leafdata());
    if (dsx1farendintervalless.is_set || is_set(dsx1farendintervalless.yfilter)) leaf_name_data.push_back(dsx1farendintervalless.get_name_leafdata());
    if (dsx1farendintervalpcvs.is_set || is_set(dsx1farendintervalpcvs.yfilter)) leaf_name_data.push_back(dsx1farendintervalpcvs.get_name_leafdata());
    if (dsx1farendintervalbess.is_set || is_set(dsx1farendintervalbess.yfilter)) leaf_name_data.push_back(dsx1farendintervalbess.get_name_leafdata());
    if (dsx1farendintervaldms.is_set || is_set(dsx1farendintervaldms.yfilter)) leaf_name_data.push_back(dsx1farendintervaldms.get_name_leafdata());
    if (dsx1farendintervalvaliddata.is_set || is_set(dsx1farendintervalvaliddata.yfilter)) leaf_name_data.push_back(dsx1farendintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1FarEndIntervalIndex")
    {
        dsx1farendintervalindex = value;
        dsx1farendintervalindex.value_namespace = name_space;
        dsx1farendintervalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalNumber")
    {
        dsx1farendintervalnumber = value;
        dsx1farendintervalnumber.value_namespace = name_space;
        dsx1farendintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalESs")
    {
        dsx1farendintervaless = value;
        dsx1farendintervaless.value_namespace = name_space;
        dsx1farendintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalSESs")
    {
        dsx1farendintervalsess = value;
        dsx1farendintervalsess.value_namespace = name_space;
        dsx1farendintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalSEFSs")
    {
        dsx1farendintervalsefss = value;
        dsx1farendintervalsefss.value_namespace = name_space;
        dsx1farendintervalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalUASs")
    {
        dsx1farendintervaluass = value;
        dsx1farendintervaluass.value_namespace = name_space;
        dsx1farendintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalCSSs")
    {
        dsx1farendintervalcsss = value;
        dsx1farendintervalcsss.value_namespace = name_space;
        dsx1farendintervalcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalLESs")
    {
        dsx1farendintervalless = value;
        dsx1farendintervalless.value_namespace = name_space;
        dsx1farendintervalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalPCVs")
    {
        dsx1farendintervalpcvs = value;
        dsx1farendintervalpcvs.value_namespace = name_space;
        dsx1farendintervalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalBESs")
    {
        dsx1farendintervalbess = value;
        dsx1farendintervalbess.value_namespace = name_space;
        dsx1farendintervalbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalDMs")
    {
        dsx1farendintervaldms = value;
        dsx1farendintervaldms.value_namespace = name_space;
        dsx1farendintervaldms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndIntervalValidData")
    {
        dsx1farendintervalvaliddata = value;
        dsx1farendintervalvaliddata.value_namespace = name_space;
        dsx1farendintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1FarEndIntervalIndex")
    {
        dsx1farendintervalindex.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalNumber")
    {
        dsx1farendintervalnumber.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalESs")
    {
        dsx1farendintervaless.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalSESs")
    {
        dsx1farendintervalsess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalSEFSs")
    {
        dsx1farendintervalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalUASs")
    {
        dsx1farendintervaluass.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalCSSs")
    {
        dsx1farendintervalcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalLESs")
    {
        dsx1farendintervalless.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalPCVs")
    {
        dsx1farendintervalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalBESs")
    {
        dsx1farendintervalbess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalDMs")
    {
        dsx1farendintervaldms.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndIntervalValidData")
    {
        dsx1farendintervalvaliddata.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndIntervalIndex" || name == "dsx1FarEndIntervalNumber" || name == "dsx1FarEndIntervalESs" || name == "dsx1FarEndIntervalSESs" || name == "dsx1FarEndIntervalSEFSs" || name == "dsx1FarEndIntervalUASs" || name == "dsx1FarEndIntervalCSSs" || name == "dsx1FarEndIntervalLESs" || name == "dsx1FarEndIntervalPCVs" || name == "dsx1FarEndIntervalBESs" || name == "dsx1FarEndIntervalDMs" || name == "dsx1FarEndIntervalValidData")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalTable()
    :
    dsx1farendtotalentry(this, {"dsx1farendtotalindex"})
{

    yang_name = "dsx1FarEndTotalTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndTotalTable::~Dsx1FarEndTotalTable()
{
}

bool DS1MIB::Dsx1FarEndTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1farendtotalentry.len(); index++)
    {
        if(dsx1farendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1FarEndTotalTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendtotalentry.len(); index++)
    {
        if(dsx1farendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1FarEndTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndTotalEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry>();
        c->parent = this;
        dsx1farendtotalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1farendtotalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1FarEndTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1FarEndTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1FarEndTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndTotalEntry")
        return true;
    return false;
}

DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::Dsx1FarEndTotalEntry()
    :
    dsx1farendtotalindex{YType::int32, "dsx1FarEndTotalIndex"},
    dsx1farendtotaless{YType::uint32, "dsx1FarEndTotalESs"},
    dsx1farendtotalsess{YType::uint32, "dsx1FarEndTotalSESs"},
    dsx1farendtotalsefss{YType::uint32, "dsx1FarEndTotalSEFSs"},
    dsx1farendtotaluass{YType::uint32, "dsx1FarEndTotalUASs"},
    dsx1farendtotalcsss{YType::uint32, "dsx1FarEndTotalCSSs"},
    dsx1farendtotalless{YType::uint32, "dsx1FarEndTotalLESs"},
    dsx1farendtotalpcvs{YType::uint32, "dsx1FarEndTotalPCVs"},
    dsx1farendtotalbess{YType::uint32, "dsx1FarEndTotalBESs"},
    dsx1farendtotaldms{YType::uint32, "dsx1FarEndTotalDMs"}
{

    yang_name = "dsx1FarEndTotalEntry"; yang_parent_name = "dsx1FarEndTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::~Dsx1FarEndTotalEntry()
{
}

bool DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1farendtotalindex.is_set
	|| dsx1farendtotaless.is_set
	|| dsx1farendtotalsess.is_set
	|| dsx1farendtotalsefss.is_set
	|| dsx1farendtotaluass.is_set
	|| dsx1farendtotalcsss.is_set
	|| dsx1farendtotalless.is_set
	|| dsx1farendtotalpcvs.is_set
	|| dsx1farendtotalbess.is_set
	|| dsx1farendtotaldms.is_set;
}

bool DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1farendtotalindex.yfilter)
	|| ydk::is_set(dsx1farendtotaless.yfilter)
	|| ydk::is_set(dsx1farendtotalsess.yfilter)
	|| ydk::is_set(dsx1farendtotalsefss.yfilter)
	|| ydk::is_set(dsx1farendtotaluass.yfilter)
	|| ydk::is_set(dsx1farendtotalcsss.yfilter)
	|| ydk::is_set(dsx1farendtotalless.yfilter)
	|| ydk::is_set(dsx1farendtotalpcvs.yfilter)
	|| ydk::is_set(dsx1farendtotalbess.yfilter)
	|| ydk::is_set(dsx1farendtotaldms.yfilter);
}

std::string DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndTotalEntry";
    ADD_KEY_TOKEN(dsx1farendtotalindex, "dsx1FarEndTotalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendtotalindex.is_set || is_set(dsx1farendtotalindex.yfilter)) leaf_name_data.push_back(dsx1farendtotalindex.get_name_leafdata());
    if (dsx1farendtotaless.is_set || is_set(dsx1farendtotaless.yfilter)) leaf_name_data.push_back(dsx1farendtotaless.get_name_leafdata());
    if (dsx1farendtotalsess.is_set || is_set(dsx1farendtotalsess.yfilter)) leaf_name_data.push_back(dsx1farendtotalsess.get_name_leafdata());
    if (dsx1farendtotalsefss.is_set || is_set(dsx1farendtotalsefss.yfilter)) leaf_name_data.push_back(dsx1farendtotalsefss.get_name_leafdata());
    if (dsx1farendtotaluass.is_set || is_set(dsx1farendtotaluass.yfilter)) leaf_name_data.push_back(dsx1farendtotaluass.get_name_leafdata());
    if (dsx1farendtotalcsss.is_set || is_set(dsx1farendtotalcsss.yfilter)) leaf_name_data.push_back(dsx1farendtotalcsss.get_name_leafdata());
    if (dsx1farendtotalless.is_set || is_set(dsx1farendtotalless.yfilter)) leaf_name_data.push_back(dsx1farendtotalless.get_name_leafdata());
    if (dsx1farendtotalpcvs.is_set || is_set(dsx1farendtotalpcvs.yfilter)) leaf_name_data.push_back(dsx1farendtotalpcvs.get_name_leafdata());
    if (dsx1farendtotalbess.is_set || is_set(dsx1farendtotalbess.yfilter)) leaf_name_data.push_back(dsx1farendtotalbess.get_name_leafdata());
    if (dsx1farendtotaldms.is_set || is_set(dsx1farendtotaldms.yfilter)) leaf_name_data.push_back(dsx1farendtotaldms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1FarEndTotalIndex")
    {
        dsx1farendtotalindex = value;
        dsx1farendtotalindex.value_namespace = name_space;
        dsx1farendtotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalESs")
    {
        dsx1farendtotaless = value;
        dsx1farendtotaless.value_namespace = name_space;
        dsx1farendtotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalSESs")
    {
        dsx1farendtotalsess = value;
        dsx1farendtotalsess.value_namespace = name_space;
        dsx1farendtotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalSEFSs")
    {
        dsx1farendtotalsefss = value;
        dsx1farendtotalsefss.value_namespace = name_space;
        dsx1farendtotalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalUASs")
    {
        dsx1farendtotaluass = value;
        dsx1farendtotaluass.value_namespace = name_space;
        dsx1farendtotaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalCSSs")
    {
        dsx1farendtotalcsss = value;
        dsx1farendtotalcsss.value_namespace = name_space;
        dsx1farendtotalcsss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalLESs")
    {
        dsx1farendtotalless = value;
        dsx1farendtotalless.value_namespace = name_space;
        dsx1farendtotalless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalPCVs")
    {
        dsx1farendtotalpcvs = value;
        dsx1farendtotalpcvs.value_namespace = name_space;
        dsx1farendtotalpcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalBESs")
    {
        dsx1farendtotalbess = value;
        dsx1farendtotalbess.value_namespace = name_space;
        dsx1farendtotalbess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FarEndTotalDMs")
    {
        dsx1farendtotaldms = value;
        dsx1farendtotaldms.value_namespace = name_space;
        dsx1farendtotaldms.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1FarEndTotalIndex")
    {
        dsx1farendtotalindex.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalESs")
    {
        dsx1farendtotaless.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalSESs")
    {
        dsx1farendtotalsess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalSEFSs")
    {
        dsx1farendtotalsefss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalUASs")
    {
        dsx1farendtotaluass.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalCSSs")
    {
        dsx1farendtotalcsss.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalLESs")
    {
        dsx1farendtotalless.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalPCVs")
    {
        dsx1farendtotalpcvs.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalBESs")
    {
        dsx1farendtotalbess.yfilter = yfilter;
    }
    if(value_path == "dsx1FarEndTotalDMs")
    {
        dsx1farendtotaldms.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FarEndTotalIndex" || name == "dsx1FarEndTotalESs" || name == "dsx1FarEndTotalSESs" || name == "dsx1FarEndTotalSEFSs" || name == "dsx1FarEndTotalUASs" || name == "dsx1FarEndTotalCSSs" || name == "dsx1FarEndTotalLESs" || name == "dsx1FarEndTotalPCVs" || name == "dsx1FarEndTotalBESs" || name == "dsx1FarEndTotalDMs")
        return true;
    return false;
}

DS1MIB::Dsx1FracTable::Dsx1FracTable()
    :
    dsx1fracentry(this, {"dsx1fracindex", "dsx1fracnumber"})
{

    yang_name = "dsx1FracTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FracTable::~Dsx1FracTable()
{
}

bool DS1MIB::Dsx1FracTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1fracentry.len(); index++)
    {
        if(dsx1fracentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1FracTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1fracentry.len(); index++)
    {
        if(dsx1fracentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1FracTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FracTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FracTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FracTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FracTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FracEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1FracTable::Dsx1FracEntry>();
        c->parent = this;
        dsx1fracentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FracTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1fracentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1FracTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1FracTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1FracTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FracEntry")
        return true;
    return false;
}

DS1MIB::Dsx1FracTable::Dsx1FracEntry::Dsx1FracEntry()
    :
    dsx1fracindex{YType::int32, "dsx1FracIndex"},
    dsx1fracnumber{YType::int32, "dsx1FracNumber"},
    dsx1fracifindex{YType::int32, "dsx1FracIfIndex"}
{

    yang_name = "dsx1FracEntry"; yang_parent_name = "dsx1FracTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1FracTable::Dsx1FracEntry::~Dsx1FracEntry()
{
}

bool DS1MIB::Dsx1FracTable::Dsx1FracEntry::has_data() const
{
    if (is_presence_container) return true;
    return dsx1fracindex.is_set
	|| dsx1fracnumber.is_set
	|| dsx1fracifindex.is_set;
}

bool DS1MIB::Dsx1FracTable::Dsx1FracEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dsx1fracindex.yfilter)
	|| ydk::is_set(dsx1fracnumber.yfilter)
	|| ydk::is_set(dsx1fracifindex.yfilter);
}

std::string DS1MIB::Dsx1FracTable::Dsx1FracEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1FracTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1FracTable::Dsx1FracEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FracEntry";
    ADD_KEY_TOKEN(dsx1fracindex, "dsx1FracIndex");
    ADD_KEY_TOKEN(dsx1fracnumber, "dsx1FracNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1FracTable::Dsx1FracEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1fracindex.is_set || is_set(dsx1fracindex.yfilter)) leaf_name_data.push_back(dsx1fracindex.get_name_leafdata());
    if (dsx1fracnumber.is_set || is_set(dsx1fracnumber.yfilter)) leaf_name_data.push_back(dsx1fracnumber.get_name_leafdata());
    if (dsx1fracifindex.is_set || is_set(dsx1fracifindex.yfilter)) leaf_name_data.push_back(dsx1fracifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1FracTable::Dsx1FracEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1FracTable::Dsx1FracEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1FracTable::Dsx1FracEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dsx1FracIndex")
    {
        dsx1fracindex = value;
        dsx1fracindex.value_namespace = name_space;
        dsx1fracindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FracNumber")
    {
        dsx1fracnumber = value;
        dsx1fracnumber.value_namespace = name_space;
        dsx1fracnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1FracIfIndex")
    {
        dsx1fracifindex = value;
        dsx1fracifindex.value_namespace = name_space;
        dsx1fracifindex.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1FracTable::Dsx1FracEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dsx1FracIndex")
    {
        dsx1fracindex.yfilter = yfilter;
    }
    if(value_path == "dsx1FracNumber")
    {
        dsx1fracnumber.yfilter = yfilter;
    }
    if(value_path == "dsx1FracIfIndex")
    {
        dsx1fracifindex.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1FracTable::Dsx1FracEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1FracIndex" || name == "dsx1FracNumber" || name == "dsx1FracIfIndex")
        return true;
    return false;
}

DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingTable()
    :
    dsx1chanmappingentry(this, {"ifindex", "dsx1ds1channelnumber"})
{

    yang_name = "dsx1ChanMappingTable"; yang_parent_name = "DS1-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1ChanMappingTable::~Dsx1ChanMappingTable()
{
}

bool DS1MIB::Dsx1ChanMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dsx1chanmappingentry.len(); index++)
    {
        if(dsx1chanmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool DS1MIB::Dsx1ChanMappingTable::has_operation() const
{
    for (std::size_t index=0; index<dsx1chanmappingentry.len(); index++)
    {
        if(dsx1chanmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DS1MIB::Dsx1ChanMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1ChanMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ChanMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1ChanMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1ChanMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ChanMappingEntry")
    {
        auto c = std::make_shared<DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry>();
        c->parent = this;
        dsx1chanmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1ChanMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dsx1chanmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DS1MIB::Dsx1ChanMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DS1MIB::Dsx1ChanMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DS1MIB::Dsx1ChanMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dsx1ChanMappingEntry")
        return true;
    return false;
}

DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::Dsx1ChanMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    dsx1ds1channelnumber{YType::str, "dsx1Ds1ChannelNumber"},
    dsx1chanmappedifindex{YType::int32, "dsx1ChanMappedIfIndex"}
{

    yang_name = "dsx1ChanMappingEntry"; yang_parent_name = "dsx1ChanMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::~Dsx1ChanMappingEntry()
{
}

bool DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| dsx1ds1channelnumber.is_set
	|| dsx1chanmappedifindex.is_set;
}

bool DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(dsx1ds1channelnumber.yfilter)
	|| ydk::is_set(dsx1chanmappedifindex.yfilter);
}

std::string DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB/dsx1ChanMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ChanMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(dsx1ds1channelnumber, "dsx1Ds1ChannelNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dsx1ds1channelnumber.is_set || is_set(dsx1ds1channelnumber.yfilter)) leaf_name_data.push_back(dsx1ds1channelnumber.get_name_leafdata());
    if (dsx1chanmappedifindex.is_set || is_set(dsx1chanmappedifindex.yfilter)) leaf_name_data.push_back(dsx1chanmappedifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber = value;
        dsx1ds1channelnumber.value_namespace = name_space;
        dsx1ds1channelnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsx1ChanMappedIfIndex")
    {
        dsx1chanmappedifindex = value;
        dsx1chanmappedifindex.value_namespace = name_space;
        dsx1chanmappedifindex.value_namespace_prefix = name_space_prefix;
    }
}

void DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber.yfilter = yfilter;
    }
    if(value_path == "dsx1ChanMappedIfIndex")
    {
        dsx1chanmappedifindex.yfilter = yfilter;
    }
}

bool DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "dsx1Ds1ChannelNumber" || name == "dsx1ChanMappedIfIndex")
        return true;
    return false;
}

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::other {1, "other"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1ESF {2, "dsx1ESF"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1D4 {3, "dsx1D4"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1E1 {4, "dsx1E1"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1E1CRC {5, "dsx1E1CRC"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1E1MF {6, "dsx1E1MF"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1E1CRCMF {7, "dsx1E1CRCMF"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1Unframed {8, "dsx1Unframed"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1E1Unframed {9, "dsx1E1Unframed"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx1DS2M12 {10, "dsx1DS2M12"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType::dsx2E2 {11, "dsx2E2"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1JBZS {1, "dsx1JBZS"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1B8ZS {2, "dsx1B8ZS"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1HDB3 {3, "dsx1HDB3"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1ZBTSI {4, "dsx1ZBTSI"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1AMI {5, "dsx1AMI"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::other {6, "other"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding::dsx1B6ZS {7, "dsx1B6ZS"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendNoCode {1, "dsx1SendNoCode"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendLineCode {2, "dsx1SendLineCode"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendPayloadCode {3, "dsx1SendPayloadCode"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendResetCode {4, "dsx1SendResetCode"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendQRS {5, "dsx1SendQRS"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1Send511Pattern {6, "dsx1Send511Pattern"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1Send3in24Pattern {7, "dsx1Send3in24Pattern"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode::dsx1SendOtherTestPattern {8, "dsx1SendOtherTestPattern"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1NoLoop {1, "dsx1NoLoop"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1PayloadLoop {2, "dsx1PayloadLoop"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1LineLoop {3, "dsx1LineLoop"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1OtherLoop {4, "dsx1OtherLoop"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1InwardLoop {5, "dsx1InwardLoop"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig::dsx1DualLoop {6, "dsx1DualLoop"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode::none {1, "none"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode::robbedBit {2, "robbedBit"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode::bitOriented {3, "bitOriented"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode::messageOriented {4, "messageOriented"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode::other {5, "other"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1TransmitClockSource::loopTiming {1, "loopTiming"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1TransmitClockSource::localTiming {2, "localTiming"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1TransmitClockSource::throughTiming {3, "throughTiming"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineStatusChangeTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineStatusChangeTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1Channelization::disabled {1, "disabled"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1Channelization::enabledDs0 {2, "enabledDs0"};
const Enum::YLeaf DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1Channelization::enabledDs1 {3, "enabledDs1"};


}
}

