
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DS1_MIB.hpp"

namespace ydk {
namespace DS1_MIB {

Ds1Mib::Ds1Mib()
    :
    dsx1chanmappingtable(std::make_shared<Ds1Mib::Dsx1Chanmappingtable>())
	,dsx1configtable(std::make_shared<Ds1Mib::Dsx1Configtable>())
	,dsx1currenttable(std::make_shared<Ds1Mib::Dsx1Currenttable>())
	,dsx1farendcurrenttable(std::make_shared<Ds1Mib::Dsx1Farendcurrenttable>())
	,dsx1farendintervaltable(std::make_shared<Ds1Mib::Dsx1Farendintervaltable>())
	,dsx1farendtotaltable(std::make_shared<Ds1Mib::Dsx1Farendtotaltable>())
	,dsx1fractable(std::make_shared<Ds1Mib::Dsx1Fractable>())
	,dsx1intervaltable(std::make_shared<Ds1Mib::Dsx1Intervaltable>())
	,dsx1totaltable(std::make_shared<Ds1Mib::Dsx1Totaltable>())
{
    dsx1chanmappingtable->parent = this;

    dsx1configtable->parent = this;

    dsx1currenttable->parent = this;

    dsx1farendcurrenttable->parent = this;

    dsx1farendintervaltable->parent = this;

    dsx1farendtotaltable->parent = this;

    dsx1fractable->parent = this;

    dsx1intervaltable->parent = this;

    dsx1totaltable->parent = this;

    yang_name = "DS1-MIB"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::~Ds1Mib()
{
}

bool Ds1Mib::has_data() const
{
    return (dsx1chanmappingtable !=  nullptr && dsx1chanmappingtable->has_data())
	|| (dsx1configtable !=  nullptr && dsx1configtable->has_data())
	|| (dsx1currenttable !=  nullptr && dsx1currenttable->has_data())
	|| (dsx1farendcurrenttable !=  nullptr && dsx1farendcurrenttable->has_data())
	|| (dsx1farendintervaltable !=  nullptr && dsx1farendintervaltable->has_data())
	|| (dsx1farendtotaltable !=  nullptr && dsx1farendtotaltable->has_data())
	|| (dsx1fractable !=  nullptr && dsx1fractable->has_data())
	|| (dsx1intervaltable !=  nullptr && dsx1intervaltable->has_data())
	|| (dsx1totaltable !=  nullptr && dsx1totaltable->has_data());
}

bool Ds1Mib::has_operation() const
{
    return is_set(operation)
	|| (dsx1chanmappingtable !=  nullptr && dsx1chanmappingtable->has_operation())
	|| (dsx1configtable !=  nullptr && dsx1configtable->has_operation())
	|| (dsx1currenttable !=  nullptr && dsx1currenttable->has_operation())
	|| (dsx1farendcurrenttable !=  nullptr && dsx1farendcurrenttable->has_operation())
	|| (dsx1farendintervaltable !=  nullptr && dsx1farendintervaltable->has_operation())
	|| (dsx1farendtotaltable !=  nullptr && dsx1farendtotaltable->has_operation())
	|| (dsx1fractable !=  nullptr && dsx1fractable->has_operation())
	|| (dsx1intervaltable !=  nullptr && dsx1intervaltable->has_operation())
	|| (dsx1totaltable !=  nullptr && dsx1totaltable->has_operation());
}

std::string Ds1Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS1-MIB:DS1-MIB";

    return path_buffer.str();

}

const EntityPath Ds1Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ChanMappingTable")
    {
        if(dsx1chanmappingtable == nullptr)
        {
            dsx1chanmappingtable = std::make_shared<Ds1Mib::Dsx1Chanmappingtable>();
        }
        return dsx1chanmappingtable;
    }

    if(child_yang_name == "dsx1ConfigTable")
    {
        if(dsx1configtable == nullptr)
        {
            dsx1configtable = std::make_shared<Ds1Mib::Dsx1Configtable>();
        }
        return dsx1configtable;
    }

    if(child_yang_name == "dsx1CurrentTable")
    {
        if(dsx1currenttable == nullptr)
        {
            dsx1currenttable = std::make_shared<Ds1Mib::Dsx1Currenttable>();
        }
        return dsx1currenttable;
    }

    if(child_yang_name == "dsx1FarEndCurrentTable")
    {
        if(dsx1farendcurrenttable == nullptr)
        {
            dsx1farendcurrenttable = std::make_shared<Ds1Mib::Dsx1Farendcurrenttable>();
        }
        return dsx1farendcurrenttable;
    }

    if(child_yang_name == "dsx1FarEndIntervalTable")
    {
        if(dsx1farendintervaltable == nullptr)
        {
            dsx1farendintervaltable = std::make_shared<Ds1Mib::Dsx1Farendintervaltable>();
        }
        return dsx1farendintervaltable;
    }

    if(child_yang_name == "dsx1FarEndTotalTable")
    {
        if(dsx1farendtotaltable == nullptr)
        {
            dsx1farendtotaltable = std::make_shared<Ds1Mib::Dsx1Farendtotaltable>();
        }
        return dsx1farendtotaltable;
    }

    if(child_yang_name == "dsx1FracTable")
    {
        if(dsx1fractable == nullptr)
        {
            dsx1fractable = std::make_shared<Ds1Mib::Dsx1Fractable>();
        }
        return dsx1fractable;
    }

    if(child_yang_name == "dsx1IntervalTable")
    {
        if(dsx1intervaltable == nullptr)
        {
            dsx1intervaltable = std::make_shared<Ds1Mib::Dsx1Intervaltable>();
        }
        return dsx1intervaltable;
    }

    if(child_yang_name == "dsx1TotalTable")
    {
        if(dsx1totaltable == nullptr)
        {
            dsx1totaltable = std::make_shared<Ds1Mib::Dsx1Totaltable>();
        }
        return dsx1totaltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dsx1chanmappingtable != nullptr)
    {
        children["dsx1ChanMappingTable"] = dsx1chanmappingtable;
    }

    if(dsx1configtable != nullptr)
    {
        children["dsx1ConfigTable"] = dsx1configtable;
    }

    if(dsx1currenttable != nullptr)
    {
        children["dsx1CurrentTable"] = dsx1currenttable;
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

    if(dsx1intervaltable != nullptr)
    {
        children["dsx1IntervalTable"] = dsx1intervaltable;
    }

    if(dsx1totaltable != nullptr)
    {
        children["dsx1TotalTable"] = dsx1totaltable;
    }

    return children;
}

void Ds1Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ds1Mib::clone_ptr() const
{
    return std::make_shared<Ds1Mib>();
}

std::string Ds1Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Ds1Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Ds1Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Ds1Mib::Dsx1Configtable::Dsx1Configtable()
{
    yang_name = "dsx1ConfigTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Configtable::~Dsx1Configtable()
{
}

bool Ds1Mib::Dsx1Configtable::has_data() const
{
    for (std::size_t index=0; index<dsx1configentry.size(); index++)
    {
        if(dsx1configentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Configtable::has_operation() const
{
    for (std::size_t index=0; index<dsx1configentry.size(); index++)
    {
        if(dsx1configentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Configtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ConfigTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Configtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Configtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ConfigEntry")
    {
        for(auto const & c : dsx1configentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Configtable::Dsx1Configentry>();
        c->parent = this;
        dsx1configentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Configtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1configentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Configtable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1Configentry()
    :
    dsx1lineindex{YType::int32, "dsx1LineIndex"},
    dsx1channelization{YType::enumeration, "dsx1Channelization"},
    dsx1circuitidentifier{YType::str, "dsx1CircuitIdentifier"},
    dsx1ds1channelnumber{YType::int32, "dsx1Ds1ChannelNumber"},
    dsx1fdl{YType::int32, "dsx1Fdl"},
    dsx1ifindex{YType::int32, "dsx1IfIndex"},
    dsx1invalidintervals{YType::int32, "dsx1InvalidIntervals"},
    dsx1linecoding{YType::enumeration, "dsx1LineCoding"},
    dsx1linelength{YType::int32, "dsx1LineLength"},
    dsx1linestatus{YType::int32, "dsx1LineStatus"},
    dsx1linestatuschangetrapenable{YType::enumeration, "dsx1LineStatusChangeTrapEnable"},
    dsx1linestatuslastchange{YType::uint32, "dsx1LineStatusLastChange"},
    dsx1linetype{YType::enumeration, "dsx1LineType"},
    dsx1loopbackconfig{YType::enumeration, "dsx1LoopbackConfig"},
    dsx1loopbackstatus{YType::int32, "dsx1LoopbackStatus"},
    dsx1sendcode{YType::enumeration, "dsx1SendCode"},
    dsx1signalmode{YType::enumeration, "dsx1SignalMode"},
    dsx1timeelapsed{YType::int32, "dsx1TimeElapsed"},
    dsx1transmitclocksource{YType::enumeration, "dsx1TransmitClockSource"},
    dsx1validintervals{YType::int32, "dsx1ValidIntervals"}
{
    yang_name = "dsx1ConfigEntry"; yang_parent_name = "dsx1ConfigTable";
}

Ds1Mib::Dsx1Configtable::Dsx1Configentry::~Dsx1Configentry()
{
}

bool Ds1Mib::Dsx1Configtable::Dsx1Configentry::has_data() const
{
    return dsx1lineindex.is_set
	|| dsx1channelization.is_set
	|| dsx1circuitidentifier.is_set
	|| dsx1ds1channelnumber.is_set
	|| dsx1fdl.is_set
	|| dsx1ifindex.is_set
	|| dsx1invalidintervals.is_set
	|| dsx1linecoding.is_set
	|| dsx1linelength.is_set
	|| dsx1linestatus.is_set
	|| dsx1linestatuschangetrapenable.is_set
	|| dsx1linestatuslastchange.is_set
	|| dsx1linetype.is_set
	|| dsx1loopbackconfig.is_set
	|| dsx1loopbackstatus.is_set
	|| dsx1sendcode.is_set
	|| dsx1signalmode.is_set
	|| dsx1timeelapsed.is_set
	|| dsx1transmitclocksource.is_set
	|| dsx1validintervals.is_set;
}

bool Ds1Mib::Dsx1Configtable::Dsx1Configentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1lineindex.operation)
	|| is_set(dsx1channelization.operation)
	|| is_set(dsx1circuitidentifier.operation)
	|| is_set(dsx1ds1channelnumber.operation)
	|| is_set(dsx1fdl.operation)
	|| is_set(dsx1ifindex.operation)
	|| is_set(dsx1invalidintervals.operation)
	|| is_set(dsx1linecoding.operation)
	|| is_set(dsx1linelength.operation)
	|| is_set(dsx1linestatus.operation)
	|| is_set(dsx1linestatuschangetrapenable.operation)
	|| is_set(dsx1linestatuslastchange.operation)
	|| is_set(dsx1linetype.operation)
	|| is_set(dsx1loopbackconfig.operation)
	|| is_set(dsx1loopbackstatus.operation)
	|| is_set(dsx1sendcode.operation)
	|| is_set(dsx1signalmode.operation)
	|| is_set(dsx1timeelapsed.operation)
	|| is_set(dsx1transmitclocksource.operation)
	|| is_set(dsx1validintervals.operation);
}

std::string Ds1Mib::Dsx1Configtable::Dsx1Configentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ConfigEntry" <<"[dsx1LineIndex='" <<dsx1lineindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Configtable::Dsx1Configentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1ConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1lineindex.is_set || is_set(dsx1lineindex.operation)) leaf_name_data.push_back(dsx1lineindex.get_name_leafdata());
    if (dsx1channelization.is_set || is_set(dsx1channelization.operation)) leaf_name_data.push_back(dsx1channelization.get_name_leafdata());
    if (dsx1circuitidentifier.is_set || is_set(dsx1circuitidentifier.operation)) leaf_name_data.push_back(dsx1circuitidentifier.get_name_leafdata());
    if (dsx1ds1channelnumber.is_set || is_set(dsx1ds1channelnumber.operation)) leaf_name_data.push_back(dsx1ds1channelnumber.get_name_leafdata());
    if (dsx1fdl.is_set || is_set(dsx1fdl.operation)) leaf_name_data.push_back(dsx1fdl.get_name_leafdata());
    if (dsx1ifindex.is_set || is_set(dsx1ifindex.operation)) leaf_name_data.push_back(dsx1ifindex.get_name_leafdata());
    if (dsx1invalidintervals.is_set || is_set(dsx1invalidintervals.operation)) leaf_name_data.push_back(dsx1invalidintervals.get_name_leafdata());
    if (dsx1linecoding.is_set || is_set(dsx1linecoding.operation)) leaf_name_data.push_back(dsx1linecoding.get_name_leafdata());
    if (dsx1linelength.is_set || is_set(dsx1linelength.operation)) leaf_name_data.push_back(dsx1linelength.get_name_leafdata());
    if (dsx1linestatus.is_set || is_set(dsx1linestatus.operation)) leaf_name_data.push_back(dsx1linestatus.get_name_leafdata());
    if (dsx1linestatuschangetrapenable.is_set || is_set(dsx1linestatuschangetrapenable.operation)) leaf_name_data.push_back(dsx1linestatuschangetrapenable.get_name_leafdata());
    if (dsx1linestatuslastchange.is_set || is_set(dsx1linestatuslastchange.operation)) leaf_name_data.push_back(dsx1linestatuslastchange.get_name_leafdata());
    if (dsx1linetype.is_set || is_set(dsx1linetype.operation)) leaf_name_data.push_back(dsx1linetype.get_name_leafdata());
    if (dsx1loopbackconfig.is_set || is_set(dsx1loopbackconfig.operation)) leaf_name_data.push_back(dsx1loopbackconfig.get_name_leafdata());
    if (dsx1loopbackstatus.is_set || is_set(dsx1loopbackstatus.operation)) leaf_name_data.push_back(dsx1loopbackstatus.get_name_leafdata());
    if (dsx1sendcode.is_set || is_set(dsx1sendcode.operation)) leaf_name_data.push_back(dsx1sendcode.get_name_leafdata());
    if (dsx1signalmode.is_set || is_set(dsx1signalmode.operation)) leaf_name_data.push_back(dsx1signalmode.get_name_leafdata());
    if (dsx1timeelapsed.is_set || is_set(dsx1timeelapsed.operation)) leaf_name_data.push_back(dsx1timeelapsed.get_name_leafdata());
    if (dsx1transmitclocksource.is_set || is_set(dsx1transmitclocksource.operation)) leaf_name_data.push_back(dsx1transmitclocksource.get_name_leafdata());
    if (dsx1validintervals.is_set || is_set(dsx1validintervals.operation)) leaf_name_data.push_back(dsx1validintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Configtable::Dsx1Configentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Configtable::Dsx1Configentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Configtable::Dsx1Configentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1LineIndex")
    {
        dsx1lineindex = value;
    }
    if(value_path == "dsx1Channelization")
    {
        dsx1channelization = value;
    }
    if(value_path == "dsx1CircuitIdentifier")
    {
        dsx1circuitidentifier = value;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber = value;
    }
    if(value_path == "dsx1Fdl")
    {
        dsx1fdl = value;
    }
    if(value_path == "dsx1IfIndex")
    {
        dsx1ifindex = value;
    }
    if(value_path == "dsx1InvalidIntervals")
    {
        dsx1invalidintervals = value;
    }
    if(value_path == "dsx1LineCoding")
    {
        dsx1linecoding = value;
    }
    if(value_path == "dsx1LineLength")
    {
        dsx1linelength = value;
    }
    if(value_path == "dsx1LineStatus")
    {
        dsx1linestatus = value;
    }
    if(value_path == "dsx1LineStatusChangeTrapEnable")
    {
        dsx1linestatuschangetrapenable = value;
    }
    if(value_path == "dsx1LineStatusLastChange")
    {
        dsx1linestatuslastchange = value;
    }
    if(value_path == "dsx1LineType")
    {
        dsx1linetype = value;
    }
    if(value_path == "dsx1LoopbackConfig")
    {
        dsx1loopbackconfig = value;
    }
    if(value_path == "dsx1LoopbackStatus")
    {
        dsx1loopbackstatus = value;
    }
    if(value_path == "dsx1SendCode")
    {
        dsx1sendcode = value;
    }
    if(value_path == "dsx1SignalMode")
    {
        dsx1signalmode = value;
    }
    if(value_path == "dsx1TimeElapsed")
    {
        dsx1timeelapsed = value;
    }
    if(value_path == "dsx1TransmitClockSource")
    {
        dsx1transmitclocksource = value;
    }
    if(value_path == "dsx1ValidIntervals")
    {
        dsx1validintervals = value;
    }
}

Ds1Mib::Dsx1Currenttable::Dsx1Currenttable()
{
    yang_name = "dsx1CurrentTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Currenttable::~Dsx1Currenttable()
{
}

bool Ds1Mib::Dsx1Currenttable::has_data() const
{
    for (std::size_t index=0; index<dsx1currententry.size(); index++)
    {
        if(dsx1currententry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Currenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx1currententry.size(); index++)
    {
        if(dsx1currententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Currenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1CurrentTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Currenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Currenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1CurrentEntry")
    {
        for(auto const & c : dsx1currententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Currenttable::Dsx1Currententry>();
        c->parent = this;
        dsx1currententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Currenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1currententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Currenttable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Currenttable::Dsx1Currententry::Dsx1Currententry()
    :
    dsx1currentindex{YType::int32, "dsx1CurrentIndex"},
    dsx1currentbess{YType::uint32, "dsx1CurrentBESs"},
    dsx1currentcsss{YType::uint32, "dsx1CurrentCSSs"},
    dsx1currentdms{YType::uint32, "dsx1CurrentDMs"},
    dsx1currentess{YType::uint32, "dsx1CurrentESs"},
    dsx1currentlcvs{YType::uint32, "dsx1CurrentLCVs"},
    dsx1currentless{YType::uint32, "dsx1CurrentLESs"},
    dsx1currentpcvs{YType::uint32, "dsx1CurrentPCVs"},
    dsx1currentsefss{YType::uint32, "dsx1CurrentSEFSs"},
    dsx1currentsess{YType::uint32, "dsx1CurrentSESs"},
    dsx1currentuass{YType::uint32, "dsx1CurrentUASs"}
{
    yang_name = "dsx1CurrentEntry"; yang_parent_name = "dsx1CurrentTable";
}

Ds1Mib::Dsx1Currenttable::Dsx1Currententry::~Dsx1Currententry()
{
}

bool Ds1Mib::Dsx1Currenttable::Dsx1Currententry::has_data() const
{
    return dsx1currentindex.is_set
	|| dsx1currentbess.is_set
	|| dsx1currentcsss.is_set
	|| dsx1currentdms.is_set
	|| dsx1currentess.is_set
	|| dsx1currentlcvs.is_set
	|| dsx1currentless.is_set
	|| dsx1currentpcvs.is_set
	|| dsx1currentsefss.is_set
	|| dsx1currentsess.is_set
	|| dsx1currentuass.is_set;
}

bool Ds1Mib::Dsx1Currenttable::Dsx1Currententry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1currentindex.operation)
	|| is_set(dsx1currentbess.operation)
	|| is_set(dsx1currentcsss.operation)
	|| is_set(dsx1currentdms.operation)
	|| is_set(dsx1currentess.operation)
	|| is_set(dsx1currentlcvs.operation)
	|| is_set(dsx1currentless.operation)
	|| is_set(dsx1currentpcvs.operation)
	|| is_set(dsx1currentsefss.operation)
	|| is_set(dsx1currentsess.operation)
	|| is_set(dsx1currentuass.operation);
}

std::string Ds1Mib::Dsx1Currenttable::Dsx1Currententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1CurrentEntry" <<"[dsx1CurrentIndex='" <<dsx1currentindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Currenttable::Dsx1Currententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1CurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1currentindex.is_set || is_set(dsx1currentindex.operation)) leaf_name_data.push_back(dsx1currentindex.get_name_leafdata());
    if (dsx1currentbess.is_set || is_set(dsx1currentbess.operation)) leaf_name_data.push_back(dsx1currentbess.get_name_leafdata());
    if (dsx1currentcsss.is_set || is_set(dsx1currentcsss.operation)) leaf_name_data.push_back(dsx1currentcsss.get_name_leafdata());
    if (dsx1currentdms.is_set || is_set(dsx1currentdms.operation)) leaf_name_data.push_back(dsx1currentdms.get_name_leafdata());
    if (dsx1currentess.is_set || is_set(dsx1currentess.operation)) leaf_name_data.push_back(dsx1currentess.get_name_leafdata());
    if (dsx1currentlcvs.is_set || is_set(dsx1currentlcvs.operation)) leaf_name_data.push_back(dsx1currentlcvs.get_name_leafdata());
    if (dsx1currentless.is_set || is_set(dsx1currentless.operation)) leaf_name_data.push_back(dsx1currentless.get_name_leafdata());
    if (dsx1currentpcvs.is_set || is_set(dsx1currentpcvs.operation)) leaf_name_data.push_back(dsx1currentpcvs.get_name_leafdata());
    if (dsx1currentsefss.is_set || is_set(dsx1currentsefss.operation)) leaf_name_data.push_back(dsx1currentsefss.get_name_leafdata());
    if (dsx1currentsess.is_set || is_set(dsx1currentsess.operation)) leaf_name_data.push_back(dsx1currentsess.get_name_leafdata());
    if (dsx1currentuass.is_set || is_set(dsx1currentuass.operation)) leaf_name_data.push_back(dsx1currentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Currenttable::Dsx1Currententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Currenttable::Dsx1Currententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Currenttable::Dsx1Currententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1CurrentIndex")
    {
        dsx1currentindex = value;
    }
    if(value_path == "dsx1CurrentBESs")
    {
        dsx1currentbess = value;
    }
    if(value_path == "dsx1CurrentCSSs")
    {
        dsx1currentcsss = value;
    }
    if(value_path == "dsx1CurrentDMs")
    {
        dsx1currentdms = value;
    }
    if(value_path == "dsx1CurrentESs")
    {
        dsx1currentess = value;
    }
    if(value_path == "dsx1CurrentLCVs")
    {
        dsx1currentlcvs = value;
    }
    if(value_path == "dsx1CurrentLESs")
    {
        dsx1currentless = value;
    }
    if(value_path == "dsx1CurrentPCVs")
    {
        dsx1currentpcvs = value;
    }
    if(value_path == "dsx1CurrentSEFSs")
    {
        dsx1currentsefss = value;
    }
    if(value_path == "dsx1CurrentSESs")
    {
        dsx1currentsess = value;
    }
    if(value_path == "dsx1CurrentUASs")
    {
        dsx1currentuass = value;
    }
}

Ds1Mib::Dsx1Intervaltable::Dsx1Intervaltable()
{
    yang_name = "dsx1IntervalTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Intervaltable::~Dsx1Intervaltable()
{
}

bool Ds1Mib::Dsx1Intervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx1intervalentry.size(); index++)
    {
        if(dsx1intervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Intervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx1intervalentry.size(); index++)
    {
        if(dsx1intervalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Intervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1IntervalTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Intervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Intervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1IntervalEntry")
    {
        for(auto const & c : dsx1intervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry>();
        c->parent = this;
        dsx1intervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Intervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1intervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Intervaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::Dsx1Intervalentry()
    :
    dsx1intervalindex{YType::int32, "dsx1IntervalIndex"},
    dsx1intervalnumber{YType::int32, "dsx1IntervalNumber"},
    dsx1intervalbess{YType::uint32, "dsx1IntervalBESs"},
    dsx1intervalcsss{YType::uint32, "dsx1IntervalCSSs"},
    dsx1intervaldms{YType::uint32, "dsx1IntervalDMs"},
    dsx1intervaless{YType::uint32, "dsx1IntervalESs"},
    dsx1intervallcvs{YType::uint32, "dsx1IntervalLCVs"},
    dsx1intervalless{YType::uint32, "dsx1IntervalLESs"},
    dsx1intervalpcvs{YType::uint32, "dsx1IntervalPCVs"},
    dsx1intervalsefss{YType::uint32, "dsx1IntervalSEFSs"},
    dsx1intervalsess{YType::uint32, "dsx1IntervalSESs"},
    dsx1intervaluass{YType::uint32, "dsx1IntervalUASs"},
    dsx1intervalvaliddata{YType::boolean, "dsx1IntervalValidData"}
{
    yang_name = "dsx1IntervalEntry"; yang_parent_name = "dsx1IntervalTable";
}

Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::~Dsx1Intervalentry()
{
}

bool Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::has_data() const
{
    return dsx1intervalindex.is_set
	|| dsx1intervalnumber.is_set
	|| dsx1intervalbess.is_set
	|| dsx1intervalcsss.is_set
	|| dsx1intervaldms.is_set
	|| dsx1intervaless.is_set
	|| dsx1intervallcvs.is_set
	|| dsx1intervalless.is_set
	|| dsx1intervalpcvs.is_set
	|| dsx1intervalsefss.is_set
	|| dsx1intervalsess.is_set
	|| dsx1intervaluass.is_set
	|| dsx1intervalvaliddata.is_set;
}

bool Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1intervalindex.operation)
	|| is_set(dsx1intervalnumber.operation)
	|| is_set(dsx1intervalbess.operation)
	|| is_set(dsx1intervalcsss.operation)
	|| is_set(dsx1intervaldms.operation)
	|| is_set(dsx1intervaless.operation)
	|| is_set(dsx1intervallcvs.operation)
	|| is_set(dsx1intervalless.operation)
	|| is_set(dsx1intervalpcvs.operation)
	|| is_set(dsx1intervalsefss.operation)
	|| is_set(dsx1intervalsess.operation)
	|| is_set(dsx1intervaluass.operation)
	|| is_set(dsx1intervalvaliddata.operation);
}

std::string Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1IntervalEntry" <<"[dsx1IntervalIndex='" <<dsx1intervalindex <<"']" <<"[dsx1IntervalNumber='" <<dsx1intervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1IntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1intervalindex.is_set || is_set(dsx1intervalindex.operation)) leaf_name_data.push_back(dsx1intervalindex.get_name_leafdata());
    if (dsx1intervalnumber.is_set || is_set(dsx1intervalnumber.operation)) leaf_name_data.push_back(dsx1intervalnumber.get_name_leafdata());
    if (dsx1intervalbess.is_set || is_set(dsx1intervalbess.operation)) leaf_name_data.push_back(dsx1intervalbess.get_name_leafdata());
    if (dsx1intervalcsss.is_set || is_set(dsx1intervalcsss.operation)) leaf_name_data.push_back(dsx1intervalcsss.get_name_leafdata());
    if (dsx1intervaldms.is_set || is_set(dsx1intervaldms.operation)) leaf_name_data.push_back(dsx1intervaldms.get_name_leafdata());
    if (dsx1intervaless.is_set || is_set(dsx1intervaless.operation)) leaf_name_data.push_back(dsx1intervaless.get_name_leafdata());
    if (dsx1intervallcvs.is_set || is_set(dsx1intervallcvs.operation)) leaf_name_data.push_back(dsx1intervallcvs.get_name_leafdata());
    if (dsx1intervalless.is_set || is_set(dsx1intervalless.operation)) leaf_name_data.push_back(dsx1intervalless.get_name_leafdata());
    if (dsx1intervalpcvs.is_set || is_set(dsx1intervalpcvs.operation)) leaf_name_data.push_back(dsx1intervalpcvs.get_name_leafdata());
    if (dsx1intervalsefss.is_set || is_set(dsx1intervalsefss.operation)) leaf_name_data.push_back(dsx1intervalsefss.get_name_leafdata());
    if (dsx1intervalsess.is_set || is_set(dsx1intervalsess.operation)) leaf_name_data.push_back(dsx1intervalsess.get_name_leafdata());
    if (dsx1intervaluass.is_set || is_set(dsx1intervaluass.operation)) leaf_name_data.push_back(dsx1intervaluass.get_name_leafdata());
    if (dsx1intervalvaliddata.is_set || is_set(dsx1intervalvaliddata.operation)) leaf_name_data.push_back(dsx1intervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1IntervalIndex")
    {
        dsx1intervalindex = value;
    }
    if(value_path == "dsx1IntervalNumber")
    {
        dsx1intervalnumber = value;
    }
    if(value_path == "dsx1IntervalBESs")
    {
        dsx1intervalbess = value;
    }
    if(value_path == "dsx1IntervalCSSs")
    {
        dsx1intervalcsss = value;
    }
    if(value_path == "dsx1IntervalDMs")
    {
        dsx1intervaldms = value;
    }
    if(value_path == "dsx1IntervalESs")
    {
        dsx1intervaless = value;
    }
    if(value_path == "dsx1IntervalLCVs")
    {
        dsx1intervallcvs = value;
    }
    if(value_path == "dsx1IntervalLESs")
    {
        dsx1intervalless = value;
    }
    if(value_path == "dsx1IntervalPCVs")
    {
        dsx1intervalpcvs = value;
    }
    if(value_path == "dsx1IntervalSEFSs")
    {
        dsx1intervalsefss = value;
    }
    if(value_path == "dsx1IntervalSESs")
    {
        dsx1intervalsess = value;
    }
    if(value_path == "dsx1IntervalUASs")
    {
        dsx1intervaluass = value;
    }
    if(value_path == "dsx1IntervalValidData")
    {
        dsx1intervalvaliddata = value;
    }
}

Ds1Mib::Dsx1Totaltable::Dsx1Totaltable()
{
    yang_name = "dsx1TotalTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Totaltable::~Dsx1Totaltable()
{
}

bool Ds1Mib::Dsx1Totaltable::has_data() const
{
    for (std::size_t index=0; index<dsx1totalentry.size(); index++)
    {
        if(dsx1totalentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Totaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx1totalentry.size(); index++)
    {
        if(dsx1totalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Totaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1TotalTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Totaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Totaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1TotalEntry")
    {
        for(auto const & c : dsx1totalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Totaltable::Dsx1Totalentry>();
        c->parent = this;
        dsx1totalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Totaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1totalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Totaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::Dsx1Totalentry()
    :
    dsx1totalindex{YType::int32, "dsx1TotalIndex"},
    dsx1totalbess{YType::uint32, "dsx1TotalBESs"},
    dsx1totalcsss{YType::uint32, "dsx1TotalCSSs"},
    dsx1totaldms{YType::uint32, "dsx1TotalDMs"},
    dsx1totaless{YType::uint32, "dsx1TotalESs"},
    dsx1totallcvs{YType::uint32, "dsx1TotalLCVs"},
    dsx1totalless{YType::uint32, "dsx1TotalLESs"},
    dsx1totalpcvs{YType::uint32, "dsx1TotalPCVs"},
    dsx1totalsefss{YType::uint32, "dsx1TotalSEFSs"},
    dsx1totalsess{YType::uint32, "dsx1TotalSESs"},
    dsx1totaluass{YType::uint32, "dsx1TotalUASs"}
{
    yang_name = "dsx1TotalEntry"; yang_parent_name = "dsx1TotalTable";
}

Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::~Dsx1Totalentry()
{
}

bool Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::has_data() const
{
    return dsx1totalindex.is_set
	|| dsx1totalbess.is_set
	|| dsx1totalcsss.is_set
	|| dsx1totaldms.is_set
	|| dsx1totaless.is_set
	|| dsx1totallcvs.is_set
	|| dsx1totalless.is_set
	|| dsx1totalpcvs.is_set
	|| dsx1totalsefss.is_set
	|| dsx1totalsess.is_set
	|| dsx1totaluass.is_set;
}

bool Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1totalindex.operation)
	|| is_set(dsx1totalbess.operation)
	|| is_set(dsx1totalcsss.operation)
	|| is_set(dsx1totaldms.operation)
	|| is_set(dsx1totaless.operation)
	|| is_set(dsx1totallcvs.operation)
	|| is_set(dsx1totalless.operation)
	|| is_set(dsx1totalpcvs.operation)
	|| is_set(dsx1totalsefss.operation)
	|| is_set(dsx1totalsess.operation)
	|| is_set(dsx1totaluass.operation);
}

std::string Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1TotalEntry" <<"[dsx1TotalIndex='" <<dsx1totalindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1TotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1totalindex.is_set || is_set(dsx1totalindex.operation)) leaf_name_data.push_back(dsx1totalindex.get_name_leafdata());
    if (dsx1totalbess.is_set || is_set(dsx1totalbess.operation)) leaf_name_data.push_back(dsx1totalbess.get_name_leafdata());
    if (dsx1totalcsss.is_set || is_set(dsx1totalcsss.operation)) leaf_name_data.push_back(dsx1totalcsss.get_name_leafdata());
    if (dsx1totaldms.is_set || is_set(dsx1totaldms.operation)) leaf_name_data.push_back(dsx1totaldms.get_name_leafdata());
    if (dsx1totaless.is_set || is_set(dsx1totaless.operation)) leaf_name_data.push_back(dsx1totaless.get_name_leafdata());
    if (dsx1totallcvs.is_set || is_set(dsx1totallcvs.operation)) leaf_name_data.push_back(dsx1totallcvs.get_name_leafdata());
    if (dsx1totalless.is_set || is_set(dsx1totalless.operation)) leaf_name_data.push_back(dsx1totalless.get_name_leafdata());
    if (dsx1totalpcvs.is_set || is_set(dsx1totalpcvs.operation)) leaf_name_data.push_back(dsx1totalpcvs.get_name_leafdata());
    if (dsx1totalsefss.is_set || is_set(dsx1totalsefss.operation)) leaf_name_data.push_back(dsx1totalsefss.get_name_leafdata());
    if (dsx1totalsess.is_set || is_set(dsx1totalsess.operation)) leaf_name_data.push_back(dsx1totalsess.get_name_leafdata());
    if (dsx1totaluass.is_set || is_set(dsx1totaluass.operation)) leaf_name_data.push_back(dsx1totaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Totaltable::Dsx1Totalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1TotalIndex")
    {
        dsx1totalindex = value;
    }
    if(value_path == "dsx1TotalBESs")
    {
        dsx1totalbess = value;
    }
    if(value_path == "dsx1TotalCSSs")
    {
        dsx1totalcsss = value;
    }
    if(value_path == "dsx1TotalDMs")
    {
        dsx1totaldms = value;
    }
    if(value_path == "dsx1TotalESs")
    {
        dsx1totaless = value;
    }
    if(value_path == "dsx1TotalLCVs")
    {
        dsx1totallcvs = value;
    }
    if(value_path == "dsx1TotalLESs")
    {
        dsx1totalless = value;
    }
    if(value_path == "dsx1TotalPCVs")
    {
        dsx1totalpcvs = value;
    }
    if(value_path == "dsx1TotalSEFSs")
    {
        dsx1totalsefss = value;
    }
    if(value_path == "dsx1TotalSESs")
    {
        dsx1totalsess = value;
    }
    if(value_path == "dsx1TotalUASs")
    {
        dsx1totaluass = value;
    }
}

Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrenttable()
{
    yang_name = "dsx1FarEndCurrentTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Farendcurrenttable::~Dsx1Farendcurrenttable()
{
}

bool Ds1Mib::Dsx1Farendcurrenttable::has_data() const
{
    for (std::size_t index=0; index<dsx1farendcurrententry.size(); index++)
    {
        if(dsx1farendcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Farendcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendcurrententry.size(); index++)
    {
        if(dsx1farendcurrententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Farendcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndCurrentTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndCurrentEntry")
    {
        for(auto const & c : dsx1farendcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry>();
        c->parent = this;
        dsx1farendcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1farendcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Farendcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::Dsx1Farendcurrententry()
    :
    dsx1farendcurrentindex{YType::int32, "dsx1FarEndCurrentIndex"},
    dsx1farendcurrentbess{YType::uint32, "dsx1FarEndCurrentBESs"},
    dsx1farendcurrentcsss{YType::uint32, "dsx1FarEndCurrentCSSs"},
    dsx1farendcurrentdms{YType::uint32, "dsx1FarEndCurrentDMs"},
    dsx1farendcurrentess{YType::uint32, "dsx1FarEndCurrentESs"},
    dsx1farendcurrentless{YType::uint32, "dsx1FarEndCurrentLESs"},
    dsx1farendcurrentpcvs{YType::uint32, "dsx1FarEndCurrentPCVs"},
    dsx1farendcurrentsefss{YType::uint32, "dsx1FarEndCurrentSEFSs"},
    dsx1farendcurrentsess{YType::uint32, "dsx1FarEndCurrentSESs"},
    dsx1farendcurrentuass{YType::uint32, "dsx1FarEndCurrentUASs"},
    dsx1farendinvalidintervals{YType::int32, "dsx1FarEndInvalidIntervals"},
    dsx1farendtimeelapsed{YType::int32, "dsx1FarEndTimeElapsed"},
    dsx1farendvalidintervals{YType::int32, "dsx1FarEndValidIntervals"}
{
    yang_name = "dsx1FarEndCurrentEntry"; yang_parent_name = "dsx1FarEndCurrentTable";
}

Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::~Dsx1Farendcurrententry()
{
}

bool Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::has_data() const
{
    return dsx1farendcurrentindex.is_set
	|| dsx1farendcurrentbess.is_set
	|| dsx1farendcurrentcsss.is_set
	|| dsx1farendcurrentdms.is_set
	|| dsx1farendcurrentess.is_set
	|| dsx1farendcurrentless.is_set
	|| dsx1farendcurrentpcvs.is_set
	|| dsx1farendcurrentsefss.is_set
	|| dsx1farendcurrentsess.is_set
	|| dsx1farendcurrentuass.is_set
	|| dsx1farendinvalidintervals.is_set
	|| dsx1farendtimeelapsed.is_set
	|| dsx1farendvalidintervals.is_set;
}

bool Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1farendcurrentindex.operation)
	|| is_set(dsx1farendcurrentbess.operation)
	|| is_set(dsx1farendcurrentcsss.operation)
	|| is_set(dsx1farendcurrentdms.operation)
	|| is_set(dsx1farendcurrentess.operation)
	|| is_set(dsx1farendcurrentless.operation)
	|| is_set(dsx1farendcurrentpcvs.operation)
	|| is_set(dsx1farendcurrentsefss.operation)
	|| is_set(dsx1farendcurrentsess.operation)
	|| is_set(dsx1farendcurrentuass.operation)
	|| is_set(dsx1farendinvalidintervals.operation)
	|| is_set(dsx1farendtimeelapsed.operation)
	|| is_set(dsx1farendvalidintervals.operation);
}

std::string Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndCurrentEntry" <<"[dsx1FarEndCurrentIndex='" <<dsx1farendcurrentindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendcurrentindex.is_set || is_set(dsx1farendcurrentindex.operation)) leaf_name_data.push_back(dsx1farendcurrentindex.get_name_leafdata());
    if (dsx1farendcurrentbess.is_set || is_set(dsx1farendcurrentbess.operation)) leaf_name_data.push_back(dsx1farendcurrentbess.get_name_leafdata());
    if (dsx1farendcurrentcsss.is_set || is_set(dsx1farendcurrentcsss.operation)) leaf_name_data.push_back(dsx1farendcurrentcsss.get_name_leafdata());
    if (dsx1farendcurrentdms.is_set || is_set(dsx1farendcurrentdms.operation)) leaf_name_data.push_back(dsx1farendcurrentdms.get_name_leafdata());
    if (dsx1farendcurrentess.is_set || is_set(dsx1farendcurrentess.operation)) leaf_name_data.push_back(dsx1farendcurrentess.get_name_leafdata());
    if (dsx1farendcurrentless.is_set || is_set(dsx1farendcurrentless.operation)) leaf_name_data.push_back(dsx1farendcurrentless.get_name_leafdata());
    if (dsx1farendcurrentpcvs.is_set || is_set(dsx1farendcurrentpcvs.operation)) leaf_name_data.push_back(dsx1farendcurrentpcvs.get_name_leafdata());
    if (dsx1farendcurrentsefss.is_set || is_set(dsx1farendcurrentsefss.operation)) leaf_name_data.push_back(dsx1farendcurrentsefss.get_name_leafdata());
    if (dsx1farendcurrentsess.is_set || is_set(dsx1farendcurrentsess.operation)) leaf_name_data.push_back(dsx1farendcurrentsess.get_name_leafdata());
    if (dsx1farendcurrentuass.is_set || is_set(dsx1farendcurrentuass.operation)) leaf_name_data.push_back(dsx1farendcurrentuass.get_name_leafdata());
    if (dsx1farendinvalidintervals.is_set || is_set(dsx1farendinvalidintervals.operation)) leaf_name_data.push_back(dsx1farendinvalidintervals.get_name_leafdata());
    if (dsx1farendtimeelapsed.is_set || is_set(dsx1farendtimeelapsed.operation)) leaf_name_data.push_back(dsx1farendtimeelapsed.get_name_leafdata());
    if (dsx1farendvalidintervals.is_set || is_set(dsx1farendvalidintervals.operation)) leaf_name_data.push_back(dsx1farendvalidintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1FarEndCurrentIndex")
    {
        dsx1farendcurrentindex = value;
    }
    if(value_path == "dsx1FarEndCurrentBESs")
    {
        dsx1farendcurrentbess = value;
    }
    if(value_path == "dsx1FarEndCurrentCSSs")
    {
        dsx1farendcurrentcsss = value;
    }
    if(value_path == "dsx1FarEndCurrentDMs")
    {
        dsx1farendcurrentdms = value;
    }
    if(value_path == "dsx1FarEndCurrentESs")
    {
        dsx1farendcurrentess = value;
    }
    if(value_path == "dsx1FarEndCurrentLESs")
    {
        dsx1farendcurrentless = value;
    }
    if(value_path == "dsx1FarEndCurrentPCVs")
    {
        dsx1farendcurrentpcvs = value;
    }
    if(value_path == "dsx1FarEndCurrentSEFSs")
    {
        dsx1farendcurrentsefss = value;
    }
    if(value_path == "dsx1FarEndCurrentSESs")
    {
        dsx1farendcurrentsess = value;
    }
    if(value_path == "dsx1FarEndCurrentUASs")
    {
        dsx1farendcurrentuass = value;
    }
    if(value_path == "dsx1FarEndInvalidIntervals")
    {
        dsx1farendinvalidintervals = value;
    }
    if(value_path == "dsx1FarEndTimeElapsed")
    {
        dsx1farendtimeelapsed = value;
    }
    if(value_path == "dsx1FarEndValidIntervals")
    {
        dsx1farendvalidintervals = value;
    }
}

Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervaltable()
{
    yang_name = "dsx1FarEndIntervalTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Farendintervaltable::~Dsx1Farendintervaltable()
{
}

bool Ds1Mib::Dsx1Farendintervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx1farendintervalentry.size(); index++)
    {
        if(dsx1farendintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Farendintervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendintervalentry.size(); index++)
    {
        if(dsx1farendintervalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Farendintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndIntervalTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndIntervalEntry")
    {
        for(auto const & c : dsx1farendintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry>();
        c->parent = this;
        dsx1farendintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1farendintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Farendintervaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::Dsx1Farendintervalentry()
    :
    dsx1farendintervalindex{YType::int32, "dsx1FarEndIntervalIndex"},
    dsx1farendintervalnumber{YType::int32, "dsx1FarEndIntervalNumber"},
    dsx1farendintervalbess{YType::uint32, "dsx1FarEndIntervalBESs"},
    dsx1farendintervalcsss{YType::uint32, "dsx1FarEndIntervalCSSs"},
    dsx1farendintervaldms{YType::uint32, "dsx1FarEndIntervalDMs"},
    dsx1farendintervaless{YType::uint32, "dsx1FarEndIntervalESs"},
    dsx1farendintervalless{YType::uint32, "dsx1FarEndIntervalLESs"},
    dsx1farendintervalpcvs{YType::uint32, "dsx1FarEndIntervalPCVs"},
    dsx1farendintervalsefss{YType::uint32, "dsx1FarEndIntervalSEFSs"},
    dsx1farendintervalsess{YType::uint32, "dsx1FarEndIntervalSESs"},
    dsx1farendintervaluass{YType::uint32, "dsx1FarEndIntervalUASs"},
    dsx1farendintervalvaliddata{YType::boolean, "dsx1FarEndIntervalValidData"}
{
    yang_name = "dsx1FarEndIntervalEntry"; yang_parent_name = "dsx1FarEndIntervalTable";
}

Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::~Dsx1Farendintervalentry()
{
}

bool Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::has_data() const
{
    return dsx1farendintervalindex.is_set
	|| dsx1farendintervalnumber.is_set
	|| dsx1farendintervalbess.is_set
	|| dsx1farendintervalcsss.is_set
	|| dsx1farendintervaldms.is_set
	|| dsx1farendintervaless.is_set
	|| dsx1farendintervalless.is_set
	|| dsx1farendintervalpcvs.is_set
	|| dsx1farendintervalsefss.is_set
	|| dsx1farendintervalsess.is_set
	|| dsx1farendintervaluass.is_set
	|| dsx1farendintervalvaliddata.is_set;
}

bool Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1farendintervalindex.operation)
	|| is_set(dsx1farendintervalnumber.operation)
	|| is_set(dsx1farendintervalbess.operation)
	|| is_set(dsx1farendintervalcsss.operation)
	|| is_set(dsx1farendintervaldms.operation)
	|| is_set(dsx1farendintervaless.operation)
	|| is_set(dsx1farendintervalless.operation)
	|| is_set(dsx1farendintervalpcvs.operation)
	|| is_set(dsx1farendintervalsefss.operation)
	|| is_set(dsx1farendintervalsess.operation)
	|| is_set(dsx1farendintervaluass.operation)
	|| is_set(dsx1farendintervalvaliddata.operation);
}

std::string Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndIntervalEntry" <<"[dsx1FarEndIntervalIndex='" <<dsx1farendintervalindex <<"']" <<"[dsx1FarEndIntervalNumber='" <<dsx1farendintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendintervalindex.is_set || is_set(dsx1farendintervalindex.operation)) leaf_name_data.push_back(dsx1farendintervalindex.get_name_leafdata());
    if (dsx1farendintervalnumber.is_set || is_set(dsx1farendintervalnumber.operation)) leaf_name_data.push_back(dsx1farendintervalnumber.get_name_leafdata());
    if (dsx1farendintervalbess.is_set || is_set(dsx1farendintervalbess.operation)) leaf_name_data.push_back(dsx1farendintervalbess.get_name_leafdata());
    if (dsx1farendintervalcsss.is_set || is_set(dsx1farendintervalcsss.operation)) leaf_name_data.push_back(dsx1farendintervalcsss.get_name_leafdata());
    if (dsx1farendintervaldms.is_set || is_set(dsx1farendintervaldms.operation)) leaf_name_data.push_back(dsx1farendintervaldms.get_name_leafdata());
    if (dsx1farendintervaless.is_set || is_set(dsx1farendintervaless.operation)) leaf_name_data.push_back(dsx1farendintervaless.get_name_leafdata());
    if (dsx1farendintervalless.is_set || is_set(dsx1farendintervalless.operation)) leaf_name_data.push_back(dsx1farendintervalless.get_name_leafdata());
    if (dsx1farendintervalpcvs.is_set || is_set(dsx1farendintervalpcvs.operation)) leaf_name_data.push_back(dsx1farendintervalpcvs.get_name_leafdata());
    if (dsx1farendintervalsefss.is_set || is_set(dsx1farendintervalsefss.operation)) leaf_name_data.push_back(dsx1farendintervalsefss.get_name_leafdata());
    if (dsx1farendintervalsess.is_set || is_set(dsx1farendintervalsess.operation)) leaf_name_data.push_back(dsx1farendintervalsess.get_name_leafdata());
    if (dsx1farendintervaluass.is_set || is_set(dsx1farendintervaluass.operation)) leaf_name_data.push_back(dsx1farendintervaluass.get_name_leafdata());
    if (dsx1farendintervalvaliddata.is_set || is_set(dsx1farendintervalvaliddata.operation)) leaf_name_data.push_back(dsx1farendintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1FarEndIntervalIndex")
    {
        dsx1farendintervalindex = value;
    }
    if(value_path == "dsx1FarEndIntervalNumber")
    {
        dsx1farendintervalnumber = value;
    }
    if(value_path == "dsx1FarEndIntervalBESs")
    {
        dsx1farendintervalbess = value;
    }
    if(value_path == "dsx1FarEndIntervalCSSs")
    {
        dsx1farendintervalcsss = value;
    }
    if(value_path == "dsx1FarEndIntervalDMs")
    {
        dsx1farendintervaldms = value;
    }
    if(value_path == "dsx1FarEndIntervalESs")
    {
        dsx1farendintervaless = value;
    }
    if(value_path == "dsx1FarEndIntervalLESs")
    {
        dsx1farendintervalless = value;
    }
    if(value_path == "dsx1FarEndIntervalPCVs")
    {
        dsx1farendintervalpcvs = value;
    }
    if(value_path == "dsx1FarEndIntervalSEFSs")
    {
        dsx1farendintervalsefss = value;
    }
    if(value_path == "dsx1FarEndIntervalSESs")
    {
        dsx1farendintervalsess = value;
    }
    if(value_path == "dsx1FarEndIntervalUASs")
    {
        dsx1farendintervaluass = value;
    }
    if(value_path == "dsx1FarEndIntervalValidData")
    {
        dsx1farendintervalvaliddata = value;
    }
}

Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotaltable()
{
    yang_name = "dsx1FarEndTotalTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Farendtotaltable::~Dsx1Farendtotaltable()
{
}

bool Ds1Mib::Dsx1Farendtotaltable::has_data() const
{
    for (std::size_t index=0; index<dsx1farendtotalentry.size(); index++)
    {
        if(dsx1farendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Farendtotaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx1farendtotalentry.size(); index++)
    {
        if(dsx1farendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Farendtotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndTotalTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendtotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendtotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FarEndTotalEntry")
    {
        for(auto const & c : dsx1farendtotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry>();
        c->parent = this;
        dsx1farendtotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendtotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1farendtotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Farendtotaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::Dsx1Farendtotalentry()
    :
    dsx1farendtotalindex{YType::int32, "dsx1FarEndTotalIndex"},
    dsx1farendtotalbess{YType::uint32, "dsx1FarEndTotalBESs"},
    dsx1farendtotalcsss{YType::uint32, "dsx1FarEndTotalCSSs"},
    dsx1farendtotaldms{YType::uint32, "dsx1FarEndTotalDMs"},
    dsx1farendtotaless{YType::uint32, "dsx1FarEndTotalESs"},
    dsx1farendtotalless{YType::uint32, "dsx1FarEndTotalLESs"},
    dsx1farendtotalpcvs{YType::uint32, "dsx1FarEndTotalPCVs"},
    dsx1farendtotalsefss{YType::uint32, "dsx1FarEndTotalSEFSs"},
    dsx1farendtotalsess{YType::uint32, "dsx1FarEndTotalSESs"},
    dsx1farendtotaluass{YType::uint32, "dsx1FarEndTotalUASs"}
{
    yang_name = "dsx1FarEndTotalEntry"; yang_parent_name = "dsx1FarEndTotalTable";
}

Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::~Dsx1Farendtotalentry()
{
}

bool Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::has_data() const
{
    return dsx1farendtotalindex.is_set
	|| dsx1farendtotalbess.is_set
	|| dsx1farendtotalcsss.is_set
	|| dsx1farendtotaldms.is_set
	|| dsx1farendtotaless.is_set
	|| dsx1farendtotalless.is_set
	|| dsx1farendtotalpcvs.is_set
	|| dsx1farendtotalsefss.is_set
	|| dsx1farendtotalsess.is_set
	|| dsx1farendtotaluass.is_set;
}

bool Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1farendtotalindex.operation)
	|| is_set(dsx1farendtotalbess.operation)
	|| is_set(dsx1farendtotalcsss.operation)
	|| is_set(dsx1farendtotaldms.operation)
	|| is_set(dsx1farendtotaless.operation)
	|| is_set(dsx1farendtotalless.operation)
	|| is_set(dsx1farendtotalpcvs.operation)
	|| is_set(dsx1farendtotalsefss.operation)
	|| is_set(dsx1farendtotalsess.operation)
	|| is_set(dsx1farendtotaluass.operation);
}

std::string Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FarEndTotalEntry" <<"[dsx1FarEndTotalIndex='" <<dsx1farendtotalindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1FarEndTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1farendtotalindex.is_set || is_set(dsx1farendtotalindex.operation)) leaf_name_data.push_back(dsx1farendtotalindex.get_name_leafdata());
    if (dsx1farendtotalbess.is_set || is_set(dsx1farendtotalbess.operation)) leaf_name_data.push_back(dsx1farendtotalbess.get_name_leafdata());
    if (dsx1farendtotalcsss.is_set || is_set(dsx1farendtotalcsss.operation)) leaf_name_data.push_back(dsx1farendtotalcsss.get_name_leafdata());
    if (dsx1farendtotaldms.is_set || is_set(dsx1farendtotaldms.operation)) leaf_name_data.push_back(dsx1farendtotaldms.get_name_leafdata());
    if (dsx1farendtotaless.is_set || is_set(dsx1farendtotaless.operation)) leaf_name_data.push_back(dsx1farendtotaless.get_name_leafdata());
    if (dsx1farendtotalless.is_set || is_set(dsx1farendtotalless.operation)) leaf_name_data.push_back(dsx1farendtotalless.get_name_leafdata());
    if (dsx1farendtotalpcvs.is_set || is_set(dsx1farendtotalpcvs.operation)) leaf_name_data.push_back(dsx1farendtotalpcvs.get_name_leafdata());
    if (dsx1farendtotalsefss.is_set || is_set(dsx1farendtotalsefss.operation)) leaf_name_data.push_back(dsx1farendtotalsefss.get_name_leafdata());
    if (dsx1farendtotalsess.is_set || is_set(dsx1farendtotalsess.operation)) leaf_name_data.push_back(dsx1farendtotalsess.get_name_leafdata());
    if (dsx1farendtotaluass.is_set || is_set(dsx1farendtotaluass.operation)) leaf_name_data.push_back(dsx1farendtotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1FarEndTotalIndex")
    {
        dsx1farendtotalindex = value;
    }
    if(value_path == "dsx1FarEndTotalBESs")
    {
        dsx1farendtotalbess = value;
    }
    if(value_path == "dsx1FarEndTotalCSSs")
    {
        dsx1farendtotalcsss = value;
    }
    if(value_path == "dsx1FarEndTotalDMs")
    {
        dsx1farendtotaldms = value;
    }
    if(value_path == "dsx1FarEndTotalESs")
    {
        dsx1farendtotaless = value;
    }
    if(value_path == "dsx1FarEndTotalLESs")
    {
        dsx1farendtotalless = value;
    }
    if(value_path == "dsx1FarEndTotalPCVs")
    {
        dsx1farendtotalpcvs = value;
    }
    if(value_path == "dsx1FarEndTotalSEFSs")
    {
        dsx1farendtotalsefss = value;
    }
    if(value_path == "dsx1FarEndTotalSESs")
    {
        dsx1farendtotalsess = value;
    }
    if(value_path == "dsx1FarEndTotalUASs")
    {
        dsx1farendtotaluass = value;
    }
}

Ds1Mib::Dsx1Fractable::Dsx1Fractable()
{
    yang_name = "dsx1FracTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Fractable::~Dsx1Fractable()
{
}

bool Ds1Mib::Dsx1Fractable::has_data() const
{
    for (std::size_t index=0; index<dsx1fracentry.size(); index++)
    {
        if(dsx1fracentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Fractable::has_operation() const
{
    for (std::size_t index=0; index<dsx1fracentry.size(); index++)
    {
        if(dsx1fracentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Fractable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FracTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Fractable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Fractable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1FracEntry")
    {
        for(auto const & c : dsx1fracentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Fractable::Dsx1Fracentry>();
        c->parent = this;
        dsx1fracentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Fractable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1fracentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Fractable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Fractable::Dsx1Fracentry::Dsx1Fracentry()
    :
    dsx1fracindex{YType::int32, "dsx1FracIndex"},
    dsx1fracnumber{YType::int32, "dsx1FracNumber"},
    dsx1fracifindex{YType::int32, "dsx1FracIfIndex"}
{
    yang_name = "dsx1FracEntry"; yang_parent_name = "dsx1FracTable";
}

Ds1Mib::Dsx1Fractable::Dsx1Fracentry::~Dsx1Fracentry()
{
}

bool Ds1Mib::Dsx1Fractable::Dsx1Fracentry::has_data() const
{
    return dsx1fracindex.is_set
	|| dsx1fracnumber.is_set
	|| dsx1fracifindex.is_set;
}

bool Ds1Mib::Dsx1Fractable::Dsx1Fracentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx1fracindex.operation)
	|| is_set(dsx1fracnumber.operation)
	|| is_set(dsx1fracifindex.operation);
}

std::string Ds1Mib::Dsx1Fractable::Dsx1Fracentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1FracEntry" <<"[dsx1FracIndex='" <<dsx1fracindex <<"']" <<"[dsx1FracNumber='" <<dsx1fracnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Fractable::Dsx1Fracentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1FracTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx1fracindex.is_set || is_set(dsx1fracindex.operation)) leaf_name_data.push_back(dsx1fracindex.get_name_leafdata());
    if (dsx1fracnumber.is_set || is_set(dsx1fracnumber.operation)) leaf_name_data.push_back(dsx1fracnumber.get_name_leafdata());
    if (dsx1fracifindex.is_set || is_set(dsx1fracifindex.operation)) leaf_name_data.push_back(dsx1fracifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Fractable::Dsx1Fracentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Fractable::Dsx1Fracentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Fractable::Dsx1Fracentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx1FracIndex")
    {
        dsx1fracindex = value;
    }
    if(value_path == "dsx1FracNumber")
    {
        dsx1fracnumber = value;
    }
    if(value_path == "dsx1FracIfIndex")
    {
        dsx1fracifindex = value;
    }
}

Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingtable()
{
    yang_name = "dsx1ChanMappingTable"; yang_parent_name = "DS1-MIB";
}

Ds1Mib::Dsx1Chanmappingtable::~Dsx1Chanmappingtable()
{
}

bool Ds1Mib::Dsx1Chanmappingtable::has_data() const
{
    for (std::size_t index=0; index<dsx1chanmappingentry.size(); index++)
    {
        if(dsx1chanmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool Ds1Mib::Dsx1Chanmappingtable::has_operation() const
{
    for (std::size_t index=0; index<dsx1chanmappingentry.size(); index++)
    {
        if(dsx1chanmappingentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds1Mib::Dsx1Chanmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ChanMappingTable";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Chanmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Chanmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx1ChanMappingEntry")
    {
        for(auto const & c : dsx1chanmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry>();
        c->parent = this;
        dsx1chanmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Chanmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx1chanmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds1Mib::Dsx1Chanmappingtable::set_value(const std::string & value_path, std::string value)
{
}

Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::Dsx1Chanmappingentry()
    :
    ifindex{YType::str, "ifIndex"},
    dsx1ds1channelnumber{YType::str, "dsx1Ds1ChannelNumber"},
    dsx1chanmappedifindex{YType::int32, "dsx1ChanMappedIfIndex"}
{
    yang_name = "dsx1ChanMappingEntry"; yang_parent_name = "dsx1ChanMappingTable";
}

Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::~Dsx1Chanmappingentry()
{
}

bool Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::has_data() const
{
    return ifindex.is_set
	|| dsx1ds1channelnumber.is_set
	|| dsx1chanmappedifindex.is_set;
}

bool Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(dsx1ds1channelnumber.operation)
	|| is_set(dsx1chanmappedifindex.operation);
}

std::string Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx1ChanMappingEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[dsx1Ds1ChannelNumber='" <<dsx1ds1channelnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS1-MIB:DS1-MIB/dsx1ChanMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dsx1ds1channelnumber.is_set || is_set(dsx1ds1channelnumber.operation)) leaf_name_data.push_back(dsx1ds1channelnumber.get_name_leafdata());
    if (dsx1chanmappedifindex.is_set || is_set(dsx1chanmappedifindex.operation)) leaf_name_data.push_back(dsx1chanmappedifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "dsx1Ds1ChannelNumber")
    {
        dsx1ds1channelnumber = value;
    }
    if(value_path == "dsx1ChanMappedIfIndex")
    {
        dsx1chanmappedifindex = value;
    }
}

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::other {1, "other"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1ESF {2, "dsx1ESF"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1D4 {3, "dsx1D4"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1E1 {4, "dsx1E1"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1E1CRC {5, "dsx1E1CRC"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1E1MF {6, "dsx1E1MF"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1E1CRCMF {7, "dsx1E1CRCMF"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1Unframed {8, "dsx1Unframed"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1E1Unframed {9, "dsx1E1Unframed"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx1DS2M12 {10, "dsx1DS2M12"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum::dsx2E2 {11, "dsx2E2"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1JBZS {1, "dsx1JBZS"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1B8ZS {2, "dsx1B8ZS"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1HDB3 {3, "dsx1HDB3"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1ZBTSI {4, "dsx1ZBTSI"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1AMI {5, "dsx1AMI"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::other {6, "other"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum::dsx1B6ZS {7, "dsx1B6ZS"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendNoCode {1, "dsx1SendNoCode"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendLineCode {2, "dsx1SendLineCode"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendPayloadCode {3, "dsx1SendPayloadCode"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendResetCode {4, "dsx1SendResetCode"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendQRS {5, "dsx1SendQRS"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1Send511Pattern {6, "dsx1Send511Pattern"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1Send3in24Pattern {7, "dsx1Send3in24Pattern"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum::dsx1SendOtherTestPattern {8, "dsx1SendOtherTestPattern"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1NoLoop {1, "dsx1NoLoop"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1PayloadLoop {2, "dsx1PayloadLoop"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1LineLoop {3, "dsx1LineLoop"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1OtherLoop {4, "dsx1OtherLoop"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1InwardLoop {5, "dsx1InwardLoop"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum::dsx1DualLoop {6, "dsx1DualLoop"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum::none {1, "none"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum::robbedBit {2, "robbedBit"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum::bitOriented {3, "bitOriented"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum::messageOriented {4, "messageOriented"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum::other {5, "other"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1TransmitclocksourceEnum::loopTiming {1, "loopTiming"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1TransmitclocksourceEnum::localTiming {2, "localTiming"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1TransmitclocksourceEnum::throughTiming {3, "throughTiming"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinestatuschangetrapenableEnum::enabled {1, "enabled"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinestatuschangetrapenableEnum::disabled {2, "disabled"};

const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1ChannelizationEnum::disabled {1, "disabled"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1ChannelizationEnum::enabledDs0 {2, "enabledDs0"};
const Enum::YLeaf Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1ChannelizationEnum::enabledDs1 {3, "enabledDs1"};


}
}

