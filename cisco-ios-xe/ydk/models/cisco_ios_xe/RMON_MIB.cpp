
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RMON_MIB.hpp"

namespace ydk {
namespace RMON_MIB {

Rmoneventsv2Identity::Rmoneventsv2Identity()
     : Identity("RMON-MIB:rmonEventsV2")
{
}

Rmoneventsv2Identity::~Rmoneventsv2Identity()
{
}

RmonMib::RmonMib()
    :
    alarmtable(std::make_shared<RmonMib::Alarmtable>())
	,buffercontroltable(std::make_shared<RmonMib::Buffercontroltable>())
	,capturebuffertable(std::make_shared<RmonMib::Capturebuffertable>())
	,channeltable(std::make_shared<RmonMib::Channeltable>())
	,etherhistorytable(std::make_shared<RmonMib::Etherhistorytable>())
	,etherstatstable(std::make_shared<RmonMib::Etherstatstable>())
	,eventtable(std::make_shared<RmonMib::Eventtable>())
	,filtertable(std::make_shared<RmonMib::Filtertable>())
	,historycontroltable(std::make_shared<RmonMib::Historycontroltable>())
	,hostcontroltable(std::make_shared<RmonMib::Hostcontroltable>())
	,hosttable(std::make_shared<RmonMib::Hosttable>())
	,hosttimetable(std::make_shared<RmonMib::Hosttimetable>())
	,hosttopncontroltable(std::make_shared<RmonMib::Hosttopncontroltable>())
	,hosttopntable(std::make_shared<RmonMib::Hosttopntable>())
	,logtable(std::make_shared<RmonMib::Logtable>())
	,matrixcontroltable(std::make_shared<RmonMib::Matrixcontroltable>())
	,matrixdstable(std::make_shared<RmonMib::Matrixdstable>())
	,matrixsdtable(std::make_shared<RmonMib::Matrixsdtable>())
{
    alarmtable->parent = this;

    buffercontroltable->parent = this;

    capturebuffertable->parent = this;

    channeltable->parent = this;

    etherhistorytable->parent = this;

    etherstatstable->parent = this;

    eventtable->parent = this;

    filtertable->parent = this;

    historycontroltable->parent = this;

    hostcontroltable->parent = this;

    hosttable->parent = this;

    hosttimetable->parent = this;

    hosttopncontroltable->parent = this;

    hosttopntable->parent = this;

    logtable->parent = this;

    matrixcontroltable->parent = this;

    matrixdstable->parent = this;

    matrixsdtable->parent = this;

    yang_name = "RMON-MIB"; yang_parent_name = "RMON-MIB";
}

RmonMib::~RmonMib()
{
}

bool RmonMib::has_data() const
{
    return (alarmtable !=  nullptr && alarmtable->has_data())
	|| (buffercontroltable !=  nullptr && buffercontroltable->has_data())
	|| (capturebuffertable !=  nullptr && capturebuffertable->has_data())
	|| (channeltable !=  nullptr && channeltable->has_data())
	|| (etherhistorytable !=  nullptr && etherhistorytable->has_data())
	|| (etherstatstable !=  nullptr && etherstatstable->has_data())
	|| (eventtable !=  nullptr && eventtable->has_data())
	|| (filtertable !=  nullptr && filtertable->has_data())
	|| (historycontroltable !=  nullptr && historycontroltable->has_data())
	|| (hostcontroltable !=  nullptr && hostcontroltable->has_data())
	|| (hosttable !=  nullptr && hosttable->has_data())
	|| (hosttimetable !=  nullptr && hosttimetable->has_data())
	|| (hosttopncontroltable !=  nullptr && hosttopncontroltable->has_data())
	|| (hosttopntable !=  nullptr && hosttopntable->has_data())
	|| (logtable !=  nullptr && logtable->has_data())
	|| (matrixcontroltable !=  nullptr && matrixcontroltable->has_data())
	|| (matrixdstable !=  nullptr && matrixdstable->has_data())
	|| (matrixsdtable !=  nullptr && matrixsdtable->has_data());
}

bool RmonMib::has_operation() const
{
    return is_set(operation)
	|| (alarmtable !=  nullptr && alarmtable->has_operation())
	|| (buffercontroltable !=  nullptr && buffercontroltable->has_operation())
	|| (capturebuffertable !=  nullptr && capturebuffertable->has_operation())
	|| (channeltable !=  nullptr && channeltable->has_operation())
	|| (etherhistorytable !=  nullptr && etherhistorytable->has_operation())
	|| (etherstatstable !=  nullptr && etherstatstable->has_operation())
	|| (eventtable !=  nullptr && eventtable->has_operation())
	|| (filtertable !=  nullptr && filtertable->has_operation())
	|| (historycontroltable !=  nullptr && historycontroltable->has_operation())
	|| (hostcontroltable !=  nullptr && hostcontroltable->has_operation())
	|| (hosttable !=  nullptr && hosttable->has_operation())
	|| (hosttimetable !=  nullptr && hosttimetable->has_operation())
	|| (hosttopncontroltable !=  nullptr && hosttopncontroltable->has_operation())
	|| (hosttopntable !=  nullptr && hosttopntable->has_operation())
	|| (logtable !=  nullptr && logtable->has_operation())
	|| (matrixcontroltable !=  nullptr && matrixcontroltable->has_operation())
	|| (matrixdstable !=  nullptr && matrixdstable->has_operation())
	|| (matrixsdtable !=  nullptr && matrixsdtable->has_operation());
}

std::string RmonMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB";

    return path_buffer.str();

}

const EntityPath RmonMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RmonMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarmTable")
    {
        if(alarmtable == nullptr)
        {
            alarmtable = std::make_shared<RmonMib::Alarmtable>();
        }
        return alarmtable;
    }

    if(child_yang_name == "bufferControlTable")
    {
        if(buffercontroltable == nullptr)
        {
            buffercontroltable = std::make_shared<RmonMib::Buffercontroltable>();
        }
        return buffercontroltable;
    }

    if(child_yang_name == "captureBufferTable")
    {
        if(capturebuffertable == nullptr)
        {
            capturebuffertable = std::make_shared<RmonMib::Capturebuffertable>();
        }
        return capturebuffertable;
    }

    if(child_yang_name == "channelTable")
    {
        if(channeltable == nullptr)
        {
            channeltable = std::make_shared<RmonMib::Channeltable>();
        }
        return channeltable;
    }

    if(child_yang_name == "etherHistoryTable")
    {
        if(etherhistorytable == nullptr)
        {
            etherhistorytable = std::make_shared<RmonMib::Etherhistorytable>();
        }
        return etherhistorytable;
    }

    if(child_yang_name == "etherStatsTable")
    {
        if(etherstatstable == nullptr)
        {
            etherstatstable = std::make_shared<RmonMib::Etherstatstable>();
        }
        return etherstatstable;
    }

    if(child_yang_name == "eventTable")
    {
        if(eventtable == nullptr)
        {
            eventtable = std::make_shared<RmonMib::Eventtable>();
        }
        return eventtable;
    }

    if(child_yang_name == "filterTable")
    {
        if(filtertable == nullptr)
        {
            filtertable = std::make_shared<RmonMib::Filtertable>();
        }
        return filtertable;
    }

    if(child_yang_name == "historyControlTable")
    {
        if(historycontroltable == nullptr)
        {
            historycontroltable = std::make_shared<RmonMib::Historycontroltable>();
        }
        return historycontroltable;
    }

    if(child_yang_name == "hostControlTable")
    {
        if(hostcontroltable == nullptr)
        {
            hostcontroltable = std::make_shared<RmonMib::Hostcontroltable>();
        }
        return hostcontroltable;
    }

    if(child_yang_name == "hostTable")
    {
        if(hosttable == nullptr)
        {
            hosttable = std::make_shared<RmonMib::Hosttable>();
        }
        return hosttable;
    }

    if(child_yang_name == "hostTimeTable")
    {
        if(hosttimetable == nullptr)
        {
            hosttimetable = std::make_shared<RmonMib::Hosttimetable>();
        }
        return hosttimetable;
    }

    if(child_yang_name == "hostTopNControlTable")
    {
        if(hosttopncontroltable == nullptr)
        {
            hosttopncontroltable = std::make_shared<RmonMib::Hosttopncontroltable>();
        }
        return hosttopncontroltable;
    }

    if(child_yang_name == "hostTopNTable")
    {
        if(hosttopntable == nullptr)
        {
            hosttopntable = std::make_shared<RmonMib::Hosttopntable>();
        }
        return hosttopntable;
    }

    if(child_yang_name == "logTable")
    {
        if(logtable == nullptr)
        {
            logtable = std::make_shared<RmonMib::Logtable>();
        }
        return logtable;
    }

    if(child_yang_name == "matrixControlTable")
    {
        if(matrixcontroltable == nullptr)
        {
            matrixcontroltable = std::make_shared<RmonMib::Matrixcontroltable>();
        }
        return matrixcontroltable;
    }

    if(child_yang_name == "matrixDSTable")
    {
        if(matrixdstable == nullptr)
        {
            matrixdstable = std::make_shared<RmonMib::Matrixdstable>();
        }
        return matrixdstable;
    }

    if(child_yang_name == "matrixSDTable")
    {
        if(matrixsdtable == nullptr)
        {
            matrixsdtable = std::make_shared<RmonMib::Matrixsdtable>();
        }
        return matrixsdtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarmtable != nullptr)
    {
        children["alarmTable"] = alarmtable;
    }

    if(buffercontroltable != nullptr)
    {
        children["bufferControlTable"] = buffercontroltable;
    }

    if(capturebuffertable != nullptr)
    {
        children["captureBufferTable"] = capturebuffertable;
    }

    if(channeltable != nullptr)
    {
        children["channelTable"] = channeltable;
    }

    if(etherhistorytable != nullptr)
    {
        children["etherHistoryTable"] = etherhistorytable;
    }

    if(etherstatstable != nullptr)
    {
        children["etherStatsTable"] = etherstatstable;
    }

    if(eventtable != nullptr)
    {
        children["eventTable"] = eventtable;
    }

    if(filtertable != nullptr)
    {
        children["filterTable"] = filtertable;
    }

    if(historycontroltable != nullptr)
    {
        children["historyControlTable"] = historycontroltable;
    }

    if(hostcontroltable != nullptr)
    {
        children["hostControlTable"] = hostcontroltable;
    }

    if(hosttable != nullptr)
    {
        children["hostTable"] = hosttable;
    }

    if(hosttimetable != nullptr)
    {
        children["hostTimeTable"] = hosttimetable;
    }

    if(hosttopncontroltable != nullptr)
    {
        children["hostTopNControlTable"] = hosttopncontroltable;
    }

    if(hosttopntable != nullptr)
    {
        children["hostTopNTable"] = hosttopntable;
    }

    if(logtable != nullptr)
    {
        children["logTable"] = logtable;
    }

    if(matrixcontroltable != nullptr)
    {
        children["matrixControlTable"] = matrixcontroltable;
    }

    if(matrixdstable != nullptr)
    {
        children["matrixDSTable"] = matrixdstable;
    }

    if(matrixsdtable != nullptr)
    {
        children["matrixSDTable"] = matrixsdtable;
    }

    return children;
}

void RmonMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RmonMib::clone_ptr() const
{
    return std::make_shared<RmonMib>();
}

std::string RmonMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RmonMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RmonMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

RmonMib::Etherstatstable::Etherstatstable()
{
    yang_name = "etherStatsTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Etherstatstable::~Etherstatstable()
{
}

bool RmonMib::Etherstatstable::has_data() const
{
    for (std::size_t index=0; index<etherstatsentry.size(); index++)
    {
        if(etherstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Etherstatstable::has_operation() const
{
    for (std::size_t index=0; index<etherstatsentry.size(); index++)
    {
        if(etherstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Etherstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Etherstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Etherstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherStatsEntry")
    {
        for(auto const & c : etherstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Etherstatstable::Etherstatsentry>();
        c->parent = this;
        etherstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Etherstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Etherstatstable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Etherstatstable::Etherstatsentry::Etherstatsentry()
    :
    etherstatsindex{YType::int32, "etherStatsIndex"},
    etherstatsbroadcastpkts{YType::uint32, "etherStatsBroadcastPkts"},
    etherstatscollisions{YType::uint32, "etherStatsCollisions"},
    etherstatscrcalignerrors{YType::uint32, "etherStatsCRCAlignErrors"},
    etherstatsdatasource{YType::str, "etherStatsDataSource"},
    etherstatsdropevents{YType::uint32, "etherStatsDropEvents"},
    etherstatsfragments{YType::uint32, "etherStatsFragments"},
    etherstatsjabbers{YType::uint32, "etherStatsJabbers"},
    etherstatsmulticastpkts{YType::uint32, "etherStatsMulticastPkts"},
    etherstatsoctets{YType::uint32, "etherStatsOctets"},
    etherstatsoversizepkts{YType::uint32, "etherStatsOversizePkts"},
    etherstatsowner{YType::str, "etherStatsOwner"},
    etherstatspkts{YType::uint32, "etherStatsPkts"},
    etherstatspkts1024to1518octets{YType::uint32, "etherStatsPkts1024to1518Octets"},
    etherstatspkts128to255octets{YType::uint32, "etherStatsPkts128to255Octets"},
    etherstatspkts256to511octets{YType::uint32, "etherStatsPkts256to511Octets"},
    etherstatspkts512to1023octets{YType::uint32, "etherStatsPkts512to1023Octets"},
    etherstatspkts64octets{YType::uint32, "etherStatsPkts64Octets"},
    etherstatspkts65to127octets{YType::uint32, "etherStatsPkts65to127Octets"},
    etherstatsstatus{YType::enumeration, "etherStatsStatus"},
    etherstatsundersizepkts{YType::uint32, "etherStatsUndersizePkts"}
{
    yang_name = "etherStatsEntry"; yang_parent_name = "etherStatsTable";
}

RmonMib::Etherstatstable::Etherstatsentry::~Etherstatsentry()
{
}

bool RmonMib::Etherstatstable::Etherstatsentry::has_data() const
{
    return etherstatsindex.is_set
	|| etherstatsbroadcastpkts.is_set
	|| etherstatscollisions.is_set
	|| etherstatscrcalignerrors.is_set
	|| etherstatsdatasource.is_set
	|| etherstatsdropevents.is_set
	|| etherstatsfragments.is_set
	|| etherstatsjabbers.is_set
	|| etherstatsmulticastpkts.is_set
	|| etherstatsoctets.is_set
	|| etherstatsoversizepkts.is_set
	|| etherstatsowner.is_set
	|| etherstatspkts.is_set
	|| etherstatspkts1024to1518octets.is_set
	|| etherstatspkts128to255octets.is_set
	|| etherstatspkts256to511octets.is_set
	|| etherstatspkts512to1023octets.is_set
	|| etherstatspkts64octets.is_set
	|| etherstatspkts65to127octets.is_set
	|| etherstatsstatus.is_set
	|| etherstatsundersizepkts.is_set;
}

bool RmonMib::Etherstatstable::Etherstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(etherstatsindex.operation)
	|| is_set(etherstatsbroadcastpkts.operation)
	|| is_set(etherstatscollisions.operation)
	|| is_set(etherstatscrcalignerrors.operation)
	|| is_set(etherstatsdatasource.operation)
	|| is_set(etherstatsdropevents.operation)
	|| is_set(etherstatsfragments.operation)
	|| is_set(etherstatsjabbers.operation)
	|| is_set(etherstatsmulticastpkts.operation)
	|| is_set(etherstatsoctets.operation)
	|| is_set(etherstatsoversizepkts.operation)
	|| is_set(etherstatsowner.operation)
	|| is_set(etherstatspkts.operation)
	|| is_set(etherstatspkts1024to1518octets.operation)
	|| is_set(etherstatspkts128to255octets.operation)
	|| is_set(etherstatspkts256to511octets.operation)
	|| is_set(etherstatspkts512to1023octets.operation)
	|| is_set(etherstatspkts64octets.operation)
	|| is_set(etherstatspkts65to127octets.operation)
	|| is_set(etherstatsstatus.operation)
	|| is_set(etherstatsundersizepkts.operation);
}

std::string RmonMib::Etherstatstable::Etherstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsEntry" <<"[etherStatsIndex='" <<etherstatsindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Etherstatstable::Etherstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/etherStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etherstatsindex.is_set || is_set(etherstatsindex.operation)) leaf_name_data.push_back(etherstatsindex.get_name_leafdata());
    if (etherstatsbroadcastpkts.is_set || is_set(etherstatsbroadcastpkts.operation)) leaf_name_data.push_back(etherstatsbroadcastpkts.get_name_leafdata());
    if (etherstatscollisions.is_set || is_set(etherstatscollisions.operation)) leaf_name_data.push_back(etherstatscollisions.get_name_leafdata());
    if (etherstatscrcalignerrors.is_set || is_set(etherstatscrcalignerrors.operation)) leaf_name_data.push_back(etherstatscrcalignerrors.get_name_leafdata());
    if (etherstatsdatasource.is_set || is_set(etherstatsdatasource.operation)) leaf_name_data.push_back(etherstatsdatasource.get_name_leafdata());
    if (etherstatsdropevents.is_set || is_set(etherstatsdropevents.operation)) leaf_name_data.push_back(etherstatsdropevents.get_name_leafdata());
    if (etherstatsfragments.is_set || is_set(etherstatsfragments.operation)) leaf_name_data.push_back(etherstatsfragments.get_name_leafdata());
    if (etherstatsjabbers.is_set || is_set(etherstatsjabbers.operation)) leaf_name_data.push_back(etherstatsjabbers.get_name_leafdata());
    if (etherstatsmulticastpkts.is_set || is_set(etherstatsmulticastpkts.operation)) leaf_name_data.push_back(etherstatsmulticastpkts.get_name_leafdata());
    if (etherstatsoctets.is_set || is_set(etherstatsoctets.operation)) leaf_name_data.push_back(etherstatsoctets.get_name_leafdata());
    if (etherstatsoversizepkts.is_set || is_set(etherstatsoversizepkts.operation)) leaf_name_data.push_back(etherstatsoversizepkts.get_name_leafdata());
    if (etherstatsowner.is_set || is_set(etherstatsowner.operation)) leaf_name_data.push_back(etherstatsowner.get_name_leafdata());
    if (etherstatspkts.is_set || is_set(etherstatspkts.operation)) leaf_name_data.push_back(etherstatspkts.get_name_leafdata());
    if (etherstatspkts1024to1518octets.is_set || is_set(etherstatspkts1024to1518octets.operation)) leaf_name_data.push_back(etherstatspkts1024to1518octets.get_name_leafdata());
    if (etherstatspkts128to255octets.is_set || is_set(etherstatspkts128to255octets.operation)) leaf_name_data.push_back(etherstatspkts128to255octets.get_name_leafdata());
    if (etherstatspkts256to511octets.is_set || is_set(etherstatspkts256to511octets.operation)) leaf_name_data.push_back(etherstatspkts256to511octets.get_name_leafdata());
    if (etherstatspkts512to1023octets.is_set || is_set(etherstatspkts512to1023octets.operation)) leaf_name_data.push_back(etherstatspkts512to1023octets.get_name_leafdata());
    if (etherstatspkts64octets.is_set || is_set(etherstatspkts64octets.operation)) leaf_name_data.push_back(etherstatspkts64octets.get_name_leafdata());
    if (etherstatspkts65to127octets.is_set || is_set(etherstatspkts65to127octets.operation)) leaf_name_data.push_back(etherstatspkts65to127octets.get_name_leafdata());
    if (etherstatsstatus.is_set || is_set(etherstatsstatus.operation)) leaf_name_data.push_back(etherstatsstatus.get_name_leafdata());
    if (etherstatsundersizepkts.is_set || is_set(etherstatsundersizepkts.operation)) leaf_name_data.push_back(etherstatsundersizepkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Etherstatstable::Etherstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Etherstatstable::Etherstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Etherstatstable::Etherstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etherStatsIndex")
    {
        etherstatsindex = value;
    }
    if(value_path == "etherStatsBroadcastPkts")
    {
        etherstatsbroadcastpkts = value;
    }
    if(value_path == "etherStatsCollisions")
    {
        etherstatscollisions = value;
    }
    if(value_path == "etherStatsCRCAlignErrors")
    {
        etherstatscrcalignerrors = value;
    }
    if(value_path == "etherStatsDataSource")
    {
        etherstatsdatasource = value;
    }
    if(value_path == "etherStatsDropEvents")
    {
        etherstatsdropevents = value;
    }
    if(value_path == "etherStatsFragments")
    {
        etherstatsfragments = value;
    }
    if(value_path == "etherStatsJabbers")
    {
        etherstatsjabbers = value;
    }
    if(value_path == "etherStatsMulticastPkts")
    {
        etherstatsmulticastpkts = value;
    }
    if(value_path == "etherStatsOctets")
    {
        etherstatsoctets = value;
    }
    if(value_path == "etherStatsOversizePkts")
    {
        etherstatsoversizepkts = value;
    }
    if(value_path == "etherStatsOwner")
    {
        etherstatsowner = value;
    }
    if(value_path == "etherStatsPkts")
    {
        etherstatspkts = value;
    }
    if(value_path == "etherStatsPkts1024to1518Octets")
    {
        etherstatspkts1024to1518octets = value;
    }
    if(value_path == "etherStatsPkts128to255Octets")
    {
        etherstatspkts128to255octets = value;
    }
    if(value_path == "etherStatsPkts256to511Octets")
    {
        etherstatspkts256to511octets = value;
    }
    if(value_path == "etherStatsPkts512to1023Octets")
    {
        etherstatspkts512to1023octets = value;
    }
    if(value_path == "etherStatsPkts64Octets")
    {
        etherstatspkts64octets = value;
    }
    if(value_path == "etherStatsPkts65to127Octets")
    {
        etherstatspkts65to127octets = value;
    }
    if(value_path == "etherStatsStatus")
    {
        etherstatsstatus = value;
    }
    if(value_path == "etherStatsUndersizePkts")
    {
        etherstatsundersizepkts = value;
    }
}

RmonMib::Historycontroltable::Historycontroltable()
{
    yang_name = "historyControlTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Historycontroltable::~Historycontroltable()
{
}

bool RmonMib::Historycontroltable::has_data() const
{
    for (std::size_t index=0; index<historycontrolentry.size(); index++)
    {
        if(historycontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Historycontroltable::has_operation() const
{
    for (std::size_t index=0; index<historycontrolentry.size(); index++)
    {
        if(historycontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Historycontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Historycontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Historycontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "historyControlEntry")
    {
        for(auto const & c : historycontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Historycontroltable::Historycontrolentry>();
        c->parent = this;
        historycontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Historycontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : historycontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Historycontroltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Historycontroltable::Historycontrolentry::Historycontrolentry()
    :
    historycontrolindex{YType::int32, "historyControlIndex"},
    historycontrolbucketsgranted{YType::int32, "historyControlBucketsGranted"},
    historycontrolbucketsrequested{YType::int32, "historyControlBucketsRequested"},
    historycontroldatasource{YType::str, "historyControlDataSource"},
    historycontrolinterval{YType::int32, "historyControlInterval"},
    historycontrolowner{YType::str, "historyControlOwner"},
    historycontrolstatus{YType::enumeration, "historyControlStatus"}
{
    yang_name = "historyControlEntry"; yang_parent_name = "historyControlTable";
}

RmonMib::Historycontroltable::Historycontrolentry::~Historycontrolentry()
{
}

bool RmonMib::Historycontroltable::Historycontrolentry::has_data() const
{
    return historycontrolindex.is_set
	|| historycontrolbucketsgranted.is_set
	|| historycontrolbucketsrequested.is_set
	|| historycontroldatasource.is_set
	|| historycontrolinterval.is_set
	|| historycontrolowner.is_set
	|| historycontrolstatus.is_set;
}

bool RmonMib::Historycontroltable::Historycontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(historycontrolindex.operation)
	|| is_set(historycontrolbucketsgranted.operation)
	|| is_set(historycontrolbucketsrequested.operation)
	|| is_set(historycontroldatasource.operation)
	|| is_set(historycontrolinterval.operation)
	|| is_set(historycontrolowner.operation)
	|| is_set(historycontrolstatus.operation);
}

std::string RmonMib::Historycontroltable::Historycontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlEntry" <<"[historyControlIndex='" <<historycontrolindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Historycontroltable::Historycontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/historyControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (historycontrolindex.is_set || is_set(historycontrolindex.operation)) leaf_name_data.push_back(historycontrolindex.get_name_leafdata());
    if (historycontrolbucketsgranted.is_set || is_set(historycontrolbucketsgranted.operation)) leaf_name_data.push_back(historycontrolbucketsgranted.get_name_leafdata());
    if (historycontrolbucketsrequested.is_set || is_set(historycontrolbucketsrequested.operation)) leaf_name_data.push_back(historycontrolbucketsrequested.get_name_leafdata());
    if (historycontroldatasource.is_set || is_set(historycontroldatasource.operation)) leaf_name_data.push_back(historycontroldatasource.get_name_leafdata());
    if (historycontrolinterval.is_set || is_set(historycontrolinterval.operation)) leaf_name_data.push_back(historycontrolinterval.get_name_leafdata());
    if (historycontrolowner.is_set || is_set(historycontrolowner.operation)) leaf_name_data.push_back(historycontrolowner.get_name_leafdata());
    if (historycontrolstatus.is_set || is_set(historycontrolstatus.operation)) leaf_name_data.push_back(historycontrolstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Historycontroltable::Historycontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Historycontroltable::Historycontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Historycontroltable::Historycontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "historyControlIndex")
    {
        historycontrolindex = value;
    }
    if(value_path == "historyControlBucketsGranted")
    {
        historycontrolbucketsgranted = value;
    }
    if(value_path == "historyControlBucketsRequested")
    {
        historycontrolbucketsrequested = value;
    }
    if(value_path == "historyControlDataSource")
    {
        historycontroldatasource = value;
    }
    if(value_path == "historyControlInterval")
    {
        historycontrolinterval = value;
    }
    if(value_path == "historyControlOwner")
    {
        historycontrolowner = value;
    }
    if(value_path == "historyControlStatus")
    {
        historycontrolstatus = value;
    }
}

RmonMib::Etherhistorytable::Etherhistorytable()
{
    yang_name = "etherHistoryTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Etherhistorytable::~Etherhistorytable()
{
}

bool RmonMib::Etherhistorytable::has_data() const
{
    for (std::size_t index=0; index<etherhistoryentry.size(); index++)
    {
        if(etherhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Etherhistorytable::has_operation() const
{
    for (std::size_t index=0; index<etherhistoryentry.size(); index++)
    {
        if(etherhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Etherhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Etherhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Etherhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherHistoryEntry")
    {
        for(auto const & c : etherhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Etherhistorytable::Etherhistoryentry>();
        c->parent = this;
        etherhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Etherhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Etherhistorytable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Etherhistorytable::Etherhistoryentry::Etherhistoryentry()
    :
    etherhistoryindex{YType::int32, "etherHistoryIndex"},
    etherhistorysampleindex{YType::int32, "etherHistorySampleIndex"},
    etherhistorybroadcastpkts{YType::uint32, "etherHistoryBroadcastPkts"},
    etherhistorycollisions{YType::uint32, "etherHistoryCollisions"},
    etherhistorycrcalignerrors{YType::uint32, "etherHistoryCRCAlignErrors"},
    etherhistorydropevents{YType::uint32, "etherHistoryDropEvents"},
    etherhistoryfragments{YType::uint32, "etherHistoryFragments"},
    etherhistoryintervalstart{YType::uint32, "etherHistoryIntervalStart"},
    etherhistoryjabbers{YType::uint32, "etherHistoryJabbers"},
    etherhistorymulticastpkts{YType::uint32, "etherHistoryMulticastPkts"},
    etherhistoryoctets{YType::uint32, "etherHistoryOctets"},
    etherhistoryoversizepkts{YType::uint32, "etherHistoryOversizePkts"},
    etherhistorypkts{YType::uint32, "etherHistoryPkts"},
    etherhistoryundersizepkts{YType::uint32, "etherHistoryUndersizePkts"},
    etherhistoryutilization{YType::int32, "etherHistoryUtilization"}
{
    yang_name = "etherHistoryEntry"; yang_parent_name = "etherHistoryTable";
}

RmonMib::Etherhistorytable::Etherhistoryentry::~Etherhistoryentry()
{
}

bool RmonMib::Etherhistorytable::Etherhistoryentry::has_data() const
{
    return etherhistoryindex.is_set
	|| etherhistorysampleindex.is_set
	|| etherhistorybroadcastpkts.is_set
	|| etherhistorycollisions.is_set
	|| etherhistorycrcalignerrors.is_set
	|| etherhistorydropevents.is_set
	|| etherhistoryfragments.is_set
	|| etherhistoryintervalstart.is_set
	|| etherhistoryjabbers.is_set
	|| etherhistorymulticastpkts.is_set
	|| etherhistoryoctets.is_set
	|| etherhistoryoversizepkts.is_set
	|| etherhistorypkts.is_set
	|| etherhistoryundersizepkts.is_set
	|| etherhistoryutilization.is_set;
}

bool RmonMib::Etherhistorytable::Etherhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(etherhistoryindex.operation)
	|| is_set(etherhistorysampleindex.operation)
	|| is_set(etherhistorybroadcastpkts.operation)
	|| is_set(etherhistorycollisions.operation)
	|| is_set(etherhistorycrcalignerrors.operation)
	|| is_set(etherhistorydropevents.operation)
	|| is_set(etherhistoryfragments.operation)
	|| is_set(etherhistoryintervalstart.operation)
	|| is_set(etherhistoryjabbers.operation)
	|| is_set(etherhistorymulticastpkts.operation)
	|| is_set(etherhistoryoctets.operation)
	|| is_set(etherhistoryoversizepkts.operation)
	|| is_set(etherhistorypkts.operation)
	|| is_set(etherhistoryundersizepkts.operation)
	|| is_set(etherhistoryutilization.operation);
}

std::string RmonMib::Etherhistorytable::Etherhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryEntry" <<"[etherHistoryIndex='" <<etherhistoryindex <<"']" <<"[etherHistorySampleIndex='" <<etherhistorysampleindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Etherhistorytable::Etherhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/etherHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etherhistoryindex.is_set || is_set(etherhistoryindex.operation)) leaf_name_data.push_back(etherhistoryindex.get_name_leafdata());
    if (etherhistorysampleindex.is_set || is_set(etherhistorysampleindex.operation)) leaf_name_data.push_back(etherhistorysampleindex.get_name_leafdata());
    if (etherhistorybroadcastpkts.is_set || is_set(etherhistorybroadcastpkts.operation)) leaf_name_data.push_back(etherhistorybroadcastpkts.get_name_leafdata());
    if (etherhistorycollisions.is_set || is_set(etherhistorycollisions.operation)) leaf_name_data.push_back(etherhistorycollisions.get_name_leafdata());
    if (etherhistorycrcalignerrors.is_set || is_set(etherhistorycrcalignerrors.operation)) leaf_name_data.push_back(etherhistorycrcalignerrors.get_name_leafdata());
    if (etherhistorydropevents.is_set || is_set(etherhistorydropevents.operation)) leaf_name_data.push_back(etherhistorydropevents.get_name_leafdata());
    if (etherhistoryfragments.is_set || is_set(etherhistoryfragments.operation)) leaf_name_data.push_back(etherhistoryfragments.get_name_leafdata());
    if (etherhistoryintervalstart.is_set || is_set(etherhistoryintervalstart.operation)) leaf_name_data.push_back(etherhistoryintervalstart.get_name_leafdata());
    if (etherhistoryjabbers.is_set || is_set(etherhistoryjabbers.operation)) leaf_name_data.push_back(etherhistoryjabbers.get_name_leafdata());
    if (etherhistorymulticastpkts.is_set || is_set(etherhistorymulticastpkts.operation)) leaf_name_data.push_back(etherhistorymulticastpkts.get_name_leafdata());
    if (etherhistoryoctets.is_set || is_set(etherhistoryoctets.operation)) leaf_name_data.push_back(etherhistoryoctets.get_name_leafdata());
    if (etherhistoryoversizepkts.is_set || is_set(etherhistoryoversizepkts.operation)) leaf_name_data.push_back(etherhistoryoversizepkts.get_name_leafdata());
    if (etherhistorypkts.is_set || is_set(etherhistorypkts.operation)) leaf_name_data.push_back(etherhistorypkts.get_name_leafdata());
    if (etherhistoryundersizepkts.is_set || is_set(etherhistoryundersizepkts.operation)) leaf_name_data.push_back(etherhistoryundersizepkts.get_name_leafdata());
    if (etherhistoryutilization.is_set || is_set(etherhistoryutilization.operation)) leaf_name_data.push_back(etherhistoryutilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Etherhistorytable::Etherhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Etherhistorytable::Etherhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Etherhistorytable::Etherhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etherHistoryIndex")
    {
        etherhistoryindex = value;
    }
    if(value_path == "etherHistorySampleIndex")
    {
        etherhistorysampleindex = value;
    }
    if(value_path == "etherHistoryBroadcastPkts")
    {
        etherhistorybroadcastpkts = value;
    }
    if(value_path == "etherHistoryCollisions")
    {
        etherhistorycollisions = value;
    }
    if(value_path == "etherHistoryCRCAlignErrors")
    {
        etherhistorycrcalignerrors = value;
    }
    if(value_path == "etherHistoryDropEvents")
    {
        etherhistorydropevents = value;
    }
    if(value_path == "etherHistoryFragments")
    {
        etherhistoryfragments = value;
    }
    if(value_path == "etherHistoryIntervalStart")
    {
        etherhistoryintervalstart = value;
    }
    if(value_path == "etherHistoryJabbers")
    {
        etherhistoryjabbers = value;
    }
    if(value_path == "etherHistoryMulticastPkts")
    {
        etherhistorymulticastpkts = value;
    }
    if(value_path == "etherHistoryOctets")
    {
        etherhistoryoctets = value;
    }
    if(value_path == "etherHistoryOversizePkts")
    {
        etherhistoryoversizepkts = value;
    }
    if(value_path == "etherHistoryPkts")
    {
        etherhistorypkts = value;
    }
    if(value_path == "etherHistoryUndersizePkts")
    {
        etherhistoryundersizepkts = value;
    }
    if(value_path == "etherHistoryUtilization")
    {
        etherhistoryutilization = value;
    }
}

RmonMib::Alarmtable::Alarmtable()
{
    yang_name = "alarmTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Alarmtable::~Alarmtable()
{
}

bool RmonMib::Alarmtable::has_data() const
{
    for (std::size_t index=0; index<alarmentry.size(); index++)
    {
        if(alarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Alarmtable::has_operation() const
{
    for (std::size_t index=0; index<alarmentry.size(); index++)
    {
        if(alarmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Alarmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Alarmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Alarmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarmEntry")
    {
        for(auto const & c : alarmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Alarmtable::Alarmentry>();
        c->parent = this;
        alarmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Alarmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Alarmtable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Alarmtable::Alarmentry::Alarmentry()
    :
    alarmindex{YType::int32, "alarmIndex"},
    alarmfallingeventindex{YType::int32, "alarmFallingEventIndex"},
    alarmfallingthreshold{YType::int32, "alarmFallingThreshold"},
    alarminterval{YType::int32, "alarmInterval"},
    alarmowner{YType::str, "alarmOwner"},
    alarmrisingeventindex{YType::int32, "alarmRisingEventIndex"},
    alarmrisingthreshold{YType::int32, "alarmRisingThreshold"},
    alarmsampletype{YType::enumeration, "alarmSampleType"},
    alarmstartupalarm{YType::enumeration, "alarmStartupAlarm"},
    alarmstatus{YType::enumeration, "alarmStatus"},
    alarmvalue{YType::int32, "alarmValue"},
    alarmvariable{YType::str, "alarmVariable"}
{
    yang_name = "alarmEntry"; yang_parent_name = "alarmTable";
}

RmonMib::Alarmtable::Alarmentry::~Alarmentry()
{
}

bool RmonMib::Alarmtable::Alarmentry::has_data() const
{
    return alarmindex.is_set
	|| alarmfallingeventindex.is_set
	|| alarmfallingthreshold.is_set
	|| alarminterval.is_set
	|| alarmowner.is_set
	|| alarmrisingeventindex.is_set
	|| alarmrisingthreshold.is_set
	|| alarmsampletype.is_set
	|| alarmstartupalarm.is_set
	|| alarmstatus.is_set
	|| alarmvalue.is_set
	|| alarmvariable.is_set;
}

bool RmonMib::Alarmtable::Alarmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(alarmindex.operation)
	|| is_set(alarmfallingeventindex.operation)
	|| is_set(alarmfallingthreshold.operation)
	|| is_set(alarminterval.operation)
	|| is_set(alarmowner.operation)
	|| is_set(alarmrisingeventindex.operation)
	|| is_set(alarmrisingthreshold.operation)
	|| is_set(alarmsampletype.operation)
	|| is_set(alarmstartupalarm.operation)
	|| is_set(alarmstatus.operation)
	|| is_set(alarmvalue.operation)
	|| is_set(alarmvariable.operation);
}

std::string RmonMib::Alarmtable::Alarmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmEntry" <<"[alarmIndex='" <<alarmindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Alarmtable::Alarmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/alarmTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarmindex.is_set || is_set(alarmindex.operation)) leaf_name_data.push_back(alarmindex.get_name_leafdata());
    if (alarmfallingeventindex.is_set || is_set(alarmfallingeventindex.operation)) leaf_name_data.push_back(alarmfallingeventindex.get_name_leafdata());
    if (alarmfallingthreshold.is_set || is_set(alarmfallingthreshold.operation)) leaf_name_data.push_back(alarmfallingthreshold.get_name_leafdata());
    if (alarminterval.is_set || is_set(alarminterval.operation)) leaf_name_data.push_back(alarminterval.get_name_leafdata());
    if (alarmowner.is_set || is_set(alarmowner.operation)) leaf_name_data.push_back(alarmowner.get_name_leafdata());
    if (alarmrisingeventindex.is_set || is_set(alarmrisingeventindex.operation)) leaf_name_data.push_back(alarmrisingeventindex.get_name_leafdata());
    if (alarmrisingthreshold.is_set || is_set(alarmrisingthreshold.operation)) leaf_name_data.push_back(alarmrisingthreshold.get_name_leafdata());
    if (alarmsampletype.is_set || is_set(alarmsampletype.operation)) leaf_name_data.push_back(alarmsampletype.get_name_leafdata());
    if (alarmstartupalarm.is_set || is_set(alarmstartupalarm.operation)) leaf_name_data.push_back(alarmstartupalarm.get_name_leafdata());
    if (alarmstatus.is_set || is_set(alarmstatus.operation)) leaf_name_data.push_back(alarmstatus.get_name_leafdata());
    if (alarmvalue.is_set || is_set(alarmvalue.operation)) leaf_name_data.push_back(alarmvalue.get_name_leafdata());
    if (alarmvariable.is_set || is_set(alarmvariable.operation)) leaf_name_data.push_back(alarmvariable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Alarmtable::Alarmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Alarmtable::Alarmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Alarmtable::Alarmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarmIndex")
    {
        alarmindex = value;
    }
    if(value_path == "alarmFallingEventIndex")
    {
        alarmfallingeventindex = value;
    }
    if(value_path == "alarmFallingThreshold")
    {
        alarmfallingthreshold = value;
    }
    if(value_path == "alarmInterval")
    {
        alarminterval = value;
    }
    if(value_path == "alarmOwner")
    {
        alarmowner = value;
    }
    if(value_path == "alarmRisingEventIndex")
    {
        alarmrisingeventindex = value;
    }
    if(value_path == "alarmRisingThreshold")
    {
        alarmrisingthreshold = value;
    }
    if(value_path == "alarmSampleType")
    {
        alarmsampletype = value;
    }
    if(value_path == "alarmStartupAlarm")
    {
        alarmstartupalarm = value;
    }
    if(value_path == "alarmStatus")
    {
        alarmstatus = value;
    }
    if(value_path == "alarmValue")
    {
        alarmvalue = value;
    }
    if(value_path == "alarmVariable")
    {
        alarmvariable = value;
    }
}

RmonMib::Hostcontroltable::Hostcontroltable()
{
    yang_name = "hostControlTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Hostcontroltable::~Hostcontroltable()
{
}

bool RmonMib::Hostcontroltable::has_data() const
{
    for (std::size_t index=0; index<hostcontrolentry.size(); index++)
    {
        if(hostcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Hostcontroltable::has_operation() const
{
    for (std::size_t index=0; index<hostcontrolentry.size(); index++)
    {
        if(hostcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Hostcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Hostcontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hostcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostControlEntry")
    {
        for(auto const & c : hostcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Hostcontroltable::Hostcontrolentry>();
        c->parent = this;
        hostcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hostcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hostcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Hostcontroltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Hostcontroltable::Hostcontrolentry::Hostcontrolentry()
    :
    hostcontrolindex{YType::int32, "hostControlIndex"},
    hostcontroldatasource{YType::str, "hostControlDataSource"},
    hostcontrollastdeletetime{YType::uint32, "hostControlLastDeleteTime"},
    hostcontrolowner{YType::str, "hostControlOwner"},
    hostcontrolstatus{YType::enumeration, "hostControlStatus"},
    hostcontroltablesize{YType::int32, "hostControlTableSize"}
{
    yang_name = "hostControlEntry"; yang_parent_name = "hostControlTable";
}

RmonMib::Hostcontroltable::Hostcontrolentry::~Hostcontrolentry()
{
}

bool RmonMib::Hostcontroltable::Hostcontrolentry::has_data() const
{
    return hostcontrolindex.is_set
	|| hostcontroldatasource.is_set
	|| hostcontrollastdeletetime.is_set
	|| hostcontrolowner.is_set
	|| hostcontrolstatus.is_set
	|| hostcontroltablesize.is_set;
}

bool RmonMib::Hostcontroltable::Hostcontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(hostcontrolindex.operation)
	|| is_set(hostcontroldatasource.operation)
	|| is_set(hostcontrollastdeletetime.operation)
	|| is_set(hostcontrolowner.operation)
	|| is_set(hostcontrolstatus.operation)
	|| is_set(hostcontroltablesize.operation);
}

std::string RmonMib::Hostcontroltable::Hostcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlEntry" <<"[hostControlIndex='" <<hostcontrolindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Hostcontroltable::Hostcontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/hostControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostcontrolindex.is_set || is_set(hostcontrolindex.operation)) leaf_name_data.push_back(hostcontrolindex.get_name_leafdata());
    if (hostcontroldatasource.is_set || is_set(hostcontroldatasource.operation)) leaf_name_data.push_back(hostcontroldatasource.get_name_leafdata());
    if (hostcontrollastdeletetime.is_set || is_set(hostcontrollastdeletetime.operation)) leaf_name_data.push_back(hostcontrollastdeletetime.get_name_leafdata());
    if (hostcontrolowner.is_set || is_set(hostcontrolowner.operation)) leaf_name_data.push_back(hostcontrolowner.get_name_leafdata());
    if (hostcontrolstatus.is_set || is_set(hostcontrolstatus.operation)) leaf_name_data.push_back(hostcontrolstatus.get_name_leafdata());
    if (hostcontroltablesize.is_set || is_set(hostcontroltablesize.operation)) leaf_name_data.push_back(hostcontroltablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hostcontroltable::Hostcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hostcontroltable::Hostcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Hostcontroltable::Hostcontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostControlIndex")
    {
        hostcontrolindex = value;
    }
    if(value_path == "hostControlDataSource")
    {
        hostcontroldatasource = value;
    }
    if(value_path == "hostControlLastDeleteTime")
    {
        hostcontrollastdeletetime = value;
    }
    if(value_path == "hostControlOwner")
    {
        hostcontrolowner = value;
    }
    if(value_path == "hostControlStatus")
    {
        hostcontrolstatus = value;
    }
    if(value_path == "hostControlTableSize")
    {
        hostcontroltablesize = value;
    }
}

RmonMib::Hosttable::Hosttable()
{
    yang_name = "hostTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Hosttable::~Hosttable()
{
}

bool RmonMib::Hosttable::has_data() const
{
    for (std::size_t index=0; index<hostentry.size(); index++)
    {
        if(hostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Hosttable::has_operation() const
{
    for (std::size_t index=0; index<hostentry.size(); index++)
    {
        if(hostentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Hosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostEntry")
    {
        for(auto const & c : hostentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Hosttable::Hostentry>();
        c->parent = this;
        hostentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hostentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Hosttable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Hosttable::Hostentry::Hostentry()
    :
    hostindex{YType::int32, "hostIndex"},
    hostaddress{YType::str, "hostAddress"},
    hostcreationorder{YType::int32, "hostCreationOrder"},
    hostinoctets{YType::uint32, "hostInOctets"},
    hostinpkts{YType::uint32, "hostInPkts"},
    hostoutbroadcastpkts{YType::uint32, "hostOutBroadcastPkts"},
    hostouterrors{YType::uint32, "hostOutErrors"},
    hostoutmulticastpkts{YType::uint32, "hostOutMulticastPkts"},
    hostoutoctets{YType::uint32, "hostOutOctets"},
    hostoutpkts{YType::uint32, "hostOutPkts"}
{
    yang_name = "hostEntry"; yang_parent_name = "hostTable";
}

RmonMib::Hosttable::Hostentry::~Hostentry()
{
}

bool RmonMib::Hosttable::Hostentry::has_data() const
{
    return hostindex.is_set
	|| hostaddress.is_set
	|| hostcreationorder.is_set
	|| hostinoctets.is_set
	|| hostinpkts.is_set
	|| hostoutbroadcastpkts.is_set
	|| hostouterrors.is_set
	|| hostoutmulticastpkts.is_set
	|| hostoutoctets.is_set
	|| hostoutpkts.is_set;
}

bool RmonMib::Hosttable::Hostentry::has_operation() const
{
    return is_set(operation)
	|| is_set(hostindex.operation)
	|| is_set(hostaddress.operation)
	|| is_set(hostcreationorder.operation)
	|| is_set(hostinoctets.operation)
	|| is_set(hostinpkts.operation)
	|| is_set(hostoutbroadcastpkts.operation)
	|| is_set(hostouterrors.operation)
	|| is_set(hostoutmulticastpkts.operation)
	|| is_set(hostoutoctets.operation)
	|| is_set(hostoutpkts.operation);
}

std::string RmonMib::Hosttable::Hostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostEntry" <<"[hostIndex='" <<hostindex <<"']" <<"[hostAddress='" <<hostaddress <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttable::Hostentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/hostTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostindex.is_set || is_set(hostindex.operation)) leaf_name_data.push_back(hostindex.get_name_leafdata());
    if (hostaddress.is_set || is_set(hostaddress.operation)) leaf_name_data.push_back(hostaddress.get_name_leafdata());
    if (hostcreationorder.is_set || is_set(hostcreationorder.operation)) leaf_name_data.push_back(hostcreationorder.get_name_leafdata());
    if (hostinoctets.is_set || is_set(hostinoctets.operation)) leaf_name_data.push_back(hostinoctets.get_name_leafdata());
    if (hostinpkts.is_set || is_set(hostinpkts.operation)) leaf_name_data.push_back(hostinpkts.get_name_leafdata());
    if (hostoutbroadcastpkts.is_set || is_set(hostoutbroadcastpkts.operation)) leaf_name_data.push_back(hostoutbroadcastpkts.get_name_leafdata());
    if (hostouterrors.is_set || is_set(hostouterrors.operation)) leaf_name_data.push_back(hostouterrors.get_name_leafdata());
    if (hostoutmulticastpkts.is_set || is_set(hostoutmulticastpkts.operation)) leaf_name_data.push_back(hostoutmulticastpkts.get_name_leafdata());
    if (hostoutoctets.is_set || is_set(hostoutoctets.operation)) leaf_name_data.push_back(hostoutoctets.get_name_leafdata());
    if (hostoutpkts.is_set || is_set(hostoutpkts.operation)) leaf_name_data.push_back(hostoutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttable::Hostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttable::Hostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Hosttable::Hostentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostIndex")
    {
        hostindex = value;
    }
    if(value_path == "hostAddress")
    {
        hostaddress = value;
    }
    if(value_path == "hostCreationOrder")
    {
        hostcreationorder = value;
    }
    if(value_path == "hostInOctets")
    {
        hostinoctets = value;
    }
    if(value_path == "hostInPkts")
    {
        hostinpkts = value;
    }
    if(value_path == "hostOutBroadcastPkts")
    {
        hostoutbroadcastpkts = value;
    }
    if(value_path == "hostOutErrors")
    {
        hostouterrors = value;
    }
    if(value_path == "hostOutMulticastPkts")
    {
        hostoutmulticastpkts = value;
    }
    if(value_path == "hostOutOctets")
    {
        hostoutoctets = value;
    }
    if(value_path == "hostOutPkts")
    {
        hostoutpkts = value;
    }
}

RmonMib::Hosttimetable::Hosttimetable()
{
    yang_name = "hostTimeTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Hosttimetable::~Hosttimetable()
{
}

bool RmonMib::Hosttimetable::has_data() const
{
    for (std::size_t index=0; index<hosttimeentry.size(); index++)
    {
        if(hosttimeentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Hosttimetable::has_operation() const
{
    for (std::size_t index=0; index<hosttimeentry.size(); index++)
    {
        if(hosttimeentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Hosttimetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttimetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttimetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTimeEntry")
    {
        for(auto const & c : hosttimeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Hosttimetable::Hosttimeentry>();
        c->parent = this;
        hosttimeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttimetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttimeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Hosttimetable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Hosttimetable::Hosttimeentry::Hosttimeentry()
    :
    hosttimeindex{YType::int32, "hostTimeIndex"},
    hosttimecreationorder{YType::int32, "hostTimeCreationOrder"},
    hosttimeaddress{YType::str, "hostTimeAddress"},
    hosttimeinoctets{YType::uint32, "hostTimeInOctets"},
    hosttimeinpkts{YType::uint32, "hostTimeInPkts"},
    hosttimeoutbroadcastpkts{YType::uint32, "hostTimeOutBroadcastPkts"},
    hosttimeouterrors{YType::uint32, "hostTimeOutErrors"},
    hosttimeoutmulticastpkts{YType::uint32, "hostTimeOutMulticastPkts"},
    hosttimeoutoctets{YType::uint32, "hostTimeOutOctets"},
    hosttimeoutpkts{YType::uint32, "hostTimeOutPkts"}
{
    yang_name = "hostTimeEntry"; yang_parent_name = "hostTimeTable";
}

RmonMib::Hosttimetable::Hosttimeentry::~Hosttimeentry()
{
}

bool RmonMib::Hosttimetable::Hosttimeentry::has_data() const
{
    return hosttimeindex.is_set
	|| hosttimecreationorder.is_set
	|| hosttimeaddress.is_set
	|| hosttimeinoctets.is_set
	|| hosttimeinpkts.is_set
	|| hosttimeoutbroadcastpkts.is_set
	|| hosttimeouterrors.is_set
	|| hosttimeoutmulticastpkts.is_set
	|| hosttimeoutoctets.is_set
	|| hosttimeoutpkts.is_set;
}

bool RmonMib::Hosttimetable::Hosttimeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(hosttimeindex.operation)
	|| is_set(hosttimecreationorder.operation)
	|| is_set(hosttimeaddress.operation)
	|| is_set(hosttimeinoctets.operation)
	|| is_set(hosttimeinpkts.operation)
	|| is_set(hosttimeoutbroadcastpkts.operation)
	|| is_set(hosttimeouterrors.operation)
	|| is_set(hosttimeoutmulticastpkts.operation)
	|| is_set(hosttimeoutoctets.operation)
	|| is_set(hosttimeoutpkts.operation);
}

std::string RmonMib::Hosttimetable::Hosttimeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeEntry" <<"[hostTimeIndex='" <<hosttimeindex <<"']" <<"[hostTimeCreationOrder='" <<hosttimecreationorder <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttimetable::Hosttimeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/hostTimeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttimeindex.is_set || is_set(hosttimeindex.operation)) leaf_name_data.push_back(hosttimeindex.get_name_leafdata());
    if (hosttimecreationorder.is_set || is_set(hosttimecreationorder.operation)) leaf_name_data.push_back(hosttimecreationorder.get_name_leafdata());
    if (hosttimeaddress.is_set || is_set(hosttimeaddress.operation)) leaf_name_data.push_back(hosttimeaddress.get_name_leafdata());
    if (hosttimeinoctets.is_set || is_set(hosttimeinoctets.operation)) leaf_name_data.push_back(hosttimeinoctets.get_name_leafdata());
    if (hosttimeinpkts.is_set || is_set(hosttimeinpkts.operation)) leaf_name_data.push_back(hosttimeinpkts.get_name_leafdata());
    if (hosttimeoutbroadcastpkts.is_set || is_set(hosttimeoutbroadcastpkts.operation)) leaf_name_data.push_back(hosttimeoutbroadcastpkts.get_name_leafdata());
    if (hosttimeouterrors.is_set || is_set(hosttimeouterrors.operation)) leaf_name_data.push_back(hosttimeouterrors.get_name_leafdata());
    if (hosttimeoutmulticastpkts.is_set || is_set(hosttimeoutmulticastpkts.operation)) leaf_name_data.push_back(hosttimeoutmulticastpkts.get_name_leafdata());
    if (hosttimeoutoctets.is_set || is_set(hosttimeoutoctets.operation)) leaf_name_data.push_back(hosttimeoutoctets.get_name_leafdata());
    if (hosttimeoutpkts.is_set || is_set(hosttimeoutpkts.operation)) leaf_name_data.push_back(hosttimeoutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttimetable::Hosttimeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttimetable::Hosttimeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Hosttimetable::Hosttimeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostTimeIndex")
    {
        hosttimeindex = value;
    }
    if(value_path == "hostTimeCreationOrder")
    {
        hosttimecreationorder = value;
    }
    if(value_path == "hostTimeAddress")
    {
        hosttimeaddress = value;
    }
    if(value_path == "hostTimeInOctets")
    {
        hosttimeinoctets = value;
    }
    if(value_path == "hostTimeInPkts")
    {
        hosttimeinpkts = value;
    }
    if(value_path == "hostTimeOutBroadcastPkts")
    {
        hosttimeoutbroadcastpkts = value;
    }
    if(value_path == "hostTimeOutErrors")
    {
        hosttimeouterrors = value;
    }
    if(value_path == "hostTimeOutMulticastPkts")
    {
        hosttimeoutmulticastpkts = value;
    }
    if(value_path == "hostTimeOutOctets")
    {
        hosttimeoutoctets = value;
    }
    if(value_path == "hostTimeOutPkts")
    {
        hosttimeoutpkts = value;
    }
}

RmonMib::Hosttopncontroltable::Hosttopncontroltable()
{
    yang_name = "hostTopNControlTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Hosttopncontroltable::~Hosttopncontroltable()
{
}

bool RmonMib::Hosttopncontroltable::has_data() const
{
    for (std::size_t index=0; index<hosttopncontrolentry.size(); index++)
    {
        if(hosttopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Hosttopncontroltable::has_operation() const
{
    for (std::size_t index=0; index<hosttopncontrolentry.size(); index++)
    {
        if(hosttopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Hosttopncontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttopncontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttopncontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTopNControlEntry")
    {
        for(auto const & c : hosttopncontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Hosttopncontroltable::Hosttopncontrolentry>();
        c->parent = this;
        hosttopncontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttopncontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttopncontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Hosttopncontroltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Hosttopncontroltable::Hosttopncontrolentry::Hosttopncontrolentry()
    :
    hosttopncontrolindex{YType::int32, "hostTopNControlIndex"},
    hosttopnduration{YType::int32, "hostTopNDuration"},
    hosttopngrantedsize{YType::int32, "hostTopNGrantedSize"},
    hosttopnhostindex{YType::int32, "hostTopNHostIndex"},
    hosttopnowner{YType::str, "hostTopNOwner"},
    hosttopnratebase{YType::enumeration, "hostTopNRateBase"},
    hosttopnrequestedsize{YType::int32, "hostTopNRequestedSize"},
    hosttopnstarttime{YType::uint32, "hostTopNStartTime"},
    hosttopnstatus{YType::enumeration, "hostTopNStatus"},
    hosttopntimeremaining{YType::int32, "hostTopNTimeRemaining"}
{
    yang_name = "hostTopNControlEntry"; yang_parent_name = "hostTopNControlTable";
}

RmonMib::Hosttopncontroltable::Hosttopncontrolentry::~Hosttopncontrolentry()
{
}

bool RmonMib::Hosttopncontroltable::Hosttopncontrolentry::has_data() const
{
    return hosttopncontrolindex.is_set
	|| hosttopnduration.is_set
	|| hosttopngrantedsize.is_set
	|| hosttopnhostindex.is_set
	|| hosttopnowner.is_set
	|| hosttopnratebase.is_set
	|| hosttopnrequestedsize.is_set
	|| hosttopnstarttime.is_set
	|| hosttopnstatus.is_set
	|| hosttopntimeremaining.is_set;
}

bool RmonMib::Hosttopncontroltable::Hosttopncontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(hosttopncontrolindex.operation)
	|| is_set(hosttopnduration.operation)
	|| is_set(hosttopngrantedsize.operation)
	|| is_set(hosttopnhostindex.operation)
	|| is_set(hosttopnowner.operation)
	|| is_set(hosttopnratebase.operation)
	|| is_set(hosttopnrequestedsize.operation)
	|| is_set(hosttopnstarttime.operation)
	|| is_set(hosttopnstatus.operation)
	|| is_set(hosttopntimeremaining.operation);
}

std::string RmonMib::Hosttopncontroltable::Hosttopncontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlEntry" <<"[hostTopNControlIndex='" <<hosttopncontrolindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttopncontroltable::Hosttopncontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/hostTopNControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttopncontrolindex.is_set || is_set(hosttopncontrolindex.operation)) leaf_name_data.push_back(hosttopncontrolindex.get_name_leafdata());
    if (hosttopnduration.is_set || is_set(hosttopnduration.operation)) leaf_name_data.push_back(hosttopnduration.get_name_leafdata());
    if (hosttopngrantedsize.is_set || is_set(hosttopngrantedsize.operation)) leaf_name_data.push_back(hosttopngrantedsize.get_name_leafdata());
    if (hosttopnhostindex.is_set || is_set(hosttopnhostindex.operation)) leaf_name_data.push_back(hosttopnhostindex.get_name_leafdata());
    if (hosttopnowner.is_set || is_set(hosttopnowner.operation)) leaf_name_data.push_back(hosttopnowner.get_name_leafdata());
    if (hosttopnratebase.is_set || is_set(hosttopnratebase.operation)) leaf_name_data.push_back(hosttopnratebase.get_name_leafdata());
    if (hosttopnrequestedsize.is_set || is_set(hosttopnrequestedsize.operation)) leaf_name_data.push_back(hosttopnrequestedsize.get_name_leafdata());
    if (hosttopnstarttime.is_set || is_set(hosttopnstarttime.operation)) leaf_name_data.push_back(hosttopnstarttime.get_name_leafdata());
    if (hosttopnstatus.is_set || is_set(hosttopnstatus.operation)) leaf_name_data.push_back(hosttopnstatus.get_name_leafdata());
    if (hosttopntimeremaining.is_set || is_set(hosttopntimeremaining.operation)) leaf_name_data.push_back(hosttopntimeremaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttopncontroltable::Hosttopncontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttopncontroltable::Hosttopncontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Hosttopncontroltable::Hosttopncontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostTopNControlIndex")
    {
        hosttopncontrolindex = value;
    }
    if(value_path == "hostTopNDuration")
    {
        hosttopnduration = value;
    }
    if(value_path == "hostTopNGrantedSize")
    {
        hosttopngrantedsize = value;
    }
    if(value_path == "hostTopNHostIndex")
    {
        hosttopnhostindex = value;
    }
    if(value_path == "hostTopNOwner")
    {
        hosttopnowner = value;
    }
    if(value_path == "hostTopNRateBase")
    {
        hosttopnratebase = value;
    }
    if(value_path == "hostTopNRequestedSize")
    {
        hosttopnrequestedsize = value;
    }
    if(value_path == "hostTopNStartTime")
    {
        hosttopnstarttime = value;
    }
    if(value_path == "hostTopNStatus")
    {
        hosttopnstatus = value;
    }
    if(value_path == "hostTopNTimeRemaining")
    {
        hosttopntimeremaining = value;
    }
}

RmonMib::Hosttopntable::Hosttopntable()
{
    yang_name = "hostTopNTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Hosttopntable::~Hosttopntable()
{
}

bool RmonMib::Hosttopntable::has_data() const
{
    for (std::size_t index=0; index<hosttopnentry.size(); index++)
    {
        if(hosttopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Hosttopntable::has_operation() const
{
    for (std::size_t index=0; index<hosttopnentry.size(); index++)
    {
        if(hosttopnentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Hosttopntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttopntable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttopntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTopNEntry")
    {
        for(auto const & c : hosttopnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Hosttopntable::Hosttopnentry>();
        c->parent = this;
        hosttopnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttopntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttopnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Hosttopntable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Hosttopntable::Hosttopnentry::Hosttopnentry()
    :
    hosttopnreport{YType::int32, "hostTopNReport"},
    hosttopnindex{YType::int32, "hostTopNIndex"},
    hosttopnaddress{YType::str, "hostTopNAddress"},
    hosttopnrate{YType::int32, "hostTopNRate"}
{
    yang_name = "hostTopNEntry"; yang_parent_name = "hostTopNTable";
}

RmonMib::Hosttopntable::Hosttopnentry::~Hosttopnentry()
{
}

bool RmonMib::Hosttopntable::Hosttopnentry::has_data() const
{
    return hosttopnreport.is_set
	|| hosttopnindex.is_set
	|| hosttopnaddress.is_set
	|| hosttopnrate.is_set;
}

bool RmonMib::Hosttopntable::Hosttopnentry::has_operation() const
{
    return is_set(operation)
	|| is_set(hosttopnreport.operation)
	|| is_set(hosttopnindex.operation)
	|| is_set(hosttopnaddress.operation)
	|| is_set(hosttopnrate.operation);
}

std::string RmonMib::Hosttopntable::Hosttopnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNEntry" <<"[hostTopNReport='" <<hosttopnreport <<"']" <<"[hostTopNIndex='" <<hosttopnindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Hosttopntable::Hosttopnentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/hostTopNTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttopnreport.is_set || is_set(hosttopnreport.operation)) leaf_name_data.push_back(hosttopnreport.get_name_leafdata());
    if (hosttopnindex.is_set || is_set(hosttopnindex.operation)) leaf_name_data.push_back(hosttopnindex.get_name_leafdata());
    if (hosttopnaddress.is_set || is_set(hosttopnaddress.operation)) leaf_name_data.push_back(hosttopnaddress.get_name_leafdata());
    if (hosttopnrate.is_set || is_set(hosttopnrate.operation)) leaf_name_data.push_back(hosttopnrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Hosttopntable::Hosttopnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Hosttopntable::Hosttopnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Hosttopntable::Hosttopnentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostTopNReport")
    {
        hosttopnreport = value;
    }
    if(value_path == "hostTopNIndex")
    {
        hosttopnindex = value;
    }
    if(value_path == "hostTopNAddress")
    {
        hosttopnaddress = value;
    }
    if(value_path == "hostTopNRate")
    {
        hosttopnrate = value;
    }
}

RmonMib::Matrixcontroltable::Matrixcontroltable()
{
    yang_name = "matrixControlTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Matrixcontroltable::~Matrixcontroltable()
{
}

bool RmonMib::Matrixcontroltable::has_data() const
{
    for (std::size_t index=0; index<matrixcontrolentry.size(); index++)
    {
        if(matrixcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Matrixcontroltable::has_operation() const
{
    for (std::size_t index=0; index<matrixcontrolentry.size(); index++)
    {
        if(matrixcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Matrixcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixcontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixControlEntry")
    {
        for(auto const & c : matrixcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Matrixcontroltable::Matrixcontrolentry>();
        c->parent = this;
        matrixcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Matrixcontroltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Matrixcontroltable::Matrixcontrolentry::Matrixcontrolentry()
    :
    matrixcontrolindex{YType::int32, "matrixControlIndex"},
    matrixcontroldatasource{YType::str, "matrixControlDataSource"},
    matrixcontrollastdeletetime{YType::uint32, "matrixControlLastDeleteTime"},
    matrixcontrolowner{YType::str, "matrixControlOwner"},
    matrixcontrolstatus{YType::enumeration, "matrixControlStatus"},
    matrixcontroltablesize{YType::int32, "matrixControlTableSize"}
{
    yang_name = "matrixControlEntry"; yang_parent_name = "matrixControlTable";
}

RmonMib::Matrixcontroltable::Matrixcontrolentry::~Matrixcontrolentry()
{
}

bool RmonMib::Matrixcontroltable::Matrixcontrolentry::has_data() const
{
    return matrixcontrolindex.is_set
	|| matrixcontroldatasource.is_set
	|| matrixcontrollastdeletetime.is_set
	|| matrixcontrolowner.is_set
	|| matrixcontrolstatus.is_set
	|| matrixcontroltablesize.is_set;
}

bool RmonMib::Matrixcontroltable::Matrixcontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(matrixcontrolindex.operation)
	|| is_set(matrixcontroldatasource.operation)
	|| is_set(matrixcontrollastdeletetime.operation)
	|| is_set(matrixcontrolowner.operation)
	|| is_set(matrixcontrolstatus.operation)
	|| is_set(matrixcontroltablesize.operation);
}

std::string RmonMib::Matrixcontroltable::Matrixcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlEntry" <<"[matrixControlIndex='" <<matrixcontrolindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixcontroltable::Matrixcontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/matrixControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixcontrolindex.is_set || is_set(matrixcontrolindex.operation)) leaf_name_data.push_back(matrixcontrolindex.get_name_leafdata());
    if (matrixcontroldatasource.is_set || is_set(matrixcontroldatasource.operation)) leaf_name_data.push_back(matrixcontroldatasource.get_name_leafdata());
    if (matrixcontrollastdeletetime.is_set || is_set(matrixcontrollastdeletetime.operation)) leaf_name_data.push_back(matrixcontrollastdeletetime.get_name_leafdata());
    if (matrixcontrolowner.is_set || is_set(matrixcontrolowner.operation)) leaf_name_data.push_back(matrixcontrolowner.get_name_leafdata());
    if (matrixcontrolstatus.is_set || is_set(matrixcontrolstatus.operation)) leaf_name_data.push_back(matrixcontrolstatus.get_name_leafdata());
    if (matrixcontroltablesize.is_set || is_set(matrixcontroltablesize.operation)) leaf_name_data.push_back(matrixcontroltablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixcontroltable::Matrixcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixcontroltable::Matrixcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Matrixcontroltable::Matrixcontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "matrixControlIndex")
    {
        matrixcontrolindex = value;
    }
    if(value_path == "matrixControlDataSource")
    {
        matrixcontroldatasource = value;
    }
    if(value_path == "matrixControlLastDeleteTime")
    {
        matrixcontrollastdeletetime = value;
    }
    if(value_path == "matrixControlOwner")
    {
        matrixcontrolowner = value;
    }
    if(value_path == "matrixControlStatus")
    {
        matrixcontrolstatus = value;
    }
    if(value_path == "matrixControlTableSize")
    {
        matrixcontroltablesize = value;
    }
}

RmonMib::Matrixsdtable::Matrixsdtable()
{
    yang_name = "matrixSDTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Matrixsdtable::~Matrixsdtable()
{
}

bool RmonMib::Matrixsdtable::has_data() const
{
    for (std::size_t index=0; index<matrixsdentry.size(); index++)
    {
        if(matrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Matrixsdtable::has_operation() const
{
    for (std::size_t index=0; index<matrixsdentry.size(); index++)
    {
        if(matrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Matrixsdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixsdtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixsdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixSDEntry")
    {
        for(auto const & c : matrixsdentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Matrixsdtable::Matrixsdentry>();
        c->parent = this;
        matrixsdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixsdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixsdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Matrixsdtable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Matrixsdtable::Matrixsdentry::Matrixsdentry()
    :
    matrixsdindex{YType::int32, "matrixSDIndex"},
    matrixsdsourceaddress{YType::str, "matrixSDSourceAddress"},
    matrixsddestaddress{YType::str, "matrixSDDestAddress"},
    matrixsderrors{YType::uint32, "matrixSDErrors"},
    matrixsdoctets{YType::uint32, "matrixSDOctets"},
    matrixsdpkts{YType::uint32, "matrixSDPkts"}
{
    yang_name = "matrixSDEntry"; yang_parent_name = "matrixSDTable";
}

RmonMib::Matrixsdtable::Matrixsdentry::~Matrixsdentry()
{
}

bool RmonMib::Matrixsdtable::Matrixsdentry::has_data() const
{
    return matrixsdindex.is_set
	|| matrixsdsourceaddress.is_set
	|| matrixsddestaddress.is_set
	|| matrixsderrors.is_set
	|| matrixsdoctets.is_set
	|| matrixsdpkts.is_set;
}

bool RmonMib::Matrixsdtable::Matrixsdentry::has_operation() const
{
    return is_set(operation)
	|| is_set(matrixsdindex.operation)
	|| is_set(matrixsdsourceaddress.operation)
	|| is_set(matrixsddestaddress.operation)
	|| is_set(matrixsderrors.operation)
	|| is_set(matrixsdoctets.operation)
	|| is_set(matrixsdpkts.operation);
}

std::string RmonMib::Matrixsdtable::Matrixsdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDEntry" <<"[matrixSDIndex='" <<matrixsdindex <<"']" <<"[matrixSDSourceAddress='" <<matrixsdsourceaddress <<"']" <<"[matrixSDDestAddress='" <<matrixsddestaddress <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixsdtable::Matrixsdentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/matrixSDTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixsdindex.is_set || is_set(matrixsdindex.operation)) leaf_name_data.push_back(matrixsdindex.get_name_leafdata());
    if (matrixsdsourceaddress.is_set || is_set(matrixsdsourceaddress.operation)) leaf_name_data.push_back(matrixsdsourceaddress.get_name_leafdata());
    if (matrixsddestaddress.is_set || is_set(matrixsddestaddress.operation)) leaf_name_data.push_back(matrixsddestaddress.get_name_leafdata());
    if (matrixsderrors.is_set || is_set(matrixsderrors.operation)) leaf_name_data.push_back(matrixsderrors.get_name_leafdata());
    if (matrixsdoctets.is_set || is_set(matrixsdoctets.operation)) leaf_name_data.push_back(matrixsdoctets.get_name_leafdata());
    if (matrixsdpkts.is_set || is_set(matrixsdpkts.operation)) leaf_name_data.push_back(matrixsdpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixsdtable::Matrixsdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixsdtable::Matrixsdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Matrixsdtable::Matrixsdentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "matrixSDIndex")
    {
        matrixsdindex = value;
    }
    if(value_path == "matrixSDSourceAddress")
    {
        matrixsdsourceaddress = value;
    }
    if(value_path == "matrixSDDestAddress")
    {
        matrixsddestaddress = value;
    }
    if(value_path == "matrixSDErrors")
    {
        matrixsderrors = value;
    }
    if(value_path == "matrixSDOctets")
    {
        matrixsdoctets = value;
    }
    if(value_path == "matrixSDPkts")
    {
        matrixsdpkts = value;
    }
}

RmonMib::Matrixdstable::Matrixdstable()
{
    yang_name = "matrixDSTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Matrixdstable::~Matrixdstable()
{
}

bool RmonMib::Matrixdstable::has_data() const
{
    for (std::size_t index=0; index<matrixdsentry.size(); index++)
    {
        if(matrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Matrixdstable::has_operation() const
{
    for (std::size_t index=0; index<matrixdsentry.size(); index++)
    {
        if(matrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Matrixdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixDSEntry")
    {
        for(auto const & c : matrixdsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Matrixdstable::Matrixdsentry>();
        c->parent = this;
        matrixdsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixdsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Matrixdstable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Matrixdstable::Matrixdsentry::Matrixdsentry()
    :
    matrixdsindex{YType::int32, "matrixDSIndex"},
    matrixdsdestaddress{YType::str, "matrixDSDestAddress"},
    matrixdssourceaddress{YType::str, "matrixDSSourceAddress"},
    matrixdserrors{YType::uint32, "matrixDSErrors"},
    matrixdsoctets{YType::uint32, "matrixDSOctets"},
    matrixdspkts{YType::uint32, "matrixDSPkts"}
{
    yang_name = "matrixDSEntry"; yang_parent_name = "matrixDSTable";
}

RmonMib::Matrixdstable::Matrixdsentry::~Matrixdsentry()
{
}

bool RmonMib::Matrixdstable::Matrixdsentry::has_data() const
{
    return matrixdsindex.is_set
	|| matrixdsdestaddress.is_set
	|| matrixdssourceaddress.is_set
	|| matrixdserrors.is_set
	|| matrixdsoctets.is_set
	|| matrixdspkts.is_set;
}

bool RmonMib::Matrixdstable::Matrixdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(matrixdsindex.operation)
	|| is_set(matrixdsdestaddress.operation)
	|| is_set(matrixdssourceaddress.operation)
	|| is_set(matrixdserrors.operation)
	|| is_set(matrixdsoctets.operation)
	|| is_set(matrixdspkts.operation);
}

std::string RmonMib::Matrixdstable::Matrixdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSEntry" <<"[matrixDSIndex='" <<matrixdsindex <<"']" <<"[matrixDSDestAddress='" <<matrixdsdestaddress <<"']" <<"[matrixDSSourceAddress='" <<matrixdssourceaddress <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Matrixdstable::Matrixdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/matrixDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixdsindex.is_set || is_set(matrixdsindex.operation)) leaf_name_data.push_back(matrixdsindex.get_name_leafdata());
    if (matrixdsdestaddress.is_set || is_set(matrixdsdestaddress.operation)) leaf_name_data.push_back(matrixdsdestaddress.get_name_leafdata());
    if (matrixdssourceaddress.is_set || is_set(matrixdssourceaddress.operation)) leaf_name_data.push_back(matrixdssourceaddress.get_name_leafdata());
    if (matrixdserrors.is_set || is_set(matrixdserrors.operation)) leaf_name_data.push_back(matrixdserrors.get_name_leafdata());
    if (matrixdsoctets.is_set || is_set(matrixdsoctets.operation)) leaf_name_data.push_back(matrixdsoctets.get_name_leafdata());
    if (matrixdspkts.is_set || is_set(matrixdspkts.operation)) leaf_name_data.push_back(matrixdspkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Matrixdstable::Matrixdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Matrixdstable::Matrixdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Matrixdstable::Matrixdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "matrixDSIndex")
    {
        matrixdsindex = value;
    }
    if(value_path == "matrixDSDestAddress")
    {
        matrixdsdestaddress = value;
    }
    if(value_path == "matrixDSSourceAddress")
    {
        matrixdssourceaddress = value;
    }
    if(value_path == "matrixDSErrors")
    {
        matrixdserrors = value;
    }
    if(value_path == "matrixDSOctets")
    {
        matrixdsoctets = value;
    }
    if(value_path == "matrixDSPkts")
    {
        matrixdspkts = value;
    }
}

RmonMib::Filtertable::Filtertable()
{
    yang_name = "filterTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Filtertable::~Filtertable()
{
}

bool RmonMib::Filtertable::has_data() const
{
    for (std::size_t index=0; index<filterentry.size(); index++)
    {
        if(filterentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Filtertable::has_operation() const
{
    for (std::size_t index=0; index<filterentry.size(); index++)
    {
        if(filterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Filtertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Filtertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Filtertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filterEntry")
    {
        for(auto const & c : filterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Filtertable::Filterentry>();
        c->parent = this;
        filterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Filtertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Filtertable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Filtertable::Filterentry::Filterentry()
    :
    filterindex{YType::int32, "filterIndex"},
    filterchannelindex{YType::int32, "filterChannelIndex"},
    filterowner{YType::str, "filterOwner"},
    filterpktdata{YType::str, "filterPktData"},
    filterpktdatamask{YType::str, "filterPktDataMask"},
    filterpktdatanotmask{YType::str, "filterPktDataNotMask"},
    filterpktdataoffset{YType::int32, "filterPktDataOffset"},
    filterpktstatus{YType::int32, "filterPktStatus"},
    filterpktstatusmask{YType::int32, "filterPktStatusMask"},
    filterpktstatusnotmask{YType::int32, "filterPktStatusNotMask"},
    filterstatus{YType::enumeration, "filterStatus"}
{
    yang_name = "filterEntry"; yang_parent_name = "filterTable";
}

RmonMib::Filtertable::Filterentry::~Filterentry()
{
}

bool RmonMib::Filtertable::Filterentry::has_data() const
{
    return filterindex.is_set
	|| filterchannelindex.is_set
	|| filterowner.is_set
	|| filterpktdata.is_set
	|| filterpktdatamask.is_set
	|| filterpktdatanotmask.is_set
	|| filterpktdataoffset.is_set
	|| filterpktstatus.is_set
	|| filterpktstatusmask.is_set
	|| filterpktstatusnotmask.is_set
	|| filterstatus.is_set;
}

bool RmonMib::Filtertable::Filterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(filterindex.operation)
	|| is_set(filterchannelindex.operation)
	|| is_set(filterowner.operation)
	|| is_set(filterpktdata.operation)
	|| is_set(filterpktdatamask.operation)
	|| is_set(filterpktdatanotmask.operation)
	|| is_set(filterpktdataoffset.operation)
	|| is_set(filterpktstatus.operation)
	|| is_set(filterpktstatusmask.operation)
	|| is_set(filterpktstatusnotmask.operation)
	|| is_set(filterstatus.operation);
}

std::string RmonMib::Filtertable::Filterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterEntry" <<"[filterIndex='" <<filterindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Filtertable::Filterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/filterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filterindex.is_set || is_set(filterindex.operation)) leaf_name_data.push_back(filterindex.get_name_leafdata());
    if (filterchannelindex.is_set || is_set(filterchannelindex.operation)) leaf_name_data.push_back(filterchannelindex.get_name_leafdata());
    if (filterowner.is_set || is_set(filterowner.operation)) leaf_name_data.push_back(filterowner.get_name_leafdata());
    if (filterpktdata.is_set || is_set(filterpktdata.operation)) leaf_name_data.push_back(filterpktdata.get_name_leafdata());
    if (filterpktdatamask.is_set || is_set(filterpktdatamask.operation)) leaf_name_data.push_back(filterpktdatamask.get_name_leafdata());
    if (filterpktdatanotmask.is_set || is_set(filterpktdatanotmask.operation)) leaf_name_data.push_back(filterpktdatanotmask.get_name_leafdata());
    if (filterpktdataoffset.is_set || is_set(filterpktdataoffset.operation)) leaf_name_data.push_back(filterpktdataoffset.get_name_leafdata());
    if (filterpktstatus.is_set || is_set(filterpktstatus.operation)) leaf_name_data.push_back(filterpktstatus.get_name_leafdata());
    if (filterpktstatusmask.is_set || is_set(filterpktstatusmask.operation)) leaf_name_data.push_back(filterpktstatusmask.get_name_leafdata());
    if (filterpktstatusnotmask.is_set || is_set(filterpktstatusnotmask.operation)) leaf_name_data.push_back(filterpktstatusnotmask.get_name_leafdata());
    if (filterstatus.is_set || is_set(filterstatus.operation)) leaf_name_data.push_back(filterstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Filtertable::Filterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Filtertable::Filterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Filtertable::Filterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filterIndex")
    {
        filterindex = value;
    }
    if(value_path == "filterChannelIndex")
    {
        filterchannelindex = value;
    }
    if(value_path == "filterOwner")
    {
        filterowner = value;
    }
    if(value_path == "filterPktData")
    {
        filterpktdata = value;
    }
    if(value_path == "filterPktDataMask")
    {
        filterpktdatamask = value;
    }
    if(value_path == "filterPktDataNotMask")
    {
        filterpktdatanotmask = value;
    }
    if(value_path == "filterPktDataOffset")
    {
        filterpktdataoffset = value;
    }
    if(value_path == "filterPktStatus")
    {
        filterpktstatus = value;
    }
    if(value_path == "filterPktStatusMask")
    {
        filterpktstatusmask = value;
    }
    if(value_path == "filterPktStatusNotMask")
    {
        filterpktstatusnotmask = value;
    }
    if(value_path == "filterStatus")
    {
        filterstatus = value;
    }
}

RmonMib::Channeltable::Channeltable()
{
    yang_name = "channelTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Channeltable::~Channeltable()
{
}

bool RmonMib::Channeltable::has_data() const
{
    for (std::size_t index=0; index<channelentry.size(); index++)
    {
        if(channelentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Channeltable::has_operation() const
{
    for (std::size_t index=0; index<channelentry.size(); index++)
    {
        if(channelentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Channeltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Channeltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Channeltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channelEntry")
    {
        for(auto const & c : channelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Channeltable::Channelentry>();
        c->parent = this;
        channelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Channeltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : channelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Channeltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Channeltable::Channelentry::Channelentry()
    :
    channelindex{YType::int32, "channelIndex"},
    channelaccepttype{YType::enumeration, "channelAcceptType"},
    channeldatacontrol{YType::enumeration, "channelDataControl"},
    channeldescription{YType::str, "channelDescription"},
    channeleventindex{YType::int32, "channelEventIndex"},
    channeleventstatus{YType::enumeration, "channelEventStatus"},
    channelifindex{YType::int32, "channelIfIndex"},
    channelmatches{YType::uint32, "channelMatches"},
    channelowner{YType::str, "channelOwner"},
    channelstatus{YType::enumeration, "channelStatus"},
    channelturnoffeventindex{YType::int32, "channelTurnOffEventIndex"},
    channelturnoneventindex{YType::int32, "channelTurnOnEventIndex"}
{
    yang_name = "channelEntry"; yang_parent_name = "channelTable";
}

RmonMib::Channeltable::Channelentry::~Channelentry()
{
}

bool RmonMib::Channeltable::Channelentry::has_data() const
{
    return channelindex.is_set
	|| channelaccepttype.is_set
	|| channeldatacontrol.is_set
	|| channeldescription.is_set
	|| channeleventindex.is_set
	|| channeleventstatus.is_set
	|| channelifindex.is_set
	|| channelmatches.is_set
	|| channelowner.is_set
	|| channelstatus.is_set
	|| channelturnoffeventindex.is_set
	|| channelturnoneventindex.is_set;
}

bool RmonMib::Channeltable::Channelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(channelindex.operation)
	|| is_set(channelaccepttype.operation)
	|| is_set(channeldatacontrol.operation)
	|| is_set(channeldescription.operation)
	|| is_set(channeleventindex.operation)
	|| is_set(channeleventstatus.operation)
	|| is_set(channelifindex.operation)
	|| is_set(channelmatches.operation)
	|| is_set(channelowner.operation)
	|| is_set(channelstatus.operation)
	|| is_set(channelturnoffeventindex.operation)
	|| is_set(channelturnoneventindex.operation);
}

std::string RmonMib::Channeltable::Channelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelEntry" <<"[channelIndex='" <<channelindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Channeltable::Channelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/channelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channelindex.is_set || is_set(channelindex.operation)) leaf_name_data.push_back(channelindex.get_name_leafdata());
    if (channelaccepttype.is_set || is_set(channelaccepttype.operation)) leaf_name_data.push_back(channelaccepttype.get_name_leafdata());
    if (channeldatacontrol.is_set || is_set(channeldatacontrol.operation)) leaf_name_data.push_back(channeldatacontrol.get_name_leafdata());
    if (channeldescription.is_set || is_set(channeldescription.operation)) leaf_name_data.push_back(channeldescription.get_name_leafdata());
    if (channeleventindex.is_set || is_set(channeleventindex.operation)) leaf_name_data.push_back(channeleventindex.get_name_leafdata());
    if (channeleventstatus.is_set || is_set(channeleventstatus.operation)) leaf_name_data.push_back(channeleventstatus.get_name_leafdata());
    if (channelifindex.is_set || is_set(channelifindex.operation)) leaf_name_data.push_back(channelifindex.get_name_leafdata());
    if (channelmatches.is_set || is_set(channelmatches.operation)) leaf_name_data.push_back(channelmatches.get_name_leafdata());
    if (channelowner.is_set || is_set(channelowner.operation)) leaf_name_data.push_back(channelowner.get_name_leafdata());
    if (channelstatus.is_set || is_set(channelstatus.operation)) leaf_name_data.push_back(channelstatus.get_name_leafdata());
    if (channelturnoffeventindex.is_set || is_set(channelturnoffeventindex.operation)) leaf_name_data.push_back(channelturnoffeventindex.get_name_leafdata());
    if (channelturnoneventindex.is_set || is_set(channelturnoneventindex.operation)) leaf_name_data.push_back(channelturnoneventindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Channeltable::Channelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Channeltable::Channelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Channeltable::Channelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channelIndex")
    {
        channelindex = value;
    }
    if(value_path == "channelAcceptType")
    {
        channelaccepttype = value;
    }
    if(value_path == "channelDataControl")
    {
        channeldatacontrol = value;
    }
    if(value_path == "channelDescription")
    {
        channeldescription = value;
    }
    if(value_path == "channelEventIndex")
    {
        channeleventindex = value;
    }
    if(value_path == "channelEventStatus")
    {
        channeleventstatus = value;
    }
    if(value_path == "channelIfIndex")
    {
        channelifindex = value;
    }
    if(value_path == "channelMatches")
    {
        channelmatches = value;
    }
    if(value_path == "channelOwner")
    {
        channelowner = value;
    }
    if(value_path == "channelStatus")
    {
        channelstatus = value;
    }
    if(value_path == "channelTurnOffEventIndex")
    {
        channelturnoffeventindex = value;
    }
    if(value_path == "channelTurnOnEventIndex")
    {
        channelturnoneventindex = value;
    }
}

RmonMib::Buffercontroltable::Buffercontroltable()
{
    yang_name = "bufferControlTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Buffercontroltable::~Buffercontroltable()
{
}

bool RmonMib::Buffercontroltable::has_data() const
{
    for (std::size_t index=0; index<buffercontrolentry.size(); index++)
    {
        if(buffercontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Buffercontroltable::has_operation() const
{
    for (std::size_t index=0; index<buffercontrolentry.size(); index++)
    {
        if(buffercontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Buffercontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Buffercontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Buffercontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bufferControlEntry")
    {
        for(auto const & c : buffercontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Buffercontroltable::Buffercontrolentry>();
        c->parent = this;
        buffercontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Buffercontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : buffercontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Buffercontroltable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Buffercontroltable::Buffercontrolentry::Buffercontrolentry()
    :
    buffercontrolindex{YType::int32, "bufferControlIndex"},
    buffercontrolcapturedpackets{YType::int32, "bufferControlCapturedPackets"},
    buffercontrolcaptureslicesize{YType::int32, "bufferControlCaptureSliceSize"},
    buffercontrolchannelindex{YType::int32, "bufferControlChannelIndex"},
    buffercontroldownloadoffset{YType::int32, "bufferControlDownloadOffset"},
    buffercontroldownloadslicesize{YType::int32, "bufferControlDownloadSliceSize"},
    buffercontrolfullaction{YType::enumeration, "bufferControlFullAction"},
    buffercontrolfullstatus{YType::enumeration, "bufferControlFullStatus"},
    buffercontrolmaxoctetsgranted{YType::int32, "bufferControlMaxOctetsGranted"},
    buffercontrolmaxoctetsrequested{YType::int32, "bufferControlMaxOctetsRequested"},
    buffercontrolowner{YType::str, "bufferControlOwner"},
    buffercontrolstatus{YType::enumeration, "bufferControlStatus"},
    buffercontrolturnontime{YType::uint32, "bufferControlTurnOnTime"}
{
    yang_name = "bufferControlEntry"; yang_parent_name = "bufferControlTable";
}

RmonMib::Buffercontroltable::Buffercontrolentry::~Buffercontrolentry()
{
}

bool RmonMib::Buffercontroltable::Buffercontrolentry::has_data() const
{
    return buffercontrolindex.is_set
	|| buffercontrolcapturedpackets.is_set
	|| buffercontrolcaptureslicesize.is_set
	|| buffercontrolchannelindex.is_set
	|| buffercontroldownloadoffset.is_set
	|| buffercontroldownloadslicesize.is_set
	|| buffercontrolfullaction.is_set
	|| buffercontrolfullstatus.is_set
	|| buffercontrolmaxoctetsgranted.is_set
	|| buffercontrolmaxoctetsrequested.is_set
	|| buffercontrolowner.is_set
	|| buffercontrolstatus.is_set
	|| buffercontrolturnontime.is_set;
}

bool RmonMib::Buffercontroltable::Buffercontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(buffercontrolindex.operation)
	|| is_set(buffercontrolcapturedpackets.operation)
	|| is_set(buffercontrolcaptureslicesize.operation)
	|| is_set(buffercontrolchannelindex.operation)
	|| is_set(buffercontroldownloadoffset.operation)
	|| is_set(buffercontroldownloadslicesize.operation)
	|| is_set(buffercontrolfullaction.operation)
	|| is_set(buffercontrolfullstatus.operation)
	|| is_set(buffercontrolmaxoctetsgranted.operation)
	|| is_set(buffercontrolmaxoctetsrequested.operation)
	|| is_set(buffercontrolowner.operation)
	|| is_set(buffercontrolstatus.operation)
	|| is_set(buffercontrolturnontime.operation);
}

std::string RmonMib::Buffercontroltable::Buffercontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlEntry" <<"[bufferControlIndex='" <<buffercontrolindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Buffercontroltable::Buffercontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/bufferControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffercontrolindex.is_set || is_set(buffercontrolindex.operation)) leaf_name_data.push_back(buffercontrolindex.get_name_leafdata());
    if (buffercontrolcapturedpackets.is_set || is_set(buffercontrolcapturedpackets.operation)) leaf_name_data.push_back(buffercontrolcapturedpackets.get_name_leafdata());
    if (buffercontrolcaptureslicesize.is_set || is_set(buffercontrolcaptureslicesize.operation)) leaf_name_data.push_back(buffercontrolcaptureslicesize.get_name_leafdata());
    if (buffercontrolchannelindex.is_set || is_set(buffercontrolchannelindex.operation)) leaf_name_data.push_back(buffercontrolchannelindex.get_name_leafdata());
    if (buffercontroldownloadoffset.is_set || is_set(buffercontroldownloadoffset.operation)) leaf_name_data.push_back(buffercontroldownloadoffset.get_name_leafdata());
    if (buffercontroldownloadslicesize.is_set || is_set(buffercontroldownloadslicesize.operation)) leaf_name_data.push_back(buffercontroldownloadslicesize.get_name_leafdata());
    if (buffercontrolfullaction.is_set || is_set(buffercontrolfullaction.operation)) leaf_name_data.push_back(buffercontrolfullaction.get_name_leafdata());
    if (buffercontrolfullstatus.is_set || is_set(buffercontrolfullstatus.operation)) leaf_name_data.push_back(buffercontrolfullstatus.get_name_leafdata());
    if (buffercontrolmaxoctetsgranted.is_set || is_set(buffercontrolmaxoctetsgranted.operation)) leaf_name_data.push_back(buffercontrolmaxoctetsgranted.get_name_leafdata());
    if (buffercontrolmaxoctetsrequested.is_set || is_set(buffercontrolmaxoctetsrequested.operation)) leaf_name_data.push_back(buffercontrolmaxoctetsrequested.get_name_leafdata());
    if (buffercontrolowner.is_set || is_set(buffercontrolowner.operation)) leaf_name_data.push_back(buffercontrolowner.get_name_leafdata());
    if (buffercontrolstatus.is_set || is_set(buffercontrolstatus.operation)) leaf_name_data.push_back(buffercontrolstatus.get_name_leafdata());
    if (buffercontrolturnontime.is_set || is_set(buffercontrolturnontime.operation)) leaf_name_data.push_back(buffercontrolturnontime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Buffercontroltable::Buffercontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Buffercontroltable::Buffercontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Buffercontroltable::Buffercontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bufferControlIndex")
    {
        buffercontrolindex = value;
    }
    if(value_path == "bufferControlCapturedPackets")
    {
        buffercontrolcapturedpackets = value;
    }
    if(value_path == "bufferControlCaptureSliceSize")
    {
        buffercontrolcaptureslicesize = value;
    }
    if(value_path == "bufferControlChannelIndex")
    {
        buffercontrolchannelindex = value;
    }
    if(value_path == "bufferControlDownloadOffset")
    {
        buffercontroldownloadoffset = value;
    }
    if(value_path == "bufferControlDownloadSliceSize")
    {
        buffercontroldownloadslicesize = value;
    }
    if(value_path == "bufferControlFullAction")
    {
        buffercontrolfullaction = value;
    }
    if(value_path == "bufferControlFullStatus")
    {
        buffercontrolfullstatus = value;
    }
    if(value_path == "bufferControlMaxOctetsGranted")
    {
        buffercontrolmaxoctetsgranted = value;
    }
    if(value_path == "bufferControlMaxOctetsRequested")
    {
        buffercontrolmaxoctetsrequested = value;
    }
    if(value_path == "bufferControlOwner")
    {
        buffercontrolowner = value;
    }
    if(value_path == "bufferControlStatus")
    {
        buffercontrolstatus = value;
    }
    if(value_path == "bufferControlTurnOnTime")
    {
        buffercontrolturnontime = value;
    }
}

RmonMib::Capturebuffertable::Capturebuffertable()
{
    yang_name = "captureBufferTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Capturebuffertable::~Capturebuffertable()
{
}

bool RmonMib::Capturebuffertable::has_data() const
{
    for (std::size_t index=0; index<capturebufferentry.size(); index++)
    {
        if(capturebufferentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Capturebuffertable::has_operation() const
{
    for (std::size_t index=0; index<capturebufferentry.size(); index++)
    {
        if(capturebufferentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Capturebuffertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Capturebuffertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Capturebuffertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "captureBufferEntry")
    {
        for(auto const & c : capturebufferentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Capturebuffertable::Capturebufferentry>();
        c->parent = this;
        capturebufferentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Capturebuffertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : capturebufferentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Capturebuffertable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Capturebuffertable::Capturebufferentry::Capturebufferentry()
    :
    capturebuffercontrolindex{YType::int32, "captureBufferControlIndex"},
    capturebufferindex{YType::int32, "captureBufferIndex"},
    capturebufferpacketdata{YType::str, "captureBufferPacketData"},
    capturebufferpacketid{YType::int32, "captureBufferPacketID"},
    capturebufferpacketlength{YType::int32, "captureBufferPacketLength"},
    capturebufferpacketstatus{YType::int32, "captureBufferPacketStatus"},
    capturebufferpackettime{YType::int32, "captureBufferPacketTime"}
{
    yang_name = "captureBufferEntry"; yang_parent_name = "captureBufferTable";
}

RmonMib::Capturebuffertable::Capturebufferentry::~Capturebufferentry()
{
}

bool RmonMib::Capturebuffertable::Capturebufferentry::has_data() const
{
    return capturebuffercontrolindex.is_set
	|| capturebufferindex.is_set
	|| capturebufferpacketdata.is_set
	|| capturebufferpacketid.is_set
	|| capturebufferpacketlength.is_set
	|| capturebufferpacketstatus.is_set
	|| capturebufferpackettime.is_set;
}

bool RmonMib::Capturebuffertable::Capturebufferentry::has_operation() const
{
    return is_set(operation)
	|| is_set(capturebuffercontrolindex.operation)
	|| is_set(capturebufferindex.operation)
	|| is_set(capturebufferpacketdata.operation)
	|| is_set(capturebufferpacketid.operation)
	|| is_set(capturebufferpacketlength.operation)
	|| is_set(capturebufferpacketstatus.operation)
	|| is_set(capturebufferpackettime.operation);
}

std::string RmonMib::Capturebuffertable::Capturebufferentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferEntry" <<"[captureBufferControlIndex='" <<capturebuffercontrolindex <<"']" <<"[captureBufferIndex='" <<capturebufferindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Capturebuffertable::Capturebufferentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/captureBufferTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capturebuffercontrolindex.is_set || is_set(capturebuffercontrolindex.operation)) leaf_name_data.push_back(capturebuffercontrolindex.get_name_leafdata());
    if (capturebufferindex.is_set || is_set(capturebufferindex.operation)) leaf_name_data.push_back(capturebufferindex.get_name_leafdata());
    if (capturebufferpacketdata.is_set || is_set(capturebufferpacketdata.operation)) leaf_name_data.push_back(capturebufferpacketdata.get_name_leafdata());
    if (capturebufferpacketid.is_set || is_set(capturebufferpacketid.operation)) leaf_name_data.push_back(capturebufferpacketid.get_name_leafdata());
    if (capturebufferpacketlength.is_set || is_set(capturebufferpacketlength.operation)) leaf_name_data.push_back(capturebufferpacketlength.get_name_leafdata());
    if (capturebufferpacketstatus.is_set || is_set(capturebufferpacketstatus.operation)) leaf_name_data.push_back(capturebufferpacketstatus.get_name_leafdata());
    if (capturebufferpackettime.is_set || is_set(capturebufferpackettime.operation)) leaf_name_data.push_back(capturebufferpackettime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Capturebuffertable::Capturebufferentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Capturebuffertable::Capturebufferentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Capturebuffertable::Capturebufferentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "captureBufferControlIndex")
    {
        capturebuffercontrolindex = value;
    }
    if(value_path == "captureBufferIndex")
    {
        capturebufferindex = value;
    }
    if(value_path == "captureBufferPacketData")
    {
        capturebufferpacketdata = value;
    }
    if(value_path == "captureBufferPacketID")
    {
        capturebufferpacketid = value;
    }
    if(value_path == "captureBufferPacketLength")
    {
        capturebufferpacketlength = value;
    }
    if(value_path == "captureBufferPacketStatus")
    {
        capturebufferpacketstatus = value;
    }
    if(value_path == "captureBufferPacketTime")
    {
        capturebufferpackettime = value;
    }
}

RmonMib::Eventtable::Eventtable()
{
    yang_name = "eventTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Eventtable::~Eventtable()
{
}

bool RmonMib::Eventtable::has_data() const
{
    for (std::size_t index=0; index<evententry.size(); index++)
    {
        if(evententry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Eventtable::has_operation() const
{
    for (std::size_t index=0; index<evententry.size(); index++)
    {
        if(evententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Eventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Eventtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Eventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventEntry")
    {
        for(auto const & c : evententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Eventtable::Evententry>();
        c->parent = this;
        evententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Eventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Eventtable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Eventtable::Evententry::Evententry()
    :
    eventindex{YType::int32, "eventIndex"},
    eventcommunity{YType::str, "eventCommunity"},
    eventdescription{YType::str, "eventDescription"},
    eventlasttimesent{YType::uint32, "eventLastTimeSent"},
    eventowner{YType::str, "eventOwner"},
    eventstatus{YType::enumeration, "eventStatus"},
    eventtype{YType::enumeration, "eventType"}
{
    yang_name = "eventEntry"; yang_parent_name = "eventTable";
}

RmonMib::Eventtable::Evententry::~Evententry()
{
}

bool RmonMib::Eventtable::Evententry::has_data() const
{
    return eventindex.is_set
	|| eventcommunity.is_set
	|| eventdescription.is_set
	|| eventlasttimesent.is_set
	|| eventowner.is_set
	|| eventstatus.is_set
	|| eventtype.is_set;
}

bool RmonMib::Eventtable::Evententry::has_operation() const
{
    return is_set(operation)
	|| is_set(eventindex.operation)
	|| is_set(eventcommunity.operation)
	|| is_set(eventdescription.operation)
	|| is_set(eventlasttimesent.operation)
	|| is_set(eventowner.operation)
	|| is_set(eventstatus.operation)
	|| is_set(eventtype.operation);
}

std::string RmonMib::Eventtable::Evententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventEntry" <<"[eventIndex='" <<eventindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Eventtable::Evententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/eventTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventindex.is_set || is_set(eventindex.operation)) leaf_name_data.push_back(eventindex.get_name_leafdata());
    if (eventcommunity.is_set || is_set(eventcommunity.operation)) leaf_name_data.push_back(eventcommunity.get_name_leafdata());
    if (eventdescription.is_set || is_set(eventdescription.operation)) leaf_name_data.push_back(eventdescription.get_name_leafdata());
    if (eventlasttimesent.is_set || is_set(eventlasttimesent.operation)) leaf_name_data.push_back(eventlasttimesent.get_name_leafdata());
    if (eventowner.is_set || is_set(eventowner.operation)) leaf_name_data.push_back(eventowner.get_name_leafdata());
    if (eventstatus.is_set || is_set(eventstatus.operation)) leaf_name_data.push_back(eventstatus.get_name_leafdata());
    if (eventtype.is_set || is_set(eventtype.operation)) leaf_name_data.push_back(eventtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Eventtable::Evententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Eventtable::Evententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Eventtable::Evententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eventIndex")
    {
        eventindex = value;
    }
    if(value_path == "eventCommunity")
    {
        eventcommunity = value;
    }
    if(value_path == "eventDescription")
    {
        eventdescription = value;
    }
    if(value_path == "eventLastTimeSent")
    {
        eventlasttimesent = value;
    }
    if(value_path == "eventOwner")
    {
        eventowner = value;
    }
    if(value_path == "eventStatus")
    {
        eventstatus = value;
    }
    if(value_path == "eventType")
    {
        eventtype = value;
    }
}

RmonMib::Logtable::Logtable()
{
    yang_name = "logTable"; yang_parent_name = "RMON-MIB";
}

RmonMib::Logtable::~Logtable()
{
}

bool RmonMib::Logtable::has_data() const
{
    for (std::size_t index=0; index<logentry.size(); index++)
    {
        if(logentry[index]->has_data())
            return true;
    }
    return false;
}

bool RmonMib::Logtable::has_operation() const
{
    for (std::size_t index=0; index<logentry.size(); index++)
    {
        if(logentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RmonMib::Logtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logTable";

    return path_buffer.str();

}

const EntityPath RmonMib::Logtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Logtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logEntry")
    {
        for(auto const & c : logentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RmonMib::Logtable::Logentry>();
        c->parent = this;
        logentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Logtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : logentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RmonMib::Logtable::set_value(const std::string & value_path, std::string value)
{
}

RmonMib::Logtable::Logentry::Logentry()
    :
    logeventindex{YType::int32, "logEventIndex"},
    logindex{YType::int32, "logIndex"},
    logdescription{YType::str, "logDescription"},
    logtime{YType::uint32, "logTime"}
{
    yang_name = "logEntry"; yang_parent_name = "logTable";
}

RmonMib::Logtable::Logentry::~Logentry()
{
}

bool RmonMib::Logtable::Logentry::has_data() const
{
    return logeventindex.is_set
	|| logindex.is_set
	|| logdescription.is_set
	|| logtime.is_set;
}

bool RmonMib::Logtable::Logentry::has_operation() const
{
    return is_set(operation)
	|| is_set(logeventindex.operation)
	|| is_set(logindex.operation)
	|| is_set(logdescription.operation)
	|| is_set(logtime.operation);
}

std::string RmonMib::Logtable::Logentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logEntry" <<"[logEventIndex='" <<logeventindex <<"']" <<"[logIndex='" <<logindex <<"']";

    return path_buffer.str();

}

const EntityPath RmonMib::Logtable::Logentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RMON-MIB:RMON-MIB/logTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logeventindex.is_set || is_set(logeventindex.operation)) leaf_name_data.push_back(logeventindex.get_name_leafdata());
    if (logindex.is_set || is_set(logindex.operation)) leaf_name_data.push_back(logindex.get_name_leafdata());
    if (logdescription.is_set || is_set(logdescription.operation)) leaf_name_data.push_back(logdescription.get_name_leafdata());
    if (logtime.is_set || is_set(logtime.operation)) leaf_name_data.push_back(logtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RmonMib::Logtable::Logentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RmonMib::Logtable::Logentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RmonMib::Logtable::Logentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logEventIndex")
    {
        logeventindex = value;
    }
    if(value_path == "logIndex")
    {
        logindex = value;
    }
    if(value_path == "logDescription")
    {
        logdescription = value;
    }
    if(value_path == "logTime")
    {
        logtime = value;
    }
}

const Enum::YLeaf EntrystatusEnum::valid {1, "valid"};
const Enum::YLeaf EntrystatusEnum::createRequest {2, "createRequest"};
const Enum::YLeaf EntrystatusEnum::underCreation {3, "underCreation"};
const Enum::YLeaf EntrystatusEnum::invalid {4, "invalid"};

const Enum::YLeaf RmonMib::Alarmtable::Alarmentry::AlarmsampletypeEnum::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf RmonMib::Alarmtable::Alarmentry::AlarmsampletypeEnum::deltaValue {2, "deltaValue"};

const Enum::YLeaf RmonMib::Alarmtable::Alarmentry::AlarmstartupalarmEnum::risingAlarm {1, "risingAlarm"};
const Enum::YLeaf RmonMib::Alarmtable::Alarmentry::AlarmstartupalarmEnum::fallingAlarm {2, "fallingAlarm"};
const Enum::YLeaf RmonMib::Alarmtable::Alarmentry::AlarmstartupalarmEnum::risingOrFallingAlarm {3, "risingOrFallingAlarm"};

const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNInPkts {1, "hostTopNInPkts"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNOutPkts {2, "hostTopNOutPkts"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNInOctets {3, "hostTopNInOctets"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNOutOctets {4, "hostTopNOutOctets"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNOutErrors {5, "hostTopNOutErrors"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNOutBroadcastPkts {6, "hostTopNOutBroadcastPkts"};
const Enum::YLeaf RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum::hostTopNOutMulticastPkts {7, "hostTopNOutMulticastPkts"};

const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChannelaccepttypeEnum::acceptMatched {1, "acceptMatched"};
const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChannelaccepttypeEnum::acceptFailed {2, "acceptFailed"};

const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChanneldatacontrolEnum::on {1, "on"};
const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChanneldatacontrolEnum::off {2, "off"};

const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChanneleventstatusEnum::eventReady {1, "eventReady"};
const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChanneleventstatusEnum::eventFired {2, "eventFired"};
const Enum::YLeaf RmonMib::Channeltable::Channelentry::ChanneleventstatusEnum::eventAlwaysReady {3, "eventAlwaysReady"};

const Enum::YLeaf RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullstatusEnum::spaceAvailable {1, "spaceAvailable"};
const Enum::YLeaf RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullstatusEnum::full {2, "full"};

const Enum::YLeaf RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullactionEnum::lockWhenFull {1, "lockWhenFull"};
const Enum::YLeaf RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullactionEnum::wrapWhenFull {2, "wrapWhenFull"};

const Enum::YLeaf RmonMib::Eventtable::Evententry::EventtypeEnum::none {1, "none"};
const Enum::YLeaf RmonMib::Eventtable::Evententry::EventtypeEnum::log {2, "log"};
const Enum::YLeaf RmonMib::Eventtable::Evententry::EventtypeEnum::snmptrap {3, "snmptrap"};
const Enum::YLeaf RmonMib::Eventtable::Evententry::EventtypeEnum::logandtrap {4, "logandtrap"};


}
}

