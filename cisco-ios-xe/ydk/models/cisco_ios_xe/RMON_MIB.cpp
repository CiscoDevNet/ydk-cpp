
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RMON_MIB {

Rmoneventsv2::Rmoneventsv2()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:RMON-MIB", "RMON-MIB", "RMON-MIB:rmonEventsV2")
{

}

Rmoneventsv2::~Rmoneventsv2()
{
}

RMONMIB::RMONMIB()
    :
    etherstatstable(std::make_shared<RMONMIB::Etherstatstable>())
	,historycontroltable(std::make_shared<RMONMIB::Historycontroltable>())
	,etherhistorytable(std::make_shared<RMONMIB::Etherhistorytable>())
	,alarmtable(std::make_shared<RMONMIB::Alarmtable>())
	,hostcontroltable(std::make_shared<RMONMIB::Hostcontroltable>())
	,hosttable(std::make_shared<RMONMIB::Hosttable>())
	,hosttimetable(std::make_shared<RMONMIB::Hosttimetable>())
	,hosttopncontroltable(std::make_shared<RMONMIB::Hosttopncontroltable>())
	,hosttopntable(std::make_shared<RMONMIB::Hosttopntable>())
	,matrixcontroltable(std::make_shared<RMONMIB::Matrixcontroltable>())
	,matrixsdtable(std::make_shared<RMONMIB::Matrixsdtable>())
	,matrixdstable(std::make_shared<RMONMIB::Matrixdstable>())
	,filtertable(std::make_shared<RMONMIB::Filtertable>())
	,channeltable(std::make_shared<RMONMIB::Channeltable>())
	,buffercontroltable(std::make_shared<RMONMIB::Buffercontroltable>())
	,capturebuffertable(std::make_shared<RMONMIB::Capturebuffertable>())
	,eventtable(std::make_shared<RMONMIB::Eventtable>())
	,logtable(std::make_shared<RMONMIB::Logtable>())
{
    etherstatstable->parent = this;
    historycontroltable->parent = this;
    etherhistorytable->parent = this;
    alarmtable->parent = this;
    hostcontroltable->parent = this;
    hosttable->parent = this;
    hosttimetable->parent = this;
    hosttopncontroltable->parent = this;
    hosttopntable->parent = this;
    matrixcontroltable->parent = this;
    matrixsdtable->parent = this;
    matrixdstable->parent = this;
    filtertable->parent = this;
    channeltable->parent = this;
    buffercontroltable->parent = this;
    capturebuffertable->parent = this;
    eventtable->parent = this;
    logtable->parent = this;

    yang_name = "RMON-MIB"; yang_parent_name = "RMON-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

RMONMIB::~RMONMIB()
{
}

bool RMONMIB::has_data() const
{
    return (etherstatstable !=  nullptr && etherstatstable->has_data())
	|| (historycontroltable !=  nullptr && historycontroltable->has_data())
	|| (etherhistorytable !=  nullptr && etherhistorytable->has_data())
	|| (alarmtable !=  nullptr && alarmtable->has_data())
	|| (hostcontroltable !=  nullptr && hostcontroltable->has_data())
	|| (hosttable !=  nullptr && hosttable->has_data())
	|| (hosttimetable !=  nullptr && hosttimetable->has_data())
	|| (hosttopncontroltable !=  nullptr && hosttopncontroltable->has_data())
	|| (hosttopntable !=  nullptr && hosttopntable->has_data())
	|| (matrixcontroltable !=  nullptr && matrixcontroltable->has_data())
	|| (matrixsdtable !=  nullptr && matrixsdtable->has_data())
	|| (matrixdstable !=  nullptr && matrixdstable->has_data())
	|| (filtertable !=  nullptr && filtertable->has_data())
	|| (channeltable !=  nullptr && channeltable->has_data())
	|| (buffercontroltable !=  nullptr && buffercontroltable->has_data())
	|| (capturebuffertable !=  nullptr && capturebuffertable->has_data())
	|| (eventtable !=  nullptr && eventtable->has_data())
	|| (logtable !=  nullptr && logtable->has_data());
}

bool RMONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (etherstatstable !=  nullptr && etherstatstable->has_operation())
	|| (historycontroltable !=  nullptr && historycontroltable->has_operation())
	|| (etherhistorytable !=  nullptr && etherhistorytable->has_operation())
	|| (alarmtable !=  nullptr && alarmtable->has_operation())
	|| (hostcontroltable !=  nullptr && hostcontroltable->has_operation())
	|| (hosttable !=  nullptr && hosttable->has_operation())
	|| (hosttimetable !=  nullptr && hosttimetable->has_operation())
	|| (hosttopncontroltable !=  nullptr && hosttopncontroltable->has_operation())
	|| (hosttopntable !=  nullptr && hosttopntable->has_operation())
	|| (matrixcontroltable !=  nullptr && matrixcontroltable->has_operation())
	|| (matrixsdtable !=  nullptr && matrixsdtable->has_operation())
	|| (matrixdstable !=  nullptr && matrixdstable->has_operation())
	|| (filtertable !=  nullptr && filtertable->has_operation())
	|| (channeltable !=  nullptr && channeltable->has_operation())
	|| (buffercontroltable !=  nullptr && buffercontroltable->has_operation())
	|| (capturebuffertable !=  nullptr && capturebuffertable->has_operation())
	|| (eventtable !=  nullptr && eventtable->has_operation())
	|| (logtable !=  nullptr && logtable->has_operation());
}

std::string RMONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherStatsTable")
    {
        if(etherstatstable == nullptr)
        {
            etherstatstable = std::make_shared<RMONMIB::Etherstatstable>();
        }
        return etherstatstable;
    }

    if(child_yang_name == "historyControlTable")
    {
        if(historycontroltable == nullptr)
        {
            historycontroltable = std::make_shared<RMONMIB::Historycontroltable>();
        }
        return historycontroltable;
    }

    if(child_yang_name == "etherHistoryTable")
    {
        if(etherhistorytable == nullptr)
        {
            etherhistorytable = std::make_shared<RMONMIB::Etherhistorytable>();
        }
        return etherhistorytable;
    }

    if(child_yang_name == "alarmTable")
    {
        if(alarmtable == nullptr)
        {
            alarmtable = std::make_shared<RMONMIB::Alarmtable>();
        }
        return alarmtable;
    }

    if(child_yang_name == "hostControlTable")
    {
        if(hostcontroltable == nullptr)
        {
            hostcontroltable = std::make_shared<RMONMIB::Hostcontroltable>();
        }
        return hostcontroltable;
    }

    if(child_yang_name == "hostTable")
    {
        if(hosttable == nullptr)
        {
            hosttable = std::make_shared<RMONMIB::Hosttable>();
        }
        return hosttable;
    }

    if(child_yang_name == "hostTimeTable")
    {
        if(hosttimetable == nullptr)
        {
            hosttimetable = std::make_shared<RMONMIB::Hosttimetable>();
        }
        return hosttimetable;
    }

    if(child_yang_name == "hostTopNControlTable")
    {
        if(hosttopncontroltable == nullptr)
        {
            hosttopncontroltable = std::make_shared<RMONMIB::Hosttopncontroltable>();
        }
        return hosttopncontroltable;
    }

    if(child_yang_name == "hostTopNTable")
    {
        if(hosttopntable == nullptr)
        {
            hosttopntable = std::make_shared<RMONMIB::Hosttopntable>();
        }
        return hosttopntable;
    }

    if(child_yang_name == "matrixControlTable")
    {
        if(matrixcontroltable == nullptr)
        {
            matrixcontroltable = std::make_shared<RMONMIB::Matrixcontroltable>();
        }
        return matrixcontroltable;
    }

    if(child_yang_name == "matrixSDTable")
    {
        if(matrixsdtable == nullptr)
        {
            matrixsdtable = std::make_shared<RMONMIB::Matrixsdtable>();
        }
        return matrixsdtable;
    }

    if(child_yang_name == "matrixDSTable")
    {
        if(matrixdstable == nullptr)
        {
            matrixdstable = std::make_shared<RMONMIB::Matrixdstable>();
        }
        return matrixdstable;
    }

    if(child_yang_name == "filterTable")
    {
        if(filtertable == nullptr)
        {
            filtertable = std::make_shared<RMONMIB::Filtertable>();
        }
        return filtertable;
    }

    if(child_yang_name == "channelTable")
    {
        if(channeltable == nullptr)
        {
            channeltable = std::make_shared<RMONMIB::Channeltable>();
        }
        return channeltable;
    }

    if(child_yang_name == "bufferControlTable")
    {
        if(buffercontroltable == nullptr)
        {
            buffercontroltable = std::make_shared<RMONMIB::Buffercontroltable>();
        }
        return buffercontroltable;
    }

    if(child_yang_name == "captureBufferTable")
    {
        if(capturebuffertable == nullptr)
        {
            capturebuffertable = std::make_shared<RMONMIB::Capturebuffertable>();
        }
        return capturebuffertable;
    }

    if(child_yang_name == "eventTable")
    {
        if(eventtable == nullptr)
        {
            eventtable = std::make_shared<RMONMIB::Eventtable>();
        }
        return eventtable;
    }

    if(child_yang_name == "logTable")
    {
        if(logtable == nullptr)
        {
            logtable = std::make_shared<RMONMIB::Logtable>();
        }
        return logtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etherstatstable != nullptr)
    {
        children["etherStatsTable"] = etherstatstable;
    }

    if(historycontroltable != nullptr)
    {
        children["historyControlTable"] = historycontroltable;
    }

    if(etherhistorytable != nullptr)
    {
        children["etherHistoryTable"] = etherhistorytable;
    }

    if(alarmtable != nullptr)
    {
        children["alarmTable"] = alarmtable;
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

    if(matrixcontroltable != nullptr)
    {
        children["matrixControlTable"] = matrixcontroltable;
    }

    if(matrixsdtable != nullptr)
    {
        children["matrixSDTable"] = matrixsdtable;
    }

    if(matrixdstable != nullptr)
    {
        children["matrixDSTable"] = matrixdstable;
    }

    if(filtertable != nullptr)
    {
        children["filterTable"] = filtertable;
    }

    if(channeltable != nullptr)
    {
        children["channelTable"] = channeltable;
    }

    if(buffercontroltable != nullptr)
    {
        children["bufferControlTable"] = buffercontroltable;
    }

    if(capturebuffertable != nullptr)
    {
        children["captureBufferTable"] = capturebuffertable;
    }

    if(eventtable != nullptr)
    {
        children["eventTable"] = eventtable;
    }

    if(logtable != nullptr)
    {
        children["logTable"] = logtable;
    }

    return children;
}

void RMONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RMONMIB::clone_ptr() const
{
    return std::make_shared<RMONMIB>();
}

std::string RMONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RMONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RMONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RMONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RMONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherStatsTable" || name == "historyControlTable" || name == "etherHistoryTable" || name == "alarmTable" || name == "hostControlTable" || name == "hostTable" || name == "hostTimeTable" || name == "hostTopNControlTable" || name == "hostTopNTable" || name == "matrixControlTable" || name == "matrixSDTable" || name == "matrixDSTable" || name == "filterTable" || name == "channelTable" || name == "bufferControlTable" || name == "captureBufferTable" || name == "eventTable" || name == "logTable")
        return true;
    return false;
}

RMONMIB::Etherstatstable::Etherstatstable()
{

    yang_name = "etherStatsTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Etherstatstable::~Etherstatstable()
{
}

bool RMONMIB::Etherstatstable::has_data() const
{
    for (std::size_t index=0; index<etherstatsentry.size(); index++)
    {
        if(etherstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Etherstatstable::has_operation() const
{
    for (std::size_t index=0; index<etherstatsentry.size(); index++)
    {
        if(etherstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Etherstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Etherstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Etherstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Etherstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Etherstatstable::Etherstatsentry>();
        c->parent = this;
        etherstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Etherstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Etherstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Etherstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Etherstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherStatsEntry")
        return true;
    return false;
}

RMONMIB::Etherstatstable::Etherstatsentry::Etherstatsentry()
    :
    etherstatsindex{YType::int32, "etherStatsIndex"},
    etherstatsdatasource{YType::str, "etherStatsDataSource"},
    etherstatsdropevents{YType::uint32, "etherStatsDropEvents"},
    etherstatsoctets{YType::uint32, "etherStatsOctets"},
    etherstatspkts{YType::uint32, "etherStatsPkts"},
    etherstatsbroadcastpkts{YType::uint32, "etherStatsBroadcastPkts"},
    etherstatsmulticastpkts{YType::uint32, "etherStatsMulticastPkts"},
    etherstatscrcalignerrors{YType::uint32, "etherStatsCRCAlignErrors"},
    etherstatsundersizepkts{YType::uint32, "etherStatsUndersizePkts"},
    etherstatsoversizepkts{YType::uint32, "etherStatsOversizePkts"},
    etherstatsfragments{YType::uint32, "etherStatsFragments"},
    etherstatsjabbers{YType::uint32, "etherStatsJabbers"},
    etherstatscollisions{YType::uint32, "etherStatsCollisions"},
    etherstatspkts64octets{YType::uint32, "etherStatsPkts64Octets"},
    etherstatspkts65to127octets{YType::uint32, "etherStatsPkts65to127Octets"},
    etherstatspkts128to255octets{YType::uint32, "etherStatsPkts128to255Octets"},
    etherstatspkts256to511octets{YType::uint32, "etherStatsPkts256to511Octets"},
    etherstatspkts512to1023octets{YType::uint32, "etherStatsPkts512to1023Octets"},
    etherstatspkts1024to1518octets{YType::uint32, "etherStatsPkts1024to1518Octets"},
    etherstatsowner{YType::str, "etherStatsOwner"},
    etherstatsstatus{YType::enumeration, "etherStatsStatus"},
    etherstatsdroppedframes{YType::uint32, "RMON2-MIB:etherStatsDroppedFrames"},
    etherstatscreatetime{YType::uint32, "RMON2-MIB:etherStatsCreateTime"}
{

    yang_name = "etherStatsEntry"; yang_parent_name = "etherStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Etherstatstable::Etherstatsentry::~Etherstatsentry()
{
}

bool RMONMIB::Etherstatstable::Etherstatsentry::has_data() const
{
    return etherstatsindex.is_set
	|| etherstatsdatasource.is_set
	|| etherstatsdropevents.is_set
	|| etherstatsoctets.is_set
	|| etherstatspkts.is_set
	|| etherstatsbroadcastpkts.is_set
	|| etherstatsmulticastpkts.is_set
	|| etherstatscrcalignerrors.is_set
	|| etherstatsundersizepkts.is_set
	|| etherstatsoversizepkts.is_set
	|| etherstatsfragments.is_set
	|| etherstatsjabbers.is_set
	|| etherstatscollisions.is_set
	|| etherstatspkts64octets.is_set
	|| etherstatspkts65to127octets.is_set
	|| etherstatspkts128to255octets.is_set
	|| etherstatspkts256to511octets.is_set
	|| etherstatspkts512to1023octets.is_set
	|| etherstatspkts1024to1518octets.is_set
	|| etherstatsowner.is_set
	|| etherstatsstatus.is_set
	|| etherstatsdroppedframes.is_set
	|| etherstatscreatetime.is_set;
}

bool RMONMIB::Etherstatstable::Etherstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etherstatsindex.yfilter)
	|| ydk::is_set(etherstatsdatasource.yfilter)
	|| ydk::is_set(etherstatsdropevents.yfilter)
	|| ydk::is_set(etherstatsoctets.yfilter)
	|| ydk::is_set(etherstatspkts.yfilter)
	|| ydk::is_set(etherstatsbroadcastpkts.yfilter)
	|| ydk::is_set(etherstatsmulticastpkts.yfilter)
	|| ydk::is_set(etherstatscrcalignerrors.yfilter)
	|| ydk::is_set(etherstatsundersizepkts.yfilter)
	|| ydk::is_set(etherstatsoversizepkts.yfilter)
	|| ydk::is_set(etherstatsfragments.yfilter)
	|| ydk::is_set(etherstatsjabbers.yfilter)
	|| ydk::is_set(etherstatscollisions.yfilter)
	|| ydk::is_set(etherstatspkts64octets.yfilter)
	|| ydk::is_set(etherstatspkts65to127octets.yfilter)
	|| ydk::is_set(etherstatspkts128to255octets.yfilter)
	|| ydk::is_set(etherstatspkts256to511octets.yfilter)
	|| ydk::is_set(etherstatspkts512to1023octets.yfilter)
	|| ydk::is_set(etherstatspkts1024to1518octets.yfilter)
	|| ydk::is_set(etherstatsowner.yfilter)
	|| ydk::is_set(etherstatsstatus.yfilter)
	|| ydk::is_set(etherstatsdroppedframes.yfilter)
	|| ydk::is_set(etherstatscreatetime.yfilter);
}

std::string RMONMIB::Etherstatstable::Etherstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/etherStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Etherstatstable::Etherstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsEntry" <<"[etherStatsIndex='" <<etherstatsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Etherstatstable::Etherstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etherstatsindex.is_set || is_set(etherstatsindex.yfilter)) leaf_name_data.push_back(etherstatsindex.get_name_leafdata());
    if (etherstatsdatasource.is_set || is_set(etherstatsdatasource.yfilter)) leaf_name_data.push_back(etherstatsdatasource.get_name_leafdata());
    if (etherstatsdropevents.is_set || is_set(etherstatsdropevents.yfilter)) leaf_name_data.push_back(etherstatsdropevents.get_name_leafdata());
    if (etherstatsoctets.is_set || is_set(etherstatsoctets.yfilter)) leaf_name_data.push_back(etherstatsoctets.get_name_leafdata());
    if (etherstatspkts.is_set || is_set(etherstatspkts.yfilter)) leaf_name_data.push_back(etherstatspkts.get_name_leafdata());
    if (etherstatsbroadcastpkts.is_set || is_set(etherstatsbroadcastpkts.yfilter)) leaf_name_data.push_back(etherstatsbroadcastpkts.get_name_leafdata());
    if (etherstatsmulticastpkts.is_set || is_set(etherstatsmulticastpkts.yfilter)) leaf_name_data.push_back(etherstatsmulticastpkts.get_name_leafdata());
    if (etherstatscrcalignerrors.is_set || is_set(etherstatscrcalignerrors.yfilter)) leaf_name_data.push_back(etherstatscrcalignerrors.get_name_leafdata());
    if (etherstatsundersizepkts.is_set || is_set(etherstatsundersizepkts.yfilter)) leaf_name_data.push_back(etherstatsundersizepkts.get_name_leafdata());
    if (etherstatsoversizepkts.is_set || is_set(etherstatsoversizepkts.yfilter)) leaf_name_data.push_back(etherstatsoversizepkts.get_name_leafdata());
    if (etherstatsfragments.is_set || is_set(etherstatsfragments.yfilter)) leaf_name_data.push_back(etherstatsfragments.get_name_leafdata());
    if (etherstatsjabbers.is_set || is_set(etherstatsjabbers.yfilter)) leaf_name_data.push_back(etherstatsjabbers.get_name_leafdata());
    if (etherstatscollisions.is_set || is_set(etherstatscollisions.yfilter)) leaf_name_data.push_back(etherstatscollisions.get_name_leafdata());
    if (etherstatspkts64octets.is_set || is_set(etherstatspkts64octets.yfilter)) leaf_name_data.push_back(etherstatspkts64octets.get_name_leafdata());
    if (etherstatspkts65to127octets.is_set || is_set(etherstatspkts65to127octets.yfilter)) leaf_name_data.push_back(etherstatspkts65to127octets.get_name_leafdata());
    if (etherstatspkts128to255octets.is_set || is_set(etherstatspkts128to255octets.yfilter)) leaf_name_data.push_back(etherstatspkts128to255octets.get_name_leafdata());
    if (etherstatspkts256to511octets.is_set || is_set(etherstatspkts256to511octets.yfilter)) leaf_name_data.push_back(etherstatspkts256to511octets.get_name_leafdata());
    if (etherstatspkts512to1023octets.is_set || is_set(etherstatspkts512to1023octets.yfilter)) leaf_name_data.push_back(etherstatspkts512to1023octets.get_name_leafdata());
    if (etherstatspkts1024to1518octets.is_set || is_set(etherstatspkts1024to1518octets.yfilter)) leaf_name_data.push_back(etherstatspkts1024to1518octets.get_name_leafdata());
    if (etherstatsowner.is_set || is_set(etherstatsowner.yfilter)) leaf_name_data.push_back(etherstatsowner.get_name_leafdata());
    if (etherstatsstatus.is_set || is_set(etherstatsstatus.yfilter)) leaf_name_data.push_back(etherstatsstatus.get_name_leafdata());
    if (etherstatsdroppedframes.is_set || is_set(etherstatsdroppedframes.yfilter)) leaf_name_data.push_back(etherstatsdroppedframes.get_name_leafdata());
    if (etherstatscreatetime.is_set || is_set(etherstatscreatetime.yfilter)) leaf_name_data.push_back(etherstatscreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Etherstatstable::Etherstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Etherstatstable::Etherstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Etherstatstable::Etherstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etherStatsIndex")
    {
        etherstatsindex = value;
        etherstatsindex.value_namespace = name_space;
        etherstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsDataSource")
    {
        etherstatsdatasource = value;
        etherstatsdatasource.value_namespace = name_space;
        etherstatsdatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsDropEvents")
    {
        etherstatsdropevents = value;
        etherstatsdropevents.value_namespace = name_space;
        etherstatsdropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsOctets")
    {
        etherstatsoctets = value;
        etherstatsoctets.value_namespace = name_space;
        etherstatsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts")
    {
        etherstatspkts = value;
        etherstatspkts.value_namespace = name_space;
        etherstatspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsBroadcastPkts")
    {
        etherstatsbroadcastpkts = value;
        etherstatsbroadcastpkts.value_namespace = name_space;
        etherstatsbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsMulticastPkts")
    {
        etherstatsmulticastpkts = value;
        etherstatsmulticastpkts.value_namespace = name_space;
        etherstatsmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsCRCAlignErrors")
    {
        etherstatscrcalignerrors = value;
        etherstatscrcalignerrors.value_namespace = name_space;
        etherstatscrcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsUndersizePkts")
    {
        etherstatsundersizepkts = value;
        etherstatsundersizepkts.value_namespace = name_space;
        etherstatsundersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsOversizePkts")
    {
        etherstatsoversizepkts = value;
        etherstatsoversizepkts.value_namespace = name_space;
        etherstatsoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsFragments")
    {
        etherstatsfragments = value;
        etherstatsfragments.value_namespace = name_space;
        etherstatsfragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsJabbers")
    {
        etherstatsjabbers = value;
        etherstatsjabbers.value_namespace = name_space;
        etherstatsjabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsCollisions")
    {
        etherstatscollisions = value;
        etherstatscollisions.value_namespace = name_space;
        etherstatscollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts64Octets")
    {
        etherstatspkts64octets = value;
        etherstatspkts64octets.value_namespace = name_space;
        etherstatspkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts65to127Octets")
    {
        etherstatspkts65to127octets = value;
        etherstatspkts65to127octets.value_namespace = name_space;
        etherstatspkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts128to255Octets")
    {
        etherstatspkts128to255octets = value;
        etherstatspkts128to255octets.value_namespace = name_space;
        etherstatspkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts256to511Octets")
    {
        etherstatspkts256to511octets = value;
        etherstatspkts256to511octets.value_namespace = name_space;
        etherstatspkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts512to1023Octets")
    {
        etherstatspkts512to1023octets = value;
        etherstatspkts512to1023octets.value_namespace = name_space;
        etherstatspkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsPkts1024to1518Octets")
    {
        etherstatspkts1024to1518octets = value;
        etherstatspkts1024to1518octets.value_namespace = name_space;
        etherstatspkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsOwner")
    {
        etherstatsowner = value;
        etherstatsowner.value_namespace = name_space;
        etherstatsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherStatsStatus")
    {
        etherstatsstatus = value;
        etherstatsstatus.value_namespace = name_space;
        etherstatsstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:etherStatsDroppedFrames")
    {
        etherstatsdroppedframes = value;
        etherstatsdroppedframes.value_namespace = name_space;
        etherstatsdroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:etherStatsCreateTime")
    {
        etherstatscreatetime = value;
        etherstatscreatetime.value_namespace = name_space;
        etherstatscreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Etherstatstable::Etherstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etherStatsIndex")
    {
        etherstatsindex.yfilter = yfilter;
    }
    if(value_path == "etherStatsDataSource")
    {
        etherstatsdatasource.yfilter = yfilter;
    }
    if(value_path == "etherStatsDropEvents")
    {
        etherstatsdropevents.yfilter = yfilter;
    }
    if(value_path == "etherStatsOctets")
    {
        etherstatsoctets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts")
    {
        etherstatspkts.yfilter = yfilter;
    }
    if(value_path == "etherStatsBroadcastPkts")
    {
        etherstatsbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "etherStatsMulticastPkts")
    {
        etherstatsmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "etherStatsCRCAlignErrors")
    {
        etherstatscrcalignerrors.yfilter = yfilter;
    }
    if(value_path == "etherStatsUndersizePkts")
    {
        etherstatsundersizepkts.yfilter = yfilter;
    }
    if(value_path == "etherStatsOversizePkts")
    {
        etherstatsoversizepkts.yfilter = yfilter;
    }
    if(value_path == "etherStatsFragments")
    {
        etherstatsfragments.yfilter = yfilter;
    }
    if(value_path == "etherStatsJabbers")
    {
        etherstatsjabbers.yfilter = yfilter;
    }
    if(value_path == "etherStatsCollisions")
    {
        etherstatscollisions.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts64Octets")
    {
        etherstatspkts64octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts65to127Octets")
    {
        etherstatspkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts128to255Octets")
    {
        etherstatspkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts256to511Octets")
    {
        etherstatspkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts512to1023Octets")
    {
        etherstatspkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsPkts1024to1518Octets")
    {
        etherstatspkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "etherStatsOwner")
    {
        etherstatsowner.yfilter = yfilter;
    }
    if(value_path == "etherStatsStatus")
    {
        etherstatsstatus.yfilter = yfilter;
    }
    if(value_path == "etherStatsDroppedFrames")
    {
        etherstatsdroppedframes.yfilter = yfilter;
    }
    if(value_path == "etherStatsCreateTime")
    {
        etherstatscreatetime.yfilter = yfilter;
    }
}

bool RMONMIB::Etherstatstable::Etherstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherStatsIndex" || name == "etherStatsDataSource" || name == "etherStatsDropEvents" || name == "etherStatsOctets" || name == "etherStatsPkts" || name == "etherStatsBroadcastPkts" || name == "etherStatsMulticastPkts" || name == "etherStatsCRCAlignErrors" || name == "etherStatsUndersizePkts" || name == "etherStatsOversizePkts" || name == "etherStatsFragments" || name == "etherStatsJabbers" || name == "etherStatsCollisions" || name == "etherStatsPkts64Octets" || name == "etherStatsPkts65to127Octets" || name == "etherStatsPkts128to255Octets" || name == "etherStatsPkts256to511Octets" || name == "etherStatsPkts512to1023Octets" || name == "etherStatsPkts1024to1518Octets" || name == "etherStatsOwner" || name == "etherStatsStatus" || name == "etherStatsDroppedFrames" || name == "etherStatsCreateTime")
        return true;
    return false;
}

RMONMIB::Historycontroltable::Historycontroltable()
{

    yang_name = "historyControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Historycontroltable::~Historycontroltable()
{
}

bool RMONMIB::Historycontroltable::has_data() const
{
    for (std::size_t index=0; index<historycontrolentry.size(); index++)
    {
        if(historycontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Historycontroltable::has_operation() const
{
    for (std::size_t index=0; index<historycontrolentry.size(); index++)
    {
        if(historycontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Historycontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Historycontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Historycontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Historycontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Historycontroltable::Historycontrolentry>();
        c->parent = this;
        historycontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Historycontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : historycontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Historycontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Historycontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Historycontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historyControlEntry")
        return true;
    return false;
}

RMONMIB::Historycontroltable::Historycontrolentry::Historycontrolentry()
    :
    historycontrolindex{YType::int32, "historyControlIndex"},
    historycontroldatasource{YType::str, "historyControlDataSource"},
    historycontrolbucketsrequested{YType::int32, "historyControlBucketsRequested"},
    historycontrolbucketsgranted{YType::int32, "historyControlBucketsGranted"},
    historycontrolinterval{YType::int32, "historyControlInterval"},
    historycontrolowner{YType::str, "historyControlOwner"},
    historycontrolstatus{YType::enumeration, "historyControlStatus"},
    historycontroldroppedframes{YType::uint32, "RMON2-MIB:historyControlDroppedFrames"}
{

    yang_name = "historyControlEntry"; yang_parent_name = "historyControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Historycontroltable::Historycontrolentry::~Historycontrolentry()
{
}

bool RMONMIB::Historycontroltable::Historycontrolentry::has_data() const
{
    return historycontrolindex.is_set
	|| historycontroldatasource.is_set
	|| historycontrolbucketsrequested.is_set
	|| historycontrolbucketsgranted.is_set
	|| historycontrolinterval.is_set
	|| historycontrolowner.is_set
	|| historycontrolstatus.is_set
	|| historycontroldroppedframes.is_set;
}

bool RMONMIB::Historycontroltable::Historycontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(historycontrolindex.yfilter)
	|| ydk::is_set(historycontroldatasource.yfilter)
	|| ydk::is_set(historycontrolbucketsrequested.yfilter)
	|| ydk::is_set(historycontrolbucketsgranted.yfilter)
	|| ydk::is_set(historycontrolinterval.yfilter)
	|| ydk::is_set(historycontrolowner.yfilter)
	|| ydk::is_set(historycontrolstatus.yfilter)
	|| ydk::is_set(historycontroldroppedframes.yfilter);
}

std::string RMONMIB::Historycontroltable::Historycontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/historyControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Historycontroltable::Historycontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlEntry" <<"[historyControlIndex='" <<historycontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Historycontroltable::Historycontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (historycontrolindex.is_set || is_set(historycontrolindex.yfilter)) leaf_name_data.push_back(historycontrolindex.get_name_leafdata());
    if (historycontroldatasource.is_set || is_set(historycontroldatasource.yfilter)) leaf_name_data.push_back(historycontroldatasource.get_name_leafdata());
    if (historycontrolbucketsrequested.is_set || is_set(historycontrolbucketsrequested.yfilter)) leaf_name_data.push_back(historycontrolbucketsrequested.get_name_leafdata());
    if (historycontrolbucketsgranted.is_set || is_set(historycontrolbucketsgranted.yfilter)) leaf_name_data.push_back(historycontrolbucketsgranted.get_name_leafdata());
    if (historycontrolinterval.is_set || is_set(historycontrolinterval.yfilter)) leaf_name_data.push_back(historycontrolinterval.get_name_leafdata());
    if (historycontrolowner.is_set || is_set(historycontrolowner.yfilter)) leaf_name_data.push_back(historycontrolowner.get_name_leafdata());
    if (historycontrolstatus.is_set || is_set(historycontrolstatus.yfilter)) leaf_name_data.push_back(historycontrolstatus.get_name_leafdata());
    if (historycontroldroppedframes.is_set || is_set(historycontroldroppedframes.yfilter)) leaf_name_data.push_back(historycontroldroppedframes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Historycontroltable::Historycontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Historycontroltable::Historycontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Historycontroltable::Historycontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "historyControlIndex")
    {
        historycontrolindex = value;
        historycontrolindex.value_namespace = name_space;
        historycontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlDataSource")
    {
        historycontroldatasource = value;
        historycontroldatasource.value_namespace = name_space;
        historycontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlBucketsRequested")
    {
        historycontrolbucketsrequested = value;
        historycontrolbucketsrequested.value_namespace = name_space;
        historycontrolbucketsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlBucketsGranted")
    {
        historycontrolbucketsgranted = value;
        historycontrolbucketsgranted.value_namespace = name_space;
        historycontrolbucketsgranted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlInterval")
    {
        historycontrolinterval = value;
        historycontrolinterval.value_namespace = name_space;
        historycontrolinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlOwner")
    {
        historycontrolowner = value;
        historycontrolowner.value_namespace = name_space;
        historycontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyControlStatus")
    {
        historycontrolstatus = value;
        historycontrolstatus.value_namespace = name_space;
        historycontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:historyControlDroppedFrames")
    {
        historycontroldroppedframes = value;
        historycontroldroppedframes.value_namespace = name_space;
        historycontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Historycontroltable::Historycontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "historyControlIndex")
    {
        historycontrolindex.yfilter = yfilter;
    }
    if(value_path == "historyControlDataSource")
    {
        historycontroldatasource.yfilter = yfilter;
    }
    if(value_path == "historyControlBucketsRequested")
    {
        historycontrolbucketsrequested.yfilter = yfilter;
    }
    if(value_path == "historyControlBucketsGranted")
    {
        historycontrolbucketsgranted.yfilter = yfilter;
    }
    if(value_path == "historyControlInterval")
    {
        historycontrolinterval.yfilter = yfilter;
    }
    if(value_path == "historyControlOwner")
    {
        historycontrolowner.yfilter = yfilter;
    }
    if(value_path == "historyControlStatus")
    {
        historycontrolstatus.yfilter = yfilter;
    }
    if(value_path == "historyControlDroppedFrames")
    {
        historycontroldroppedframes.yfilter = yfilter;
    }
}

bool RMONMIB::Historycontroltable::Historycontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historyControlIndex" || name == "historyControlDataSource" || name == "historyControlBucketsRequested" || name == "historyControlBucketsGranted" || name == "historyControlInterval" || name == "historyControlOwner" || name == "historyControlStatus" || name == "historyControlDroppedFrames")
        return true;
    return false;
}

RMONMIB::Etherhistorytable::Etherhistorytable()
{

    yang_name = "etherHistoryTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Etherhistorytable::~Etherhistorytable()
{
}

bool RMONMIB::Etherhistorytable::has_data() const
{
    for (std::size_t index=0; index<etherhistoryentry.size(); index++)
    {
        if(etherhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Etherhistorytable::has_operation() const
{
    for (std::size_t index=0; index<etherhistoryentry.size(); index++)
    {
        if(etherhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Etherhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Etherhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Etherhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Etherhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Etherhistorytable::Etherhistoryentry>();
        c->parent = this;
        etherhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Etherhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Etherhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Etherhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Etherhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherHistoryEntry")
        return true;
    return false;
}

RMONMIB::Etherhistorytable::Etherhistoryentry::Etherhistoryentry()
    :
    etherhistoryindex{YType::int32, "etherHistoryIndex"},
    etherhistorysampleindex{YType::int32, "etherHistorySampleIndex"},
    etherhistoryintervalstart{YType::uint32, "etherHistoryIntervalStart"},
    etherhistorydropevents{YType::uint32, "etherHistoryDropEvents"},
    etherhistoryoctets{YType::uint32, "etherHistoryOctets"},
    etherhistorypkts{YType::uint32, "etherHistoryPkts"},
    etherhistorybroadcastpkts{YType::uint32, "etherHistoryBroadcastPkts"},
    etherhistorymulticastpkts{YType::uint32, "etherHistoryMulticastPkts"},
    etherhistorycrcalignerrors{YType::uint32, "etherHistoryCRCAlignErrors"},
    etherhistoryundersizepkts{YType::uint32, "etherHistoryUndersizePkts"},
    etherhistoryoversizepkts{YType::uint32, "etherHistoryOversizePkts"},
    etherhistoryfragments{YType::uint32, "etherHistoryFragments"},
    etherhistoryjabbers{YType::uint32, "etherHistoryJabbers"},
    etherhistorycollisions{YType::uint32, "etherHistoryCollisions"},
    etherhistoryutilization{YType::int32, "etherHistoryUtilization"}
{

    yang_name = "etherHistoryEntry"; yang_parent_name = "etherHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Etherhistorytable::Etherhistoryentry::~Etherhistoryentry()
{
}

bool RMONMIB::Etherhistorytable::Etherhistoryentry::has_data() const
{
    return etherhistoryindex.is_set
	|| etherhistorysampleindex.is_set
	|| etherhistoryintervalstart.is_set
	|| etherhistorydropevents.is_set
	|| etherhistoryoctets.is_set
	|| etherhistorypkts.is_set
	|| etherhistorybroadcastpkts.is_set
	|| etherhistorymulticastpkts.is_set
	|| etherhistorycrcalignerrors.is_set
	|| etherhistoryundersizepkts.is_set
	|| etherhistoryoversizepkts.is_set
	|| etherhistoryfragments.is_set
	|| etherhistoryjabbers.is_set
	|| etherhistorycollisions.is_set
	|| etherhistoryutilization.is_set;
}

bool RMONMIB::Etherhistorytable::Etherhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etherhistoryindex.yfilter)
	|| ydk::is_set(etherhistorysampleindex.yfilter)
	|| ydk::is_set(etherhistoryintervalstart.yfilter)
	|| ydk::is_set(etherhistorydropevents.yfilter)
	|| ydk::is_set(etherhistoryoctets.yfilter)
	|| ydk::is_set(etherhistorypkts.yfilter)
	|| ydk::is_set(etherhistorybroadcastpkts.yfilter)
	|| ydk::is_set(etherhistorymulticastpkts.yfilter)
	|| ydk::is_set(etherhistorycrcalignerrors.yfilter)
	|| ydk::is_set(etherhistoryundersizepkts.yfilter)
	|| ydk::is_set(etherhistoryoversizepkts.yfilter)
	|| ydk::is_set(etherhistoryfragments.yfilter)
	|| ydk::is_set(etherhistoryjabbers.yfilter)
	|| ydk::is_set(etherhistorycollisions.yfilter)
	|| ydk::is_set(etherhistoryutilization.yfilter);
}

std::string RMONMIB::Etherhistorytable::Etherhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/etherHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Etherhistorytable::Etherhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryEntry" <<"[etherHistoryIndex='" <<etherhistoryindex <<"']" <<"[etherHistorySampleIndex='" <<etherhistorysampleindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Etherhistorytable::Etherhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etherhistoryindex.is_set || is_set(etherhistoryindex.yfilter)) leaf_name_data.push_back(etherhistoryindex.get_name_leafdata());
    if (etherhistorysampleindex.is_set || is_set(etherhistorysampleindex.yfilter)) leaf_name_data.push_back(etherhistorysampleindex.get_name_leafdata());
    if (etherhistoryintervalstart.is_set || is_set(etherhistoryintervalstart.yfilter)) leaf_name_data.push_back(etherhistoryintervalstart.get_name_leafdata());
    if (etherhistorydropevents.is_set || is_set(etherhistorydropevents.yfilter)) leaf_name_data.push_back(etherhistorydropevents.get_name_leafdata());
    if (etherhistoryoctets.is_set || is_set(etherhistoryoctets.yfilter)) leaf_name_data.push_back(etherhistoryoctets.get_name_leafdata());
    if (etherhistorypkts.is_set || is_set(etherhistorypkts.yfilter)) leaf_name_data.push_back(etherhistorypkts.get_name_leafdata());
    if (etherhistorybroadcastpkts.is_set || is_set(etherhistorybroadcastpkts.yfilter)) leaf_name_data.push_back(etherhistorybroadcastpkts.get_name_leafdata());
    if (etherhistorymulticastpkts.is_set || is_set(etherhistorymulticastpkts.yfilter)) leaf_name_data.push_back(etherhistorymulticastpkts.get_name_leafdata());
    if (etherhistorycrcalignerrors.is_set || is_set(etherhistorycrcalignerrors.yfilter)) leaf_name_data.push_back(etherhistorycrcalignerrors.get_name_leafdata());
    if (etherhistoryundersizepkts.is_set || is_set(etherhistoryundersizepkts.yfilter)) leaf_name_data.push_back(etherhistoryundersizepkts.get_name_leafdata());
    if (etherhistoryoversizepkts.is_set || is_set(etherhistoryoversizepkts.yfilter)) leaf_name_data.push_back(etherhistoryoversizepkts.get_name_leafdata());
    if (etherhistoryfragments.is_set || is_set(etherhistoryfragments.yfilter)) leaf_name_data.push_back(etherhistoryfragments.get_name_leafdata());
    if (etherhistoryjabbers.is_set || is_set(etherhistoryjabbers.yfilter)) leaf_name_data.push_back(etherhistoryjabbers.get_name_leafdata());
    if (etherhistorycollisions.is_set || is_set(etherhistorycollisions.yfilter)) leaf_name_data.push_back(etherhistorycollisions.get_name_leafdata());
    if (etherhistoryutilization.is_set || is_set(etherhistoryutilization.yfilter)) leaf_name_data.push_back(etherhistoryutilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Etherhistorytable::Etherhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Etherhistorytable::Etherhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Etherhistorytable::Etherhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etherHistoryIndex")
    {
        etherhistoryindex = value;
        etherhistoryindex.value_namespace = name_space;
        etherhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistorySampleIndex")
    {
        etherhistorysampleindex = value;
        etherhistorysampleindex.value_namespace = name_space;
        etherhistorysampleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryIntervalStart")
    {
        etherhistoryintervalstart = value;
        etherhistoryintervalstart.value_namespace = name_space;
        etherhistoryintervalstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryDropEvents")
    {
        etherhistorydropevents = value;
        etherhistorydropevents.value_namespace = name_space;
        etherhistorydropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryOctets")
    {
        etherhistoryoctets = value;
        etherhistoryoctets.value_namespace = name_space;
        etherhistoryoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryPkts")
    {
        etherhistorypkts = value;
        etherhistorypkts.value_namespace = name_space;
        etherhistorypkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryBroadcastPkts")
    {
        etherhistorybroadcastpkts = value;
        etherhistorybroadcastpkts.value_namespace = name_space;
        etherhistorybroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryMulticastPkts")
    {
        etherhistorymulticastpkts = value;
        etherhistorymulticastpkts.value_namespace = name_space;
        etherhistorymulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryCRCAlignErrors")
    {
        etherhistorycrcalignerrors = value;
        etherhistorycrcalignerrors.value_namespace = name_space;
        etherhistorycrcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryUndersizePkts")
    {
        etherhistoryundersizepkts = value;
        etherhistoryundersizepkts.value_namespace = name_space;
        etherhistoryundersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryOversizePkts")
    {
        etherhistoryoversizepkts = value;
        etherhistoryoversizepkts.value_namespace = name_space;
        etherhistoryoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryFragments")
    {
        etherhistoryfragments = value;
        etherhistoryfragments.value_namespace = name_space;
        etherhistoryfragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryJabbers")
    {
        etherhistoryjabbers = value;
        etherhistoryjabbers.value_namespace = name_space;
        etherhistoryjabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryCollisions")
    {
        etherhistorycollisions = value;
        etherhistorycollisions.value_namespace = name_space;
        etherhistorycollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherHistoryUtilization")
    {
        etherhistoryutilization = value;
        etherhistoryutilization.value_namespace = name_space;
        etherhistoryutilization.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Etherhistorytable::Etherhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etherHistoryIndex")
    {
        etherhistoryindex.yfilter = yfilter;
    }
    if(value_path == "etherHistorySampleIndex")
    {
        etherhistorysampleindex.yfilter = yfilter;
    }
    if(value_path == "etherHistoryIntervalStart")
    {
        etherhistoryintervalstart.yfilter = yfilter;
    }
    if(value_path == "etherHistoryDropEvents")
    {
        etherhistorydropevents.yfilter = yfilter;
    }
    if(value_path == "etherHistoryOctets")
    {
        etherhistoryoctets.yfilter = yfilter;
    }
    if(value_path == "etherHistoryPkts")
    {
        etherhistorypkts.yfilter = yfilter;
    }
    if(value_path == "etherHistoryBroadcastPkts")
    {
        etherhistorybroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "etherHistoryMulticastPkts")
    {
        etherhistorymulticastpkts.yfilter = yfilter;
    }
    if(value_path == "etherHistoryCRCAlignErrors")
    {
        etherhistorycrcalignerrors.yfilter = yfilter;
    }
    if(value_path == "etherHistoryUndersizePkts")
    {
        etherhistoryundersizepkts.yfilter = yfilter;
    }
    if(value_path == "etherHistoryOversizePkts")
    {
        etherhistoryoversizepkts.yfilter = yfilter;
    }
    if(value_path == "etherHistoryFragments")
    {
        etherhistoryfragments.yfilter = yfilter;
    }
    if(value_path == "etherHistoryJabbers")
    {
        etherhistoryjabbers.yfilter = yfilter;
    }
    if(value_path == "etherHistoryCollisions")
    {
        etherhistorycollisions.yfilter = yfilter;
    }
    if(value_path == "etherHistoryUtilization")
    {
        etherhistoryutilization.yfilter = yfilter;
    }
}

bool RMONMIB::Etherhistorytable::Etherhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherHistoryIndex" || name == "etherHistorySampleIndex" || name == "etherHistoryIntervalStart" || name == "etherHistoryDropEvents" || name == "etherHistoryOctets" || name == "etherHistoryPkts" || name == "etherHistoryBroadcastPkts" || name == "etherHistoryMulticastPkts" || name == "etherHistoryCRCAlignErrors" || name == "etherHistoryUndersizePkts" || name == "etherHistoryOversizePkts" || name == "etherHistoryFragments" || name == "etherHistoryJabbers" || name == "etherHistoryCollisions" || name == "etherHistoryUtilization")
        return true;
    return false;
}

RMONMIB::Alarmtable::Alarmtable()
{

    yang_name = "alarmTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Alarmtable::~Alarmtable()
{
}

bool RMONMIB::Alarmtable::has_data() const
{
    for (std::size_t index=0; index<alarmentry.size(); index++)
    {
        if(alarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Alarmtable::has_operation() const
{
    for (std::size_t index=0; index<alarmentry.size(); index++)
    {
        if(alarmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Alarmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Alarmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Alarmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Alarmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Alarmtable::Alarmentry>();
        c->parent = this;
        alarmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Alarmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Alarmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Alarmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Alarmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarmEntry")
        return true;
    return false;
}

RMONMIB::Alarmtable::Alarmentry::Alarmentry()
    :
    alarmindex{YType::int32, "alarmIndex"},
    alarminterval{YType::int32, "alarmInterval"},
    alarmvariable{YType::str, "alarmVariable"},
    alarmsampletype{YType::enumeration, "alarmSampleType"},
    alarmvalue{YType::int32, "alarmValue"},
    alarmstartupalarm{YType::enumeration, "alarmStartupAlarm"},
    alarmrisingthreshold{YType::int32, "alarmRisingThreshold"},
    alarmfallingthreshold{YType::int32, "alarmFallingThreshold"},
    alarmrisingeventindex{YType::int32, "alarmRisingEventIndex"},
    alarmfallingeventindex{YType::int32, "alarmFallingEventIndex"},
    alarmowner{YType::str, "alarmOwner"},
    alarmstatus{YType::enumeration, "alarmStatus"}
{

    yang_name = "alarmEntry"; yang_parent_name = "alarmTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Alarmtable::Alarmentry::~Alarmentry()
{
}

bool RMONMIB::Alarmtable::Alarmentry::has_data() const
{
    return alarmindex.is_set
	|| alarminterval.is_set
	|| alarmvariable.is_set
	|| alarmsampletype.is_set
	|| alarmvalue.is_set
	|| alarmstartupalarm.is_set
	|| alarmrisingthreshold.is_set
	|| alarmfallingthreshold.is_set
	|| alarmrisingeventindex.is_set
	|| alarmfallingeventindex.is_set
	|| alarmowner.is_set
	|| alarmstatus.is_set;
}

bool RMONMIB::Alarmtable::Alarmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarmindex.yfilter)
	|| ydk::is_set(alarminterval.yfilter)
	|| ydk::is_set(alarmvariable.yfilter)
	|| ydk::is_set(alarmsampletype.yfilter)
	|| ydk::is_set(alarmvalue.yfilter)
	|| ydk::is_set(alarmstartupalarm.yfilter)
	|| ydk::is_set(alarmrisingthreshold.yfilter)
	|| ydk::is_set(alarmfallingthreshold.yfilter)
	|| ydk::is_set(alarmrisingeventindex.yfilter)
	|| ydk::is_set(alarmfallingeventindex.yfilter)
	|| ydk::is_set(alarmowner.yfilter)
	|| ydk::is_set(alarmstatus.yfilter);
}

std::string RMONMIB::Alarmtable::Alarmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/alarmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Alarmtable::Alarmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmEntry" <<"[alarmIndex='" <<alarmindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Alarmtable::Alarmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarmindex.is_set || is_set(alarmindex.yfilter)) leaf_name_data.push_back(alarmindex.get_name_leafdata());
    if (alarminterval.is_set || is_set(alarminterval.yfilter)) leaf_name_data.push_back(alarminterval.get_name_leafdata());
    if (alarmvariable.is_set || is_set(alarmvariable.yfilter)) leaf_name_data.push_back(alarmvariable.get_name_leafdata());
    if (alarmsampletype.is_set || is_set(alarmsampletype.yfilter)) leaf_name_data.push_back(alarmsampletype.get_name_leafdata());
    if (alarmvalue.is_set || is_set(alarmvalue.yfilter)) leaf_name_data.push_back(alarmvalue.get_name_leafdata());
    if (alarmstartupalarm.is_set || is_set(alarmstartupalarm.yfilter)) leaf_name_data.push_back(alarmstartupalarm.get_name_leafdata());
    if (alarmrisingthreshold.is_set || is_set(alarmrisingthreshold.yfilter)) leaf_name_data.push_back(alarmrisingthreshold.get_name_leafdata());
    if (alarmfallingthreshold.is_set || is_set(alarmfallingthreshold.yfilter)) leaf_name_data.push_back(alarmfallingthreshold.get_name_leafdata());
    if (alarmrisingeventindex.is_set || is_set(alarmrisingeventindex.yfilter)) leaf_name_data.push_back(alarmrisingeventindex.get_name_leafdata());
    if (alarmfallingeventindex.is_set || is_set(alarmfallingeventindex.yfilter)) leaf_name_data.push_back(alarmfallingeventindex.get_name_leafdata());
    if (alarmowner.is_set || is_set(alarmowner.yfilter)) leaf_name_data.push_back(alarmowner.get_name_leafdata());
    if (alarmstatus.is_set || is_set(alarmstatus.yfilter)) leaf_name_data.push_back(alarmstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Alarmtable::Alarmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Alarmtable::Alarmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Alarmtable::Alarmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarmIndex")
    {
        alarmindex = value;
        alarmindex.value_namespace = name_space;
        alarmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmInterval")
    {
        alarminterval = value;
        alarminterval.value_namespace = name_space;
        alarminterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmVariable")
    {
        alarmvariable = value;
        alarmvariable.value_namespace = name_space;
        alarmvariable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmSampleType")
    {
        alarmsampletype = value;
        alarmsampletype.value_namespace = name_space;
        alarmsampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmValue")
    {
        alarmvalue = value;
        alarmvalue.value_namespace = name_space;
        alarmvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmStartupAlarm")
    {
        alarmstartupalarm = value;
        alarmstartupalarm.value_namespace = name_space;
        alarmstartupalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmRisingThreshold")
    {
        alarmrisingthreshold = value;
        alarmrisingthreshold.value_namespace = name_space;
        alarmrisingthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmFallingThreshold")
    {
        alarmfallingthreshold = value;
        alarmfallingthreshold.value_namespace = name_space;
        alarmfallingthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmRisingEventIndex")
    {
        alarmrisingeventindex = value;
        alarmrisingeventindex.value_namespace = name_space;
        alarmrisingeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmFallingEventIndex")
    {
        alarmfallingeventindex = value;
        alarmfallingeventindex.value_namespace = name_space;
        alarmfallingeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmOwner")
    {
        alarmowner = value;
        alarmowner.value_namespace = name_space;
        alarmowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmStatus")
    {
        alarmstatus = value;
        alarmstatus.value_namespace = name_space;
        alarmstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Alarmtable::Alarmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarmIndex")
    {
        alarmindex.yfilter = yfilter;
    }
    if(value_path == "alarmInterval")
    {
        alarminterval.yfilter = yfilter;
    }
    if(value_path == "alarmVariable")
    {
        alarmvariable.yfilter = yfilter;
    }
    if(value_path == "alarmSampleType")
    {
        alarmsampletype.yfilter = yfilter;
    }
    if(value_path == "alarmValue")
    {
        alarmvalue.yfilter = yfilter;
    }
    if(value_path == "alarmStartupAlarm")
    {
        alarmstartupalarm.yfilter = yfilter;
    }
    if(value_path == "alarmRisingThreshold")
    {
        alarmrisingthreshold.yfilter = yfilter;
    }
    if(value_path == "alarmFallingThreshold")
    {
        alarmfallingthreshold.yfilter = yfilter;
    }
    if(value_path == "alarmRisingEventIndex")
    {
        alarmrisingeventindex.yfilter = yfilter;
    }
    if(value_path == "alarmFallingEventIndex")
    {
        alarmfallingeventindex.yfilter = yfilter;
    }
    if(value_path == "alarmOwner")
    {
        alarmowner.yfilter = yfilter;
    }
    if(value_path == "alarmStatus")
    {
        alarmstatus.yfilter = yfilter;
    }
}

bool RMONMIB::Alarmtable::Alarmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarmIndex" || name == "alarmInterval" || name == "alarmVariable" || name == "alarmSampleType" || name == "alarmValue" || name == "alarmStartupAlarm" || name == "alarmRisingThreshold" || name == "alarmFallingThreshold" || name == "alarmRisingEventIndex" || name == "alarmFallingEventIndex" || name == "alarmOwner" || name == "alarmStatus")
        return true;
    return false;
}

RMONMIB::Hostcontroltable::Hostcontroltable()
{

    yang_name = "hostControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hostcontroltable::~Hostcontroltable()
{
}

bool RMONMIB::Hostcontroltable::has_data() const
{
    for (std::size_t index=0; index<hostcontrolentry.size(); index++)
    {
        if(hostcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Hostcontroltable::has_operation() const
{
    for (std::size_t index=0; index<hostcontrolentry.size(); index++)
    {
        if(hostcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Hostcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hostcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hostcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hostcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Hostcontroltable::Hostcontrolentry>();
        c->parent = this;
        hostcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hostcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hostcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Hostcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Hostcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Hostcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostControlEntry")
        return true;
    return false;
}

RMONMIB::Hostcontroltable::Hostcontrolentry::Hostcontrolentry()
    :
    hostcontrolindex{YType::int32, "hostControlIndex"},
    hostcontroldatasource{YType::str, "hostControlDataSource"},
    hostcontroltablesize{YType::int32, "hostControlTableSize"},
    hostcontrollastdeletetime{YType::uint32, "hostControlLastDeleteTime"},
    hostcontrolowner{YType::str, "hostControlOwner"},
    hostcontrolstatus{YType::enumeration, "hostControlStatus"},
    hostcontroldroppedframes{YType::uint32, "RMON2-MIB:hostControlDroppedFrames"},
    hostcontrolcreatetime{YType::uint32, "RMON2-MIB:hostControlCreateTime"}
{

    yang_name = "hostControlEntry"; yang_parent_name = "hostControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hostcontroltable::Hostcontrolentry::~Hostcontrolentry()
{
}

bool RMONMIB::Hostcontroltable::Hostcontrolentry::has_data() const
{
    return hostcontrolindex.is_set
	|| hostcontroldatasource.is_set
	|| hostcontroltablesize.is_set
	|| hostcontrollastdeletetime.is_set
	|| hostcontrolowner.is_set
	|| hostcontrolstatus.is_set
	|| hostcontroldroppedframes.is_set
	|| hostcontrolcreatetime.is_set;
}

bool RMONMIB::Hostcontroltable::Hostcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostcontrolindex.yfilter)
	|| ydk::is_set(hostcontroldatasource.yfilter)
	|| ydk::is_set(hostcontroltablesize.yfilter)
	|| ydk::is_set(hostcontrollastdeletetime.yfilter)
	|| ydk::is_set(hostcontrolowner.yfilter)
	|| ydk::is_set(hostcontrolstatus.yfilter)
	|| ydk::is_set(hostcontroldroppedframes.yfilter)
	|| ydk::is_set(hostcontrolcreatetime.yfilter);
}

std::string RMONMIB::Hostcontroltable::Hostcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hostcontroltable::Hostcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlEntry" <<"[hostControlIndex='" <<hostcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hostcontroltable::Hostcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostcontrolindex.is_set || is_set(hostcontrolindex.yfilter)) leaf_name_data.push_back(hostcontrolindex.get_name_leafdata());
    if (hostcontroldatasource.is_set || is_set(hostcontroldatasource.yfilter)) leaf_name_data.push_back(hostcontroldatasource.get_name_leafdata());
    if (hostcontroltablesize.is_set || is_set(hostcontroltablesize.yfilter)) leaf_name_data.push_back(hostcontroltablesize.get_name_leafdata());
    if (hostcontrollastdeletetime.is_set || is_set(hostcontrollastdeletetime.yfilter)) leaf_name_data.push_back(hostcontrollastdeletetime.get_name_leafdata());
    if (hostcontrolowner.is_set || is_set(hostcontrolowner.yfilter)) leaf_name_data.push_back(hostcontrolowner.get_name_leafdata());
    if (hostcontrolstatus.is_set || is_set(hostcontrolstatus.yfilter)) leaf_name_data.push_back(hostcontrolstatus.get_name_leafdata());
    if (hostcontroldroppedframes.is_set || is_set(hostcontroldroppedframes.yfilter)) leaf_name_data.push_back(hostcontroldroppedframes.get_name_leafdata());
    if (hostcontrolcreatetime.is_set || is_set(hostcontrolcreatetime.yfilter)) leaf_name_data.push_back(hostcontrolcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hostcontroltable::Hostcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hostcontroltable::Hostcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Hostcontroltable::Hostcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostControlIndex")
    {
        hostcontrolindex = value;
        hostcontrolindex.value_namespace = name_space;
        hostcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostControlDataSource")
    {
        hostcontroldatasource = value;
        hostcontroldatasource.value_namespace = name_space;
        hostcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostControlTableSize")
    {
        hostcontroltablesize = value;
        hostcontroltablesize.value_namespace = name_space;
        hostcontroltablesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostControlLastDeleteTime")
    {
        hostcontrollastdeletetime = value;
        hostcontrollastdeletetime.value_namespace = name_space;
        hostcontrollastdeletetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostControlOwner")
    {
        hostcontrolowner = value;
        hostcontrolowner.value_namespace = name_space;
        hostcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostControlStatus")
    {
        hostcontrolstatus = value;
        hostcontrolstatus.value_namespace = name_space;
        hostcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:hostControlDroppedFrames")
    {
        hostcontroldroppedframes = value;
        hostcontroldroppedframes.value_namespace = name_space;
        hostcontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:hostControlCreateTime")
    {
        hostcontrolcreatetime = value;
        hostcontrolcreatetime.value_namespace = name_space;
        hostcontrolcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Hostcontroltable::Hostcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostControlIndex")
    {
        hostcontrolindex.yfilter = yfilter;
    }
    if(value_path == "hostControlDataSource")
    {
        hostcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "hostControlTableSize")
    {
        hostcontroltablesize.yfilter = yfilter;
    }
    if(value_path == "hostControlLastDeleteTime")
    {
        hostcontrollastdeletetime.yfilter = yfilter;
    }
    if(value_path == "hostControlOwner")
    {
        hostcontrolowner.yfilter = yfilter;
    }
    if(value_path == "hostControlStatus")
    {
        hostcontrolstatus.yfilter = yfilter;
    }
    if(value_path == "hostControlDroppedFrames")
    {
        hostcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hostControlCreateTime")
    {
        hostcontrolcreatetime.yfilter = yfilter;
    }
}

bool RMONMIB::Hostcontroltable::Hostcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostControlIndex" || name == "hostControlDataSource" || name == "hostControlTableSize" || name == "hostControlLastDeleteTime" || name == "hostControlOwner" || name == "hostControlStatus" || name == "hostControlDroppedFrames" || name == "hostControlCreateTime")
        return true;
    return false;
}

RMONMIB::Hosttable::Hosttable()
{

    yang_name = "hostTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttable::~Hosttable()
{
}

bool RMONMIB::Hosttable::has_data() const
{
    for (std::size_t index=0; index<hostentry.size(); index++)
    {
        if(hostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Hosttable::has_operation() const
{
    for (std::size_t index=0; index<hostentry.size(); index++)
    {
        if(hostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Hosttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Hosttable::Hostentry>();
        c->parent = this;
        hostentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hostentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Hosttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Hosttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Hosttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostEntry")
        return true;
    return false;
}

RMONMIB::Hosttable::Hostentry::Hostentry()
    :
    hostindex{YType::int32, "hostIndex"},
    hostaddress{YType::str, "hostAddress"},
    hostcreationorder{YType::int32, "hostCreationOrder"},
    hostinpkts{YType::uint32, "hostInPkts"},
    hostoutpkts{YType::uint32, "hostOutPkts"},
    hostinoctets{YType::uint32, "hostInOctets"},
    hostoutoctets{YType::uint32, "hostOutOctets"},
    hostouterrors{YType::uint32, "hostOutErrors"},
    hostoutbroadcastpkts{YType::uint32, "hostOutBroadcastPkts"},
    hostoutmulticastpkts{YType::uint32, "hostOutMulticastPkts"}
{

    yang_name = "hostEntry"; yang_parent_name = "hostTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttable::Hostentry::~Hostentry()
{
}

bool RMONMIB::Hosttable::Hostentry::has_data() const
{
    return hostindex.is_set
	|| hostaddress.is_set
	|| hostcreationorder.is_set
	|| hostinpkts.is_set
	|| hostoutpkts.is_set
	|| hostinoctets.is_set
	|| hostoutoctets.is_set
	|| hostouterrors.is_set
	|| hostoutbroadcastpkts.is_set
	|| hostoutmulticastpkts.is_set;
}

bool RMONMIB::Hosttable::Hostentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostindex.yfilter)
	|| ydk::is_set(hostaddress.yfilter)
	|| ydk::is_set(hostcreationorder.yfilter)
	|| ydk::is_set(hostinpkts.yfilter)
	|| ydk::is_set(hostoutpkts.yfilter)
	|| ydk::is_set(hostinoctets.yfilter)
	|| ydk::is_set(hostoutoctets.yfilter)
	|| ydk::is_set(hostouterrors.yfilter)
	|| ydk::is_set(hostoutbroadcastpkts.yfilter)
	|| ydk::is_set(hostoutmulticastpkts.yfilter);
}

std::string RMONMIB::Hosttable::Hostentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttable::Hostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostEntry" <<"[hostIndex='" <<hostindex <<"']" <<"[hostAddress='" <<hostaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttable::Hostentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostindex.is_set || is_set(hostindex.yfilter)) leaf_name_data.push_back(hostindex.get_name_leafdata());
    if (hostaddress.is_set || is_set(hostaddress.yfilter)) leaf_name_data.push_back(hostaddress.get_name_leafdata());
    if (hostcreationorder.is_set || is_set(hostcreationorder.yfilter)) leaf_name_data.push_back(hostcreationorder.get_name_leafdata());
    if (hostinpkts.is_set || is_set(hostinpkts.yfilter)) leaf_name_data.push_back(hostinpkts.get_name_leafdata());
    if (hostoutpkts.is_set || is_set(hostoutpkts.yfilter)) leaf_name_data.push_back(hostoutpkts.get_name_leafdata());
    if (hostinoctets.is_set || is_set(hostinoctets.yfilter)) leaf_name_data.push_back(hostinoctets.get_name_leafdata());
    if (hostoutoctets.is_set || is_set(hostoutoctets.yfilter)) leaf_name_data.push_back(hostoutoctets.get_name_leafdata());
    if (hostouterrors.is_set || is_set(hostouterrors.yfilter)) leaf_name_data.push_back(hostouterrors.get_name_leafdata());
    if (hostoutbroadcastpkts.is_set || is_set(hostoutbroadcastpkts.yfilter)) leaf_name_data.push_back(hostoutbroadcastpkts.get_name_leafdata());
    if (hostoutmulticastpkts.is_set || is_set(hostoutmulticastpkts.yfilter)) leaf_name_data.push_back(hostoutmulticastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttable::Hostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttable::Hostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Hosttable::Hostentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostIndex")
    {
        hostindex = value;
        hostindex.value_namespace = name_space;
        hostindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostAddress")
    {
        hostaddress = value;
        hostaddress.value_namespace = name_space;
        hostaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostCreationOrder")
    {
        hostcreationorder = value;
        hostcreationorder.value_namespace = name_space;
        hostcreationorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostInPkts")
    {
        hostinpkts = value;
        hostinpkts.value_namespace = name_space;
        hostinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostOutPkts")
    {
        hostoutpkts = value;
        hostoutpkts.value_namespace = name_space;
        hostoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostInOctets")
    {
        hostinoctets = value;
        hostinoctets.value_namespace = name_space;
        hostinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostOutOctets")
    {
        hostoutoctets = value;
        hostoutoctets.value_namespace = name_space;
        hostoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostOutErrors")
    {
        hostouterrors = value;
        hostouterrors.value_namespace = name_space;
        hostouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostOutBroadcastPkts")
    {
        hostoutbroadcastpkts = value;
        hostoutbroadcastpkts.value_namespace = name_space;
        hostoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostOutMulticastPkts")
    {
        hostoutmulticastpkts = value;
        hostoutmulticastpkts.value_namespace = name_space;
        hostoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Hosttable::Hostentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostIndex")
    {
        hostindex.yfilter = yfilter;
    }
    if(value_path == "hostAddress")
    {
        hostaddress.yfilter = yfilter;
    }
    if(value_path == "hostCreationOrder")
    {
        hostcreationorder.yfilter = yfilter;
    }
    if(value_path == "hostInPkts")
    {
        hostinpkts.yfilter = yfilter;
    }
    if(value_path == "hostOutPkts")
    {
        hostoutpkts.yfilter = yfilter;
    }
    if(value_path == "hostInOctets")
    {
        hostinoctets.yfilter = yfilter;
    }
    if(value_path == "hostOutOctets")
    {
        hostoutoctets.yfilter = yfilter;
    }
    if(value_path == "hostOutErrors")
    {
        hostouterrors.yfilter = yfilter;
    }
    if(value_path == "hostOutBroadcastPkts")
    {
        hostoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "hostOutMulticastPkts")
    {
        hostoutmulticastpkts.yfilter = yfilter;
    }
}

bool RMONMIB::Hosttable::Hostentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostIndex" || name == "hostAddress" || name == "hostCreationOrder" || name == "hostInPkts" || name == "hostOutPkts" || name == "hostInOctets" || name == "hostOutOctets" || name == "hostOutErrors" || name == "hostOutBroadcastPkts" || name == "hostOutMulticastPkts")
        return true;
    return false;
}

RMONMIB::Hosttimetable::Hosttimetable()
{

    yang_name = "hostTimeTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttimetable::~Hosttimetable()
{
}

bool RMONMIB::Hosttimetable::has_data() const
{
    for (std::size_t index=0; index<hosttimeentry.size(); index++)
    {
        if(hosttimeentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Hosttimetable::has_operation() const
{
    for (std::size_t index=0; index<hosttimeentry.size(); index++)
    {
        if(hosttimeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Hosttimetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttimetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttimetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttimetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Hosttimetable::Hosttimeentry>();
        c->parent = this;
        hosttimeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttimetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttimeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Hosttimetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Hosttimetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Hosttimetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTimeEntry")
        return true;
    return false;
}

RMONMIB::Hosttimetable::Hosttimeentry::Hosttimeentry()
    :
    hosttimeindex{YType::int32, "hostTimeIndex"},
    hosttimecreationorder{YType::int32, "hostTimeCreationOrder"},
    hosttimeaddress{YType::str, "hostTimeAddress"},
    hosttimeinpkts{YType::uint32, "hostTimeInPkts"},
    hosttimeoutpkts{YType::uint32, "hostTimeOutPkts"},
    hosttimeinoctets{YType::uint32, "hostTimeInOctets"},
    hosttimeoutoctets{YType::uint32, "hostTimeOutOctets"},
    hosttimeouterrors{YType::uint32, "hostTimeOutErrors"},
    hosttimeoutbroadcastpkts{YType::uint32, "hostTimeOutBroadcastPkts"},
    hosttimeoutmulticastpkts{YType::uint32, "hostTimeOutMulticastPkts"}
{

    yang_name = "hostTimeEntry"; yang_parent_name = "hostTimeTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttimetable::Hosttimeentry::~Hosttimeentry()
{
}

bool RMONMIB::Hosttimetable::Hosttimeentry::has_data() const
{
    return hosttimeindex.is_set
	|| hosttimecreationorder.is_set
	|| hosttimeaddress.is_set
	|| hosttimeinpkts.is_set
	|| hosttimeoutpkts.is_set
	|| hosttimeinoctets.is_set
	|| hosttimeoutoctets.is_set
	|| hosttimeouterrors.is_set
	|| hosttimeoutbroadcastpkts.is_set
	|| hosttimeoutmulticastpkts.is_set;
}

bool RMONMIB::Hosttimetable::Hosttimeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hosttimeindex.yfilter)
	|| ydk::is_set(hosttimecreationorder.yfilter)
	|| ydk::is_set(hosttimeaddress.yfilter)
	|| ydk::is_set(hosttimeinpkts.yfilter)
	|| ydk::is_set(hosttimeoutpkts.yfilter)
	|| ydk::is_set(hosttimeinoctets.yfilter)
	|| ydk::is_set(hosttimeoutoctets.yfilter)
	|| ydk::is_set(hosttimeouterrors.yfilter)
	|| ydk::is_set(hosttimeoutbroadcastpkts.yfilter)
	|| ydk::is_set(hosttimeoutmulticastpkts.yfilter);
}

std::string RMONMIB::Hosttimetable::Hosttimeentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTimeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttimetable::Hosttimeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeEntry" <<"[hostTimeIndex='" <<hosttimeindex <<"']" <<"[hostTimeCreationOrder='" <<hosttimecreationorder <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttimetable::Hosttimeentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttimeindex.is_set || is_set(hosttimeindex.yfilter)) leaf_name_data.push_back(hosttimeindex.get_name_leafdata());
    if (hosttimecreationorder.is_set || is_set(hosttimecreationorder.yfilter)) leaf_name_data.push_back(hosttimecreationorder.get_name_leafdata());
    if (hosttimeaddress.is_set || is_set(hosttimeaddress.yfilter)) leaf_name_data.push_back(hosttimeaddress.get_name_leafdata());
    if (hosttimeinpkts.is_set || is_set(hosttimeinpkts.yfilter)) leaf_name_data.push_back(hosttimeinpkts.get_name_leafdata());
    if (hosttimeoutpkts.is_set || is_set(hosttimeoutpkts.yfilter)) leaf_name_data.push_back(hosttimeoutpkts.get_name_leafdata());
    if (hosttimeinoctets.is_set || is_set(hosttimeinoctets.yfilter)) leaf_name_data.push_back(hosttimeinoctets.get_name_leafdata());
    if (hosttimeoutoctets.is_set || is_set(hosttimeoutoctets.yfilter)) leaf_name_data.push_back(hosttimeoutoctets.get_name_leafdata());
    if (hosttimeouterrors.is_set || is_set(hosttimeouterrors.yfilter)) leaf_name_data.push_back(hosttimeouterrors.get_name_leafdata());
    if (hosttimeoutbroadcastpkts.is_set || is_set(hosttimeoutbroadcastpkts.yfilter)) leaf_name_data.push_back(hosttimeoutbroadcastpkts.get_name_leafdata());
    if (hosttimeoutmulticastpkts.is_set || is_set(hosttimeoutmulticastpkts.yfilter)) leaf_name_data.push_back(hosttimeoutmulticastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttimetable::Hosttimeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttimetable::Hosttimeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Hosttimetable::Hosttimeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostTimeIndex")
    {
        hosttimeindex = value;
        hosttimeindex.value_namespace = name_space;
        hosttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeCreationOrder")
    {
        hosttimecreationorder = value;
        hosttimecreationorder.value_namespace = name_space;
        hosttimecreationorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeAddress")
    {
        hosttimeaddress = value;
        hosttimeaddress.value_namespace = name_space;
        hosttimeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeInPkts")
    {
        hosttimeinpkts = value;
        hosttimeinpkts.value_namespace = name_space;
        hosttimeinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeOutPkts")
    {
        hosttimeoutpkts = value;
        hosttimeoutpkts.value_namespace = name_space;
        hosttimeoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeInOctets")
    {
        hosttimeinoctets = value;
        hosttimeinoctets.value_namespace = name_space;
        hosttimeinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeOutOctets")
    {
        hosttimeoutoctets = value;
        hosttimeoutoctets.value_namespace = name_space;
        hosttimeoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeOutErrors")
    {
        hosttimeouterrors = value;
        hosttimeouterrors.value_namespace = name_space;
        hosttimeouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeOutBroadcastPkts")
    {
        hosttimeoutbroadcastpkts = value;
        hosttimeoutbroadcastpkts.value_namespace = name_space;
        hosttimeoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTimeOutMulticastPkts")
    {
        hosttimeoutmulticastpkts = value;
        hosttimeoutmulticastpkts.value_namespace = name_space;
        hosttimeoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Hosttimetable::Hosttimeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostTimeIndex")
    {
        hosttimeindex.yfilter = yfilter;
    }
    if(value_path == "hostTimeCreationOrder")
    {
        hosttimecreationorder.yfilter = yfilter;
    }
    if(value_path == "hostTimeAddress")
    {
        hosttimeaddress.yfilter = yfilter;
    }
    if(value_path == "hostTimeInPkts")
    {
        hosttimeinpkts.yfilter = yfilter;
    }
    if(value_path == "hostTimeOutPkts")
    {
        hosttimeoutpkts.yfilter = yfilter;
    }
    if(value_path == "hostTimeInOctets")
    {
        hosttimeinoctets.yfilter = yfilter;
    }
    if(value_path == "hostTimeOutOctets")
    {
        hosttimeoutoctets.yfilter = yfilter;
    }
    if(value_path == "hostTimeOutErrors")
    {
        hosttimeouterrors.yfilter = yfilter;
    }
    if(value_path == "hostTimeOutBroadcastPkts")
    {
        hosttimeoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "hostTimeOutMulticastPkts")
    {
        hosttimeoutmulticastpkts.yfilter = yfilter;
    }
}

bool RMONMIB::Hosttimetable::Hosttimeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTimeIndex" || name == "hostTimeCreationOrder" || name == "hostTimeAddress" || name == "hostTimeInPkts" || name == "hostTimeOutPkts" || name == "hostTimeInOctets" || name == "hostTimeOutOctets" || name == "hostTimeOutErrors" || name == "hostTimeOutBroadcastPkts" || name == "hostTimeOutMulticastPkts")
        return true;
    return false;
}

RMONMIB::Hosttopncontroltable::Hosttopncontroltable()
{

    yang_name = "hostTopNControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttopncontroltable::~Hosttopncontroltable()
{
}

bool RMONMIB::Hosttopncontroltable::has_data() const
{
    for (std::size_t index=0; index<hosttopncontrolentry.size(); index++)
    {
        if(hosttopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Hosttopncontroltable::has_operation() const
{
    for (std::size_t index=0; index<hosttopncontrolentry.size(); index++)
    {
        if(hosttopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Hosttopncontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttopncontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttopncontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttopncontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Hosttopncontroltable::Hosttopncontrolentry>();
        c->parent = this;
        hosttopncontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttopncontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttopncontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Hosttopncontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Hosttopncontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Hosttopncontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNControlEntry")
        return true;
    return false;
}

RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopncontrolentry()
    :
    hosttopncontrolindex{YType::int32, "hostTopNControlIndex"},
    hosttopnhostindex{YType::int32, "hostTopNHostIndex"},
    hosttopnratebase{YType::enumeration, "hostTopNRateBase"},
    hosttopntimeremaining{YType::int32, "hostTopNTimeRemaining"},
    hosttopnduration{YType::int32, "hostTopNDuration"},
    hosttopnrequestedsize{YType::int32, "hostTopNRequestedSize"},
    hosttopngrantedsize{YType::int32, "hostTopNGrantedSize"},
    hosttopnstarttime{YType::uint32, "hostTopNStartTime"},
    hosttopnowner{YType::str, "hostTopNOwner"},
    hosttopnstatus{YType::enumeration, "hostTopNStatus"}
{

    yang_name = "hostTopNControlEntry"; yang_parent_name = "hostTopNControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::~Hosttopncontrolentry()
{
}

bool RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::has_data() const
{
    return hosttopncontrolindex.is_set
	|| hosttopnhostindex.is_set
	|| hosttopnratebase.is_set
	|| hosttopntimeremaining.is_set
	|| hosttopnduration.is_set
	|| hosttopnrequestedsize.is_set
	|| hosttopngrantedsize.is_set
	|| hosttopnstarttime.is_set
	|| hosttopnowner.is_set
	|| hosttopnstatus.is_set;
}

bool RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hosttopncontrolindex.yfilter)
	|| ydk::is_set(hosttopnhostindex.yfilter)
	|| ydk::is_set(hosttopnratebase.yfilter)
	|| ydk::is_set(hosttopntimeremaining.yfilter)
	|| ydk::is_set(hosttopnduration.yfilter)
	|| ydk::is_set(hosttopnrequestedsize.yfilter)
	|| ydk::is_set(hosttopngrantedsize.yfilter)
	|| ydk::is_set(hosttopnstarttime.yfilter)
	|| ydk::is_set(hosttopnowner.yfilter)
	|| ydk::is_set(hosttopnstatus.yfilter);
}

std::string RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlEntry" <<"[hostTopNControlIndex='" <<hosttopncontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttopncontrolindex.is_set || is_set(hosttopncontrolindex.yfilter)) leaf_name_data.push_back(hosttopncontrolindex.get_name_leafdata());
    if (hosttopnhostindex.is_set || is_set(hosttopnhostindex.yfilter)) leaf_name_data.push_back(hosttopnhostindex.get_name_leafdata());
    if (hosttopnratebase.is_set || is_set(hosttopnratebase.yfilter)) leaf_name_data.push_back(hosttopnratebase.get_name_leafdata());
    if (hosttopntimeremaining.is_set || is_set(hosttopntimeremaining.yfilter)) leaf_name_data.push_back(hosttopntimeremaining.get_name_leafdata());
    if (hosttopnduration.is_set || is_set(hosttopnduration.yfilter)) leaf_name_data.push_back(hosttopnduration.get_name_leafdata());
    if (hosttopnrequestedsize.is_set || is_set(hosttopnrequestedsize.yfilter)) leaf_name_data.push_back(hosttopnrequestedsize.get_name_leafdata());
    if (hosttopngrantedsize.is_set || is_set(hosttopngrantedsize.yfilter)) leaf_name_data.push_back(hosttopngrantedsize.get_name_leafdata());
    if (hosttopnstarttime.is_set || is_set(hosttopnstarttime.yfilter)) leaf_name_data.push_back(hosttopnstarttime.get_name_leafdata());
    if (hosttopnowner.is_set || is_set(hosttopnowner.yfilter)) leaf_name_data.push_back(hosttopnowner.get_name_leafdata());
    if (hosttopnstatus.is_set || is_set(hosttopnstatus.yfilter)) leaf_name_data.push_back(hosttopnstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostTopNControlIndex")
    {
        hosttopncontrolindex = value;
        hosttopncontrolindex.value_namespace = name_space;
        hosttopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNHostIndex")
    {
        hosttopnhostindex = value;
        hosttopnhostindex.value_namespace = name_space;
        hosttopnhostindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNRateBase")
    {
        hosttopnratebase = value;
        hosttopnratebase.value_namespace = name_space;
        hosttopnratebase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNTimeRemaining")
    {
        hosttopntimeremaining = value;
        hosttopntimeremaining.value_namespace = name_space;
        hosttopntimeremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNDuration")
    {
        hosttopnduration = value;
        hosttopnduration.value_namespace = name_space;
        hosttopnduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNRequestedSize")
    {
        hosttopnrequestedsize = value;
        hosttopnrequestedsize.value_namespace = name_space;
        hosttopnrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNGrantedSize")
    {
        hosttopngrantedsize = value;
        hosttopngrantedsize.value_namespace = name_space;
        hosttopngrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNStartTime")
    {
        hosttopnstarttime = value;
        hosttopnstarttime.value_namespace = name_space;
        hosttopnstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNOwner")
    {
        hosttopnowner = value;
        hosttopnowner.value_namespace = name_space;
        hosttopnowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNStatus")
    {
        hosttopnstatus = value;
        hosttopnstatus.value_namespace = name_space;
        hosttopnstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostTopNControlIndex")
    {
        hosttopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "hostTopNHostIndex")
    {
        hosttopnhostindex.yfilter = yfilter;
    }
    if(value_path == "hostTopNRateBase")
    {
        hosttopnratebase.yfilter = yfilter;
    }
    if(value_path == "hostTopNTimeRemaining")
    {
        hosttopntimeremaining.yfilter = yfilter;
    }
    if(value_path == "hostTopNDuration")
    {
        hosttopnduration.yfilter = yfilter;
    }
    if(value_path == "hostTopNRequestedSize")
    {
        hosttopnrequestedsize.yfilter = yfilter;
    }
    if(value_path == "hostTopNGrantedSize")
    {
        hosttopngrantedsize.yfilter = yfilter;
    }
    if(value_path == "hostTopNStartTime")
    {
        hosttopnstarttime.yfilter = yfilter;
    }
    if(value_path == "hostTopNOwner")
    {
        hosttopnowner.yfilter = yfilter;
    }
    if(value_path == "hostTopNStatus")
    {
        hosttopnstatus.yfilter = yfilter;
    }
}

bool RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNControlIndex" || name == "hostTopNHostIndex" || name == "hostTopNRateBase" || name == "hostTopNTimeRemaining" || name == "hostTopNDuration" || name == "hostTopNRequestedSize" || name == "hostTopNGrantedSize" || name == "hostTopNStartTime" || name == "hostTopNOwner" || name == "hostTopNStatus")
        return true;
    return false;
}

RMONMIB::Hosttopntable::Hosttopntable()
{

    yang_name = "hostTopNTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttopntable::~Hosttopntable()
{
}

bool RMONMIB::Hosttopntable::has_data() const
{
    for (std::size_t index=0; index<hosttopnentry.size(); index++)
    {
        if(hosttopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Hosttopntable::has_operation() const
{
    for (std::size_t index=0; index<hosttopnentry.size(); index++)
    {
        if(hosttopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Hosttopntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttopntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttopntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttopntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Hosttopntable::Hosttopnentry>();
        c->parent = this;
        hosttopnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttopntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hosttopnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Hosttopntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Hosttopntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Hosttopntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNEntry")
        return true;
    return false;
}

RMONMIB::Hosttopntable::Hosttopnentry::Hosttopnentry()
    :
    hosttopnreport{YType::int32, "hostTopNReport"},
    hosttopnindex{YType::int32, "hostTopNIndex"},
    hosttopnaddress{YType::str, "hostTopNAddress"},
    hosttopnrate{YType::int32, "hostTopNRate"}
{

    yang_name = "hostTopNEntry"; yang_parent_name = "hostTopNTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Hosttopntable::Hosttopnentry::~Hosttopnentry()
{
}

bool RMONMIB::Hosttopntable::Hosttopnentry::has_data() const
{
    return hosttopnreport.is_set
	|| hosttopnindex.is_set
	|| hosttopnaddress.is_set
	|| hosttopnrate.is_set;
}

bool RMONMIB::Hosttopntable::Hosttopnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hosttopnreport.yfilter)
	|| ydk::is_set(hosttopnindex.yfilter)
	|| ydk::is_set(hosttopnaddress.yfilter)
	|| ydk::is_set(hosttopnrate.yfilter);
}

std::string RMONMIB::Hosttopntable::Hosttopnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Hosttopntable::Hosttopnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNEntry" <<"[hostTopNReport='" <<hosttopnreport <<"']" <<"[hostTopNIndex='" <<hosttopnindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Hosttopntable::Hosttopnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttopnreport.is_set || is_set(hosttopnreport.yfilter)) leaf_name_data.push_back(hosttopnreport.get_name_leafdata());
    if (hosttopnindex.is_set || is_set(hosttopnindex.yfilter)) leaf_name_data.push_back(hosttopnindex.get_name_leafdata());
    if (hosttopnaddress.is_set || is_set(hosttopnaddress.yfilter)) leaf_name_data.push_back(hosttopnaddress.get_name_leafdata());
    if (hosttopnrate.is_set || is_set(hosttopnrate.yfilter)) leaf_name_data.push_back(hosttopnrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Hosttopntable::Hosttopnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Hosttopntable::Hosttopnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Hosttopntable::Hosttopnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostTopNReport")
    {
        hosttopnreport = value;
        hosttopnreport.value_namespace = name_space;
        hosttopnreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNIndex")
    {
        hosttopnindex = value;
        hosttopnindex.value_namespace = name_space;
        hosttopnindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNAddress")
    {
        hosttopnaddress = value;
        hosttopnaddress.value_namespace = name_space;
        hosttopnaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostTopNRate")
    {
        hosttopnrate = value;
        hosttopnrate.value_namespace = name_space;
        hosttopnrate.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Hosttopntable::Hosttopnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostTopNReport")
    {
        hosttopnreport.yfilter = yfilter;
    }
    if(value_path == "hostTopNIndex")
    {
        hosttopnindex.yfilter = yfilter;
    }
    if(value_path == "hostTopNAddress")
    {
        hosttopnaddress.yfilter = yfilter;
    }
    if(value_path == "hostTopNRate")
    {
        hosttopnrate.yfilter = yfilter;
    }
}

bool RMONMIB::Hosttopntable::Hosttopnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNReport" || name == "hostTopNIndex" || name == "hostTopNAddress" || name == "hostTopNRate")
        return true;
    return false;
}

RMONMIB::Matrixcontroltable::Matrixcontroltable()
{

    yang_name = "matrixControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixcontroltable::~Matrixcontroltable()
{
}

bool RMONMIB::Matrixcontroltable::has_data() const
{
    for (std::size_t index=0; index<matrixcontrolentry.size(); index++)
    {
        if(matrixcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Matrixcontroltable::has_operation() const
{
    for (std::size_t index=0; index<matrixcontrolentry.size(); index++)
    {
        if(matrixcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Matrixcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Matrixcontroltable::Matrixcontrolentry>();
        c->parent = this;
        matrixcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Matrixcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Matrixcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Matrixcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixControlEntry")
        return true;
    return false;
}

RMONMIB::Matrixcontroltable::Matrixcontrolentry::Matrixcontrolentry()
    :
    matrixcontrolindex{YType::int32, "matrixControlIndex"},
    matrixcontroldatasource{YType::str, "matrixControlDataSource"},
    matrixcontroltablesize{YType::int32, "matrixControlTableSize"},
    matrixcontrollastdeletetime{YType::uint32, "matrixControlLastDeleteTime"},
    matrixcontrolowner{YType::str, "matrixControlOwner"},
    matrixcontrolstatus{YType::enumeration, "matrixControlStatus"},
    matrixcontroldroppedframes{YType::uint32, "RMON2-MIB:matrixControlDroppedFrames"},
    matrixcontrolcreatetime{YType::uint32, "RMON2-MIB:matrixControlCreateTime"}
{

    yang_name = "matrixControlEntry"; yang_parent_name = "matrixControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixcontroltable::Matrixcontrolentry::~Matrixcontrolentry()
{
}

bool RMONMIB::Matrixcontroltable::Matrixcontrolentry::has_data() const
{
    return matrixcontrolindex.is_set
	|| matrixcontroldatasource.is_set
	|| matrixcontroltablesize.is_set
	|| matrixcontrollastdeletetime.is_set
	|| matrixcontrolowner.is_set
	|| matrixcontrolstatus.is_set
	|| matrixcontroldroppedframes.is_set
	|| matrixcontrolcreatetime.is_set;
}

bool RMONMIB::Matrixcontroltable::Matrixcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matrixcontrolindex.yfilter)
	|| ydk::is_set(matrixcontroldatasource.yfilter)
	|| ydk::is_set(matrixcontroltablesize.yfilter)
	|| ydk::is_set(matrixcontrollastdeletetime.yfilter)
	|| ydk::is_set(matrixcontrolowner.yfilter)
	|| ydk::is_set(matrixcontrolstatus.yfilter)
	|| ydk::is_set(matrixcontroldroppedframes.yfilter)
	|| ydk::is_set(matrixcontrolcreatetime.yfilter);
}

std::string RMONMIB::Matrixcontroltable::Matrixcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixcontroltable::Matrixcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlEntry" <<"[matrixControlIndex='" <<matrixcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixcontroltable::Matrixcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixcontrolindex.is_set || is_set(matrixcontrolindex.yfilter)) leaf_name_data.push_back(matrixcontrolindex.get_name_leafdata());
    if (matrixcontroldatasource.is_set || is_set(matrixcontroldatasource.yfilter)) leaf_name_data.push_back(matrixcontroldatasource.get_name_leafdata());
    if (matrixcontroltablesize.is_set || is_set(matrixcontroltablesize.yfilter)) leaf_name_data.push_back(matrixcontroltablesize.get_name_leafdata());
    if (matrixcontrollastdeletetime.is_set || is_set(matrixcontrollastdeletetime.yfilter)) leaf_name_data.push_back(matrixcontrollastdeletetime.get_name_leafdata());
    if (matrixcontrolowner.is_set || is_set(matrixcontrolowner.yfilter)) leaf_name_data.push_back(matrixcontrolowner.get_name_leafdata());
    if (matrixcontrolstatus.is_set || is_set(matrixcontrolstatus.yfilter)) leaf_name_data.push_back(matrixcontrolstatus.get_name_leafdata());
    if (matrixcontroldroppedframes.is_set || is_set(matrixcontroldroppedframes.yfilter)) leaf_name_data.push_back(matrixcontroldroppedframes.get_name_leafdata());
    if (matrixcontrolcreatetime.is_set || is_set(matrixcontrolcreatetime.yfilter)) leaf_name_data.push_back(matrixcontrolcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixcontroltable::Matrixcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixcontroltable::Matrixcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Matrixcontroltable::Matrixcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matrixControlIndex")
    {
        matrixcontrolindex = value;
        matrixcontrolindex.value_namespace = name_space;
        matrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixControlDataSource")
    {
        matrixcontroldatasource = value;
        matrixcontroldatasource.value_namespace = name_space;
        matrixcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixControlTableSize")
    {
        matrixcontroltablesize = value;
        matrixcontroltablesize.value_namespace = name_space;
        matrixcontroltablesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixControlLastDeleteTime")
    {
        matrixcontrollastdeletetime = value;
        matrixcontrollastdeletetime.value_namespace = name_space;
        matrixcontrollastdeletetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixControlOwner")
    {
        matrixcontrolowner = value;
        matrixcontrolowner.value_namespace = name_space;
        matrixcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixControlStatus")
    {
        matrixcontrolstatus = value;
        matrixcontrolstatus.value_namespace = name_space;
        matrixcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:matrixControlDroppedFrames")
    {
        matrixcontroldroppedframes = value;
        matrixcontroldroppedframes.value_namespace = name_space;
        matrixcontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:matrixControlCreateTime")
    {
        matrixcontrolcreatetime = value;
        matrixcontrolcreatetime.value_namespace = name_space;
        matrixcontrolcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Matrixcontroltable::Matrixcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matrixControlIndex")
    {
        matrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "matrixControlDataSource")
    {
        matrixcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "matrixControlTableSize")
    {
        matrixcontroltablesize.yfilter = yfilter;
    }
    if(value_path == "matrixControlLastDeleteTime")
    {
        matrixcontrollastdeletetime.yfilter = yfilter;
    }
    if(value_path == "matrixControlOwner")
    {
        matrixcontrolowner.yfilter = yfilter;
    }
    if(value_path == "matrixControlStatus")
    {
        matrixcontrolstatus.yfilter = yfilter;
    }
    if(value_path == "matrixControlDroppedFrames")
    {
        matrixcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "matrixControlCreateTime")
    {
        matrixcontrolcreatetime.yfilter = yfilter;
    }
}

bool RMONMIB::Matrixcontroltable::Matrixcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixControlIndex" || name == "matrixControlDataSource" || name == "matrixControlTableSize" || name == "matrixControlLastDeleteTime" || name == "matrixControlOwner" || name == "matrixControlStatus" || name == "matrixControlDroppedFrames" || name == "matrixControlCreateTime")
        return true;
    return false;
}

RMONMIB::Matrixsdtable::Matrixsdtable()
{

    yang_name = "matrixSDTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixsdtable::~Matrixsdtable()
{
}

bool RMONMIB::Matrixsdtable::has_data() const
{
    for (std::size_t index=0; index<matrixsdentry.size(); index++)
    {
        if(matrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Matrixsdtable::has_operation() const
{
    for (std::size_t index=0; index<matrixsdentry.size(); index++)
    {
        if(matrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Matrixsdtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixsdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixsdtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixsdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Matrixsdtable::Matrixsdentry>();
        c->parent = this;
        matrixsdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixsdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixsdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Matrixsdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Matrixsdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Matrixsdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixSDEntry")
        return true;
    return false;
}

RMONMIB::Matrixsdtable::Matrixsdentry::Matrixsdentry()
    :
    matrixsdindex{YType::int32, "matrixSDIndex"},
    matrixsdsourceaddress{YType::str, "matrixSDSourceAddress"},
    matrixsddestaddress{YType::str, "matrixSDDestAddress"},
    matrixsdpkts{YType::uint32, "matrixSDPkts"},
    matrixsdoctets{YType::uint32, "matrixSDOctets"},
    matrixsderrors{YType::uint32, "matrixSDErrors"}
{

    yang_name = "matrixSDEntry"; yang_parent_name = "matrixSDTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixsdtable::Matrixsdentry::~Matrixsdentry()
{
}

bool RMONMIB::Matrixsdtable::Matrixsdentry::has_data() const
{
    return matrixsdindex.is_set
	|| matrixsdsourceaddress.is_set
	|| matrixsddestaddress.is_set
	|| matrixsdpkts.is_set
	|| matrixsdoctets.is_set
	|| matrixsderrors.is_set;
}

bool RMONMIB::Matrixsdtable::Matrixsdentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matrixsdindex.yfilter)
	|| ydk::is_set(matrixsdsourceaddress.yfilter)
	|| ydk::is_set(matrixsddestaddress.yfilter)
	|| ydk::is_set(matrixsdpkts.yfilter)
	|| ydk::is_set(matrixsdoctets.yfilter)
	|| ydk::is_set(matrixsderrors.yfilter);
}

std::string RMONMIB::Matrixsdtable::Matrixsdentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixsdtable::Matrixsdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDEntry" <<"[matrixSDIndex='" <<matrixsdindex <<"']" <<"[matrixSDSourceAddress='" <<matrixsdsourceaddress <<"']" <<"[matrixSDDestAddress='" <<matrixsddestaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixsdtable::Matrixsdentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixsdindex.is_set || is_set(matrixsdindex.yfilter)) leaf_name_data.push_back(matrixsdindex.get_name_leafdata());
    if (matrixsdsourceaddress.is_set || is_set(matrixsdsourceaddress.yfilter)) leaf_name_data.push_back(matrixsdsourceaddress.get_name_leafdata());
    if (matrixsddestaddress.is_set || is_set(matrixsddestaddress.yfilter)) leaf_name_data.push_back(matrixsddestaddress.get_name_leafdata());
    if (matrixsdpkts.is_set || is_set(matrixsdpkts.yfilter)) leaf_name_data.push_back(matrixsdpkts.get_name_leafdata());
    if (matrixsdoctets.is_set || is_set(matrixsdoctets.yfilter)) leaf_name_data.push_back(matrixsdoctets.get_name_leafdata());
    if (matrixsderrors.is_set || is_set(matrixsderrors.yfilter)) leaf_name_data.push_back(matrixsderrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixsdtable::Matrixsdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixsdtable::Matrixsdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Matrixsdtable::Matrixsdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matrixSDIndex")
    {
        matrixsdindex = value;
        matrixsdindex.value_namespace = name_space;
        matrixsdindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixSDSourceAddress")
    {
        matrixsdsourceaddress = value;
        matrixsdsourceaddress.value_namespace = name_space;
        matrixsdsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixSDDestAddress")
    {
        matrixsddestaddress = value;
        matrixsddestaddress.value_namespace = name_space;
        matrixsddestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixSDPkts")
    {
        matrixsdpkts = value;
        matrixsdpkts.value_namespace = name_space;
        matrixsdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixSDOctets")
    {
        matrixsdoctets = value;
        matrixsdoctets.value_namespace = name_space;
        matrixsdoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixSDErrors")
    {
        matrixsderrors = value;
        matrixsderrors.value_namespace = name_space;
        matrixsderrors.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Matrixsdtable::Matrixsdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matrixSDIndex")
    {
        matrixsdindex.yfilter = yfilter;
    }
    if(value_path == "matrixSDSourceAddress")
    {
        matrixsdsourceaddress.yfilter = yfilter;
    }
    if(value_path == "matrixSDDestAddress")
    {
        matrixsddestaddress.yfilter = yfilter;
    }
    if(value_path == "matrixSDPkts")
    {
        matrixsdpkts.yfilter = yfilter;
    }
    if(value_path == "matrixSDOctets")
    {
        matrixsdoctets.yfilter = yfilter;
    }
    if(value_path == "matrixSDErrors")
    {
        matrixsderrors.yfilter = yfilter;
    }
}

bool RMONMIB::Matrixsdtable::Matrixsdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixSDIndex" || name == "matrixSDSourceAddress" || name == "matrixSDDestAddress" || name == "matrixSDPkts" || name == "matrixSDOctets" || name == "matrixSDErrors")
        return true;
    return false;
}

RMONMIB::Matrixdstable::Matrixdstable()
{

    yang_name = "matrixDSTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixdstable::~Matrixdstable()
{
}

bool RMONMIB::Matrixdstable::has_data() const
{
    for (std::size_t index=0; index<matrixdsentry.size(); index++)
    {
        if(matrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Matrixdstable::has_operation() const
{
    for (std::size_t index=0; index<matrixdsentry.size(); index++)
    {
        if(matrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Matrixdstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixdstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Matrixdstable::Matrixdsentry>();
        c->parent = this;
        matrixdsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : matrixdsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Matrixdstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Matrixdstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Matrixdstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixDSEntry")
        return true;
    return false;
}

RMONMIB::Matrixdstable::Matrixdsentry::Matrixdsentry()
    :
    matrixdsindex{YType::int32, "matrixDSIndex"},
    matrixdsdestaddress{YType::str, "matrixDSDestAddress"},
    matrixdssourceaddress{YType::str, "matrixDSSourceAddress"},
    matrixdspkts{YType::uint32, "matrixDSPkts"},
    matrixdsoctets{YType::uint32, "matrixDSOctets"},
    matrixdserrors{YType::uint32, "matrixDSErrors"}
{

    yang_name = "matrixDSEntry"; yang_parent_name = "matrixDSTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Matrixdstable::Matrixdsentry::~Matrixdsentry()
{
}

bool RMONMIB::Matrixdstable::Matrixdsentry::has_data() const
{
    return matrixdsindex.is_set
	|| matrixdsdestaddress.is_set
	|| matrixdssourceaddress.is_set
	|| matrixdspkts.is_set
	|| matrixdsoctets.is_set
	|| matrixdserrors.is_set;
}

bool RMONMIB::Matrixdstable::Matrixdsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matrixdsindex.yfilter)
	|| ydk::is_set(matrixdsdestaddress.yfilter)
	|| ydk::is_set(matrixdssourceaddress.yfilter)
	|| ydk::is_set(matrixdspkts.yfilter)
	|| ydk::is_set(matrixdsoctets.yfilter)
	|| ydk::is_set(matrixdserrors.yfilter);
}

std::string RMONMIB::Matrixdstable::Matrixdsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Matrixdstable::Matrixdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSEntry" <<"[matrixDSIndex='" <<matrixdsindex <<"']" <<"[matrixDSDestAddress='" <<matrixdsdestaddress <<"']" <<"[matrixDSSourceAddress='" <<matrixdssourceaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Matrixdstable::Matrixdsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matrixdsindex.is_set || is_set(matrixdsindex.yfilter)) leaf_name_data.push_back(matrixdsindex.get_name_leafdata());
    if (matrixdsdestaddress.is_set || is_set(matrixdsdestaddress.yfilter)) leaf_name_data.push_back(matrixdsdestaddress.get_name_leafdata());
    if (matrixdssourceaddress.is_set || is_set(matrixdssourceaddress.yfilter)) leaf_name_data.push_back(matrixdssourceaddress.get_name_leafdata());
    if (matrixdspkts.is_set || is_set(matrixdspkts.yfilter)) leaf_name_data.push_back(matrixdspkts.get_name_leafdata());
    if (matrixdsoctets.is_set || is_set(matrixdsoctets.yfilter)) leaf_name_data.push_back(matrixdsoctets.get_name_leafdata());
    if (matrixdserrors.is_set || is_set(matrixdserrors.yfilter)) leaf_name_data.push_back(matrixdserrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Matrixdstable::Matrixdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Matrixdstable::Matrixdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Matrixdstable::Matrixdsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matrixDSIndex")
    {
        matrixdsindex = value;
        matrixdsindex.value_namespace = name_space;
        matrixdsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixDSDestAddress")
    {
        matrixdsdestaddress = value;
        matrixdsdestaddress.value_namespace = name_space;
        matrixdsdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixDSSourceAddress")
    {
        matrixdssourceaddress = value;
        matrixdssourceaddress.value_namespace = name_space;
        matrixdssourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixDSPkts")
    {
        matrixdspkts = value;
        matrixdspkts.value_namespace = name_space;
        matrixdspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixDSOctets")
    {
        matrixdsoctets = value;
        matrixdsoctets.value_namespace = name_space;
        matrixdsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matrixDSErrors")
    {
        matrixdserrors = value;
        matrixdserrors.value_namespace = name_space;
        matrixdserrors.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Matrixdstable::Matrixdsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matrixDSIndex")
    {
        matrixdsindex.yfilter = yfilter;
    }
    if(value_path == "matrixDSDestAddress")
    {
        matrixdsdestaddress.yfilter = yfilter;
    }
    if(value_path == "matrixDSSourceAddress")
    {
        matrixdssourceaddress.yfilter = yfilter;
    }
    if(value_path == "matrixDSPkts")
    {
        matrixdspkts.yfilter = yfilter;
    }
    if(value_path == "matrixDSOctets")
    {
        matrixdsoctets.yfilter = yfilter;
    }
    if(value_path == "matrixDSErrors")
    {
        matrixdserrors.yfilter = yfilter;
    }
}

bool RMONMIB::Matrixdstable::Matrixdsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixDSIndex" || name == "matrixDSDestAddress" || name == "matrixDSSourceAddress" || name == "matrixDSPkts" || name == "matrixDSOctets" || name == "matrixDSErrors")
        return true;
    return false;
}

RMONMIB::Filtertable::Filtertable()
{

    yang_name = "filterTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Filtertable::~Filtertable()
{
}

bool RMONMIB::Filtertable::has_data() const
{
    for (std::size_t index=0; index<filterentry.size(); index++)
    {
        if(filterentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Filtertable::has_operation() const
{
    for (std::size_t index=0; index<filterentry.size(); index++)
    {
        if(filterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Filtertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Filtertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Filtertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Filtertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Filtertable::Filterentry>();
        c->parent = this;
        filterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Filtertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Filtertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Filtertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Filtertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filterEntry")
        return true;
    return false;
}

RMONMIB::Filtertable::Filterentry::Filterentry()
    :
    filterindex{YType::int32, "filterIndex"},
    filterchannelindex{YType::int32, "filterChannelIndex"},
    filterpktdataoffset{YType::int32, "filterPktDataOffset"},
    filterpktdata{YType::str, "filterPktData"},
    filterpktdatamask{YType::str, "filterPktDataMask"},
    filterpktdatanotmask{YType::str, "filterPktDataNotMask"},
    filterpktstatus{YType::int32, "filterPktStatus"},
    filterpktstatusmask{YType::int32, "filterPktStatusMask"},
    filterpktstatusnotmask{YType::int32, "filterPktStatusNotMask"},
    filterowner{YType::str, "filterOwner"},
    filterstatus{YType::enumeration, "filterStatus"},
    filterprotocoldirdatalocalindex{YType::int32, "RMON2-MIB:filterProtocolDirDataLocalIndex"},
    filterprotocoldirlocalindex{YType::int32, "RMON2-MIB:filterProtocolDirLocalIndex"}
{

    yang_name = "filterEntry"; yang_parent_name = "filterTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Filtertable::Filterentry::~Filterentry()
{
}

bool RMONMIB::Filtertable::Filterentry::has_data() const
{
    return filterindex.is_set
	|| filterchannelindex.is_set
	|| filterpktdataoffset.is_set
	|| filterpktdata.is_set
	|| filterpktdatamask.is_set
	|| filterpktdatanotmask.is_set
	|| filterpktstatus.is_set
	|| filterpktstatusmask.is_set
	|| filterpktstatusnotmask.is_set
	|| filterowner.is_set
	|| filterstatus.is_set
	|| filterprotocoldirdatalocalindex.is_set
	|| filterprotocoldirlocalindex.is_set;
}

bool RMONMIB::Filtertable::Filterentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filterindex.yfilter)
	|| ydk::is_set(filterchannelindex.yfilter)
	|| ydk::is_set(filterpktdataoffset.yfilter)
	|| ydk::is_set(filterpktdata.yfilter)
	|| ydk::is_set(filterpktdatamask.yfilter)
	|| ydk::is_set(filterpktdatanotmask.yfilter)
	|| ydk::is_set(filterpktstatus.yfilter)
	|| ydk::is_set(filterpktstatusmask.yfilter)
	|| ydk::is_set(filterpktstatusnotmask.yfilter)
	|| ydk::is_set(filterowner.yfilter)
	|| ydk::is_set(filterstatus.yfilter)
	|| ydk::is_set(filterprotocoldirdatalocalindex.yfilter)
	|| ydk::is_set(filterprotocoldirlocalindex.yfilter);
}

std::string RMONMIB::Filtertable::Filterentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/filterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Filtertable::Filterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterEntry" <<"[filterIndex='" <<filterindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Filtertable::Filterentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filterindex.is_set || is_set(filterindex.yfilter)) leaf_name_data.push_back(filterindex.get_name_leafdata());
    if (filterchannelindex.is_set || is_set(filterchannelindex.yfilter)) leaf_name_data.push_back(filterchannelindex.get_name_leafdata());
    if (filterpktdataoffset.is_set || is_set(filterpktdataoffset.yfilter)) leaf_name_data.push_back(filterpktdataoffset.get_name_leafdata());
    if (filterpktdata.is_set || is_set(filterpktdata.yfilter)) leaf_name_data.push_back(filterpktdata.get_name_leafdata());
    if (filterpktdatamask.is_set || is_set(filterpktdatamask.yfilter)) leaf_name_data.push_back(filterpktdatamask.get_name_leafdata());
    if (filterpktdatanotmask.is_set || is_set(filterpktdatanotmask.yfilter)) leaf_name_data.push_back(filterpktdatanotmask.get_name_leafdata());
    if (filterpktstatus.is_set || is_set(filterpktstatus.yfilter)) leaf_name_data.push_back(filterpktstatus.get_name_leafdata());
    if (filterpktstatusmask.is_set || is_set(filterpktstatusmask.yfilter)) leaf_name_data.push_back(filterpktstatusmask.get_name_leafdata());
    if (filterpktstatusnotmask.is_set || is_set(filterpktstatusnotmask.yfilter)) leaf_name_data.push_back(filterpktstatusnotmask.get_name_leafdata());
    if (filterowner.is_set || is_set(filterowner.yfilter)) leaf_name_data.push_back(filterowner.get_name_leafdata());
    if (filterstatus.is_set || is_set(filterstatus.yfilter)) leaf_name_data.push_back(filterstatus.get_name_leafdata());
    if (filterprotocoldirdatalocalindex.is_set || is_set(filterprotocoldirdatalocalindex.yfilter)) leaf_name_data.push_back(filterprotocoldirdatalocalindex.get_name_leafdata());
    if (filterprotocoldirlocalindex.is_set || is_set(filterprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(filterprotocoldirlocalindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Filtertable::Filterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Filtertable::Filterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Filtertable::Filterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filterIndex")
    {
        filterindex = value;
        filterindex.value_namespace = name_space;
        filterindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterChannelIndex")
    {
        filterchannelindex = value;
        filterchannelindex.value_namespace = name_space;
        filterchannelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktDataOffset")
    {
        filterpktdataoffset = value;
        filterpktdataoffset.value_namespace = name_space;
        filterpktdataoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktData")
    {
        filterpktdata = value;
        filterpktdata.value_namespace = name_space;
        filterpktdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktDataMask")
    {
        filterpktdatamask = value;
        filterpktdatamask.value_namespace = name_space;
        filterpktdatamask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktDataNotMask")
    {
        filterpktdatanotmask = value;
        filterpktdatanotmask.value_namespace = name_space;
        filterpktdatanotmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktStatus")
    {
        filterpktstatus = value;
        filterpktstatus.value_namespace = name_space;
        filterpktstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktStatusMask")
    {
        filterpktstatusmask = value;
        filterpktstatusmask.value_namespace = name_space;
        filterpktstatusmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterPktStatusNotMask")
    {
        filterpktstatusnotmask = value;
        filterpktstatusnotmask.value_namespace = name_space;
        filterpktstatusnotmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterOwner")
    {
        filterowner = value;
        filterowner.value_namespace = name_space;
        filterowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterStatus")
    {
        filterstatus = value;
        filterstatus.value_namespace = name_space;
        filterstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:filterProtocolDirDataLocalIndex")
    {
        filterprotocoldirdatalocalindex = value;
        filterprotocoldirdatalocalindex.value_namespace = name_space;
        filterprotocoldirdatalocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:filterProtocolDirLocalIndex")
    {
        filterprotocoldirlocalindex = value;
        filterprotocoldirlocalindex.value_namespace = name_space;
        filterprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Filtertable::Filterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filterIndex")
    {
        filterindex.yfilter = yfilter;
    }
    if(value_path == "filterChannelIndex")
    {
        filterchannelindex.yfilter = yfilter;
    }
    if(value_path == "filterPktDataOffset")
    {
        filterpktdataoffset.yfilter = yfilter;
    }
    if(value_path == "filterPktData")
    {
        filterpktdata.yfilter = yfilter;
    }
    if(value_path == "filterPktDataMask")
    {
        filterpktdatamask.yfilter = yfilter;
    }
    if(value_path == "filterPktDataNotMask")
    {
        filterpktdatanotmask.yfilter = yfilter;
    }
    if(value_path == "filterPktStatus")
    {
        filterpktstatus.yfilter = yfilter;
    }
    if(value_path == "filterPktStatusMask")
    {
        filterpktstatusmask.yfilter = yfilter;
    }
    if(value_path == "filterPktStatusNotMask")
    {
        filterpktstatusnotmask.yfilter = yfilter;
    }
    if(value_path == "filterOwner")
    {
        filterowner.yfilter = yfilter;
    }
    if(value_path == "filterStatus")
    {
        filterstatus.yfilter = yfilter;
    }
    if(value_path == "filterProtocolDirDataLocalIndex")
    {
        filterprotocoldirdatalocalindex.yfilter = yfilter;
    }
    if(value_path == "filterProtocolDirLocalIndex")
    {
        filterprotocoldirlocalindex.yfilter = yfilter;
    }
}

bool RMONMIB::Filtertable::Filterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filterIndex" || name == "filterChannelIndex" || name == "filterPktDataOffset" || name == "filterPktData" || name == "filterPktDataMask" || name == "filterPktDataNotMask" || name == "filterPktStatus" || name == "filterPktStatusMask" || name == "filterPktStatusNotMask" || name == "filterOwner" || name == "filterStatus" || name == "filterProtocolDirDataLocalIndex" || name == "filterProtocolDirLocalIndex")
        return true;
    return false;
}

RMONMIB::Channeltable::Channeltable()
{

    yang_name = "channelTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Channeltable::~Channeltable()
{
}

bool RMONMIB::Channeltable::has_data() const
{
    for (std::size_t index=0; index<channelentry.size(); index++)
    {
        if(channelentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Channeltable::has_operation() const
{
    for (std::size_t index=0; index<channelentry.size(); index++)
    {
        if(channelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Channeltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Channeltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Channeltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Channeltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Channeltable::Channelentry>();
        c->parent = this;
        channelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Channeltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : channelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Channeltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Channeltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Channeltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channelEntry")
        return true;
    return false;
}

RMONMIB::Channeltable::Channelentry::Channelentry()
    :
    channelindex{YType::int32, "channelIndex"},
    channelifindex{YType::int32, "channelIfIndex"},
    channelaccepttype{YType::enumeration, "channelAcceptType"},
    channeldatacontrol{YType::enumeration, "channelDataControl"},
    channelturnoneventindex{YType::int32, "channelTurnOnEventIndex"},
    channelturnoffeventindex{YType::int32, "channelTurnOffEventIndex"},
    channeleventindex{YType::int32, "channelEventIndex"},
    channeleventstatus{YType::enumeration, "channelEventStatus"},
    channelmatches{YType::uint32, "channelMatches"},
    channeldescription{YType::str, "channelDescription"},
    channelowner{YType::str, "channelOwner"},
    channelstatus{YType::enumeration, "channelStatus"},
    channeldroppedframes{YType::uint32, "RMON2-MIB:channelDroppedFrames"},
    channelcreatetime{YType::uint32, "RMON2-MIB:channelCreateTime"}
{

    yang_name = "channelEntry"; yang_parent_name = "channelTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Channeltable::Channelentry::~Channelentry()
{
}

bool RMONMIB::Channeltable::Channelentry::has_data() const
{
    return channelindex.is_set
	|| channelifindex.is_set
	|| channelaccepttype.is_set
	|| channeldatacontrol.is_set
	|| channelturnoneventindex.is_set
	|| channelturnoffeventindex.is_set
	|| channeleventindex.is_set
	|| channeleventstatus.is_set
	|| channelmatches.is_set
	|| channeldescription.is_set
	|| channelowner.is_set
	|| channelstatus.is_set
	|| channeldroppedframes.is_set
	|| channelcreatetime.is_set;
}

bool RMONMIB::Channeltable::Channelentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channelindex.yfilter)
	|| ydk::is_set(channelifindex.yfilter)
	|| ydk::is_set(channelaccepttype.yfilter)
	|| ydk::is_set(channeldatacontrol.yfilter)
	|| ydk::is_set(channelturnoneventindex.yfilter)
	|| ydk::is_set(channelturnoffeventindex.yfilter)
	|| ydk::is_set(channeleventindex.yfilter)
	|| ydk::is_set(channeleventstatus.yfilter)
	|| ydk::is_set(channelmatches.yfilter)
	|| ydk::is_set(channeldescription.yfilter)
	|| ydk::is_set(channelowner.yfilter)
	|| ydk::is_set(channelstatus.yfilter)
	|| ydk::is_set(channeldroppedframes.yfilter)
	|| ydk::is_set(channelcreatetime.yfilter);
}

std::string RMONMIB::Channeltable::Channelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/channelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Channeltable::Channelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelEntry" <<"[channelIndex='" <<channelindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Channeltable::Channelentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channelindex.is_set || is_set(channelindex.yfilter)) leaf_name_data.push_back(channelindex.get_name_leafdata());
    if (channelifindex.is_set || is_set(channelifindex.yfilter)) leaf_name_data.push_back(channelifindex.get_name_leafdata());
    if (channelaccepttype.is_set || is_set(channelaccepttype.yfilter)) leaf_name_data.push_back(channelaccepttype.get_name_leafdata());
    if (channeldatacontrol.is_set || is_set(channeldatacontrol.yfilter)) leaf_name_data.push_back(channeldatacontrol.get_name_leafdata());
    if (channelturnoneventindex.is_set || is_set(channelturnoneventindex.yfilter)) leaf_name_data.push_back(channelturnoneventindex.get_name_leafdata());
    if (channelturnoffeventindex.is_set || is_set(channelturnoffeventindex.yfilter)) leaf_name_data.push_back(channelturnoffeventindex.get_name_leafdata());
    if (channeleventindex.is_set || is_set(channeleventindex.yfilter)) leaf_name_data.push_back(channeleventindex.get_name_leafdata());
    if (channeleventstatus.is_set || is_set(channeleventstatus.yfilter)) leaf_name_data.push_back(channeleventstatus.get_name_leafdata());
    if (channelmatches.is_set || is_set(channelmatches.yfilter)) leaf_name_data.push_back(channelmatches.get_name_leafdata());
    if (channeldescription.is_set || is_set(channeldescription.yfilter)) leaf_name_data.push_back(channeldescription.get_name_leafdata());
    if (channelowner.is_set || is_set(channelowner.yfilter)) leaf_name_data.push_back(channelowner.get_name_leafdata());
    if (channelstatus.is_set || is_set(channelstatus.yfilter)) leaf_name_data.push_back(channelstatus.get_name_leafdata());
    if (channeldroppedframes.is_set || is_set(channeldroppedframes.yfilter)) leaf_name_data.push_back(channeldroppedframes.get_name_leafdata());
    if (channelcreatetime.is_set || is_set(channelcreatetime.yfilter)) leaf_name_data.push_back(channelcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Channeltable::Channelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Channeltable::Channelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Channeltable::Channelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channelIndex")
    {
        channelindex = value;
        channelindex.value_namespace = name_space;
        channelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelIfIndex")
    {
        channelifindex = value;
        channelifindex.value_namespace = name_space;
        channelifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelAcceptType")
    {
        channelaccepttype = value;
        channelaccepttype.value_namespace = name_space;
        channelaccepttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelDataControl")
    {
        channeldatacontrol = value;
        channeldatacontrol.value_namespace = name_space;
        channeldatacontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelTurnOnEventIndex")
    {
        channelturnoneventindex = value;
        channelturnoneventindex.value_namespace = name_space;
        channelturnoneventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelTurnOffEventIndex")
    {
        channelturnoffeventindex = value;
        channelturnoffeventindex.value_namespace = name_space;
        channelturnoffeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelEventIndex")
    {
        channeleventindex = value;
        channeleventindex.value_namespace = name_space;
        channeleventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelEventStatus")
    {
        channeleventstatus = value;
        channeleventstatus.value_namespace = name_space;
        channeleventstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelMatches")
    {
        channelmatches = value;
        channelmatches.value_namespace = name_space;
        channelmatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelDescription")
    {
        channeldescription = value;
        channeldescription.value_namespace = name_space;
        channeldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelOwner")
    {
        channelowner = value;
        channelowner.value_namespace = name_space;
        channelowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelStatus")
    {
        channelstatus = value;
        channelstatus.value_namespace = name_space;
        channelstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:channelDroppedFrames")
    {
        channeldroppedframes = value;
        channeldroppedframes.value_namespace = name_space;
        channeldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RMON2-MIB:channelCreateTime")
    {
        channelcreatetime = value;
        channelcreatetime.value_namespace = name_space;
        channelcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Channeltable::Channelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channelIndex")
    {
        channelindex.yfilter = yfilter;
    }
    if(value_path == "channelIfIndex")
    {
        channelifindex.yfilter = yfilter;
    }
    if(value_path == "channelAcceptType")
    {
        channelaccepttype.yfilter = yfilter;
    }
    if(value_path == "channelDataControl")
    {
        channeldatacontrol.yfilter = yfilter;
    }
    if(value_path == "channelTurnOnEventIndex")
    {
        channelturnoneventindex.yfilter = yfilter;
    }
    if(value_path == "channelTurnOffEventIndex")
    {
        channelturnoffeventindex.yfilter = yfilter;
    }
    if(value_path == "channelEventIndex")
    {
        channeleventindex.yfilter = yfilter;
    }
    if(value_path == "channelEventStatus")
    {
        channeleventstatus.yfilter = yfilter;
    }
    if(value_path == "channelMatches")
    {
        channelmatches.yfilter = yfilter;
    }
    if(value_path == "channelDescription")
    {
        channeldescription.yfilter = yfilter;
    }
    if(value_path == "channelOwner")
    {
        channelowner.yfilter = yfilter;
    }
    if(value_path == "channelStatus")
    {
        channelstatus.yfilter = yfilter;
    }
    if(value_path == "channelDroppedFrames")
    {
        channeldroppedframes.yfilter = yfilter;
    }
    if(value_path == "channelCreateTime")
    {
        channelcreatetime.yfilter = yfilter;
    }
}

bool RMONMIB::Channeltable::Channelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channelIndex" || name == "channelIfIndex" || name == "channelAcceptType" || name == "channelDataControl" || name == "channelTurnOnEventIndex" || name == "channelTurnOffEventIndex" || name == "channelEventIndex" || name == "channelEventStatus" || name == "channelMatches" || name == "channelDescription" || name == "channelOwner" || name == "channelStatus" || name == "channelDroppedFrames" || name == "channelCreateTime")
        return true;
    return false;
}

RMONMIB::Buffercontroltable::Buffercontroltable()
{

    yang_name = "bufferControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Buffercontroltable::~Buffercontroltable()
{
}

bool RMONMIB::Buffercontroltable::has_data() const
{
    for (std::size_t index=0; index<buffercontrolentry.size(); index++)
    {
        if(buffercontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Buffercontroltable::has_operation() const
{
    for (std::size_t index=0; index<buffercontrolentry.size(); index++)
    {
        if(buffercontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Buffercontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Buffercontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Buffercontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Buffercontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Buffercontroltable::Buffercontrolentry>();
        c->parent = this;
        buffercontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Buffercontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : buffercontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Buffercontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Buffercontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Buffercontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferControlEntry")
        return true;
    return false;
}

RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolentry()
    :
    buffercontrolindex{YType::int32, "bufferControlIndex"},
    buffercontrolchannelindex{YType::int32, "bufferControlChannelIndex"},
    buffercontrolfullstatus{YType::enumeration, "bufferControlFullStatus"},
    buffercontrolfullaction{YType::enumeration, "bufferControlFullAction"},
    buffercontrolcaptureslicesize{YType::int32, "bufferControlCaptureSliceSize"},
    buffercontroldownloadslicesize{YType::int32, "bufferControlDownloadSliceSize"},
    buffercontroldownloadoffset{YType::int32, "bufferControlDownloadOffset"},
    buffercontrolmaxoctetsrequested{YType::int32, "bufferControlMaxOctetsRequested"},
    buffercontrolmaxoctetsgranted{YType::int32, "bufferControlMaxOctetsGranted"},
    buffercontrolcapturedpackets{YType::int32, "bufferControlCapturedPackets"},
    buffercontrolturnontime{YType::uint32, "bufferControlTurnOnTime"},
    buffercontrolowner{YType::str, "bufferControlOwner"},
    buffercontrolstatus{YType::enumeration, "bufferControlStatus"}
{

    yang_name = "bufferControlEntry"; yang_parent_name = "bufferControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Buffercontroltable::Buffercontrolentry::~Buffercontrolentry()
{
}

bool RMONMIB::Buffercontroltable::Buffercontrolentry::has_data() const
{
    return buffercontrolindex.is_set
	|| buffercontrolchannelindex.is_set
	|| buffercontrolfullstatus.is_set
	|| buffercontrolfullaction.is_set
	|| buffercontrolcaptureslicesize.is_set
	|| buffercontroldownloadslicesize.is_set
	|| buffercontroldownloadoffset.is_set
	|| buffercontrolmaxoctetsrequested.is_set
	|| buffercontrolmaxoctetsgranted.is_set
	|| buffercontrolcapturedpackets.is_set
	|| buffercontrolturnontime.is_set
	|| buffercontrolowner.is_set
	|| buffercontrolstatus.is_set;
}

bool RMONMIB::Buffercontroltable::Buffercontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffercontrolindex.yfilter)
	|| ydk::is_set(buffercontrolchannelindex.yfilter)
	|| ydk::is_set(buffercontrolfullstatus.yfilter)
	|| ydk::is_set(buffercontrolfullaction.yfilter)
	|| ydk::is_set(buffercontrolcaptureslicesize.yfilter)
	|| ydk::is_set(buffercontroldownloadslicesize.yfilter)
	|| ydk::is_set(buffercontroldownloadoffset.yfilter)
	|| ydk::is_set(buffercontrolmaxoctetsrequested.yfilter)
	|| ydk::is_set(buffercontrolmaxoctetsgranted.yfilter)
	|| ydk::is_set(buffercontrolcapturedpackets.yfilter)
	|| ydk::is_set(buffercontrolturnontime.yfilter)
	|| ydk::is_set(buffercontrolowner.yfilter)
	|| ydk::is_set(buffercontrolstatus.yfilter);
}

std::string RMONMIB::Buffercontroltable::Buffercontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/bufferControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Buffercontroltable::Buffercontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlEntry" <<"[bufferControlIndex='" <<buffercontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Buffercontroltable::Buffercontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffercontrolindex.is_set || is_set(buffercontrolindex.yfilter)) leaf_name_data.push_back(buffercontrolindex.get_name_leafdata());
    if (buffercontrolchannelindex.is_set || is_set(buffercontrolchannelindex.yfilter)) leaf_name_data.push_back(buffercontrolchannelindex.get_name_leafdata());
    if (buffercontrolfullstatus.is_set || is_set(buffercontrolfullstatus.yfilter)) leaf_name_data.push_back(buffercontrolfullstatus.get_name_leafdata());
    if (buffercontrolfullaction.is_set || is_set(buffercontrolfullaction.yfilter)) leaf_name_data.push_back(buffercontrolfullaction.get_name_leafdata());
    if (buffercontrolcaptureslicesize.is_set || is_set(buffercontrolcaptureslicesize.yfilter)) leaf_name_data.push_back(buffercontrolcaptureslicesize.get_name_leafdata());
    if (buffercontroldownloadslicesize.is_set || is_set(buffercontroldownloadslicesize.yfilter)) leaf_name_data.push_back(buffercontroldownloadslicesize.get_name_leafdata());
    if (buffercontroldownloadoffset.is_set || is_set(buffercontroldownloadoffset.yfilter)) leaf_name_data.push_back(buffercontroldownloadoffset.get_name_leafdata());
    if (buffercontrolmaxoctetsrequested.is_set || is_set(buffercontrolmaxoctetsrequested.yfilter)) leaf_name_data.push_back(buffercontrolmaxoctetsrequested.get_name_leafdata());
    if (buffercontrolmaxoctetsgranted.is_set || is_set(buffercontrolmaxoctetsgranted.yfilter)) leaf_name_data.push_back(buffercontrolmaxoctetsgranted.get_name_leafdata());
    if (buffercontrolcapturedpackets.is_set || is_set(buffercontrolcapturedpackets.yfilter)) leaf_name_data.push_back(buffercontrolcapturedpackets.get_name_leafdata());
    if (buffercontrolturnontime.is_set || is_set(buffercontrolturnontime.yfilter)) leaf_name_data.push_back(buffercontrolturnontime.get_name_leafdata());
    if (buffercontrolowner.is_set || is_set(buffercontrolowner.yfilter)) leaf_name_data.push_back(buffercontrolowner.get_name_leafdata());
    if (buffercontrolstatus.is_set || is_set(buffercontrolstatus.yfilter)) leaf_name_data.push_back(buffercontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Buffercontroltable::Buffercontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Buffercontroltable::Buffercontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Buffercontroltable::Buffercontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferControlIndex")
    {
        buffercontrolindex = value;
        buffercontrolindex.value_namespace = name_space;
        buffercontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlChannelIndex")
    {
        buffercontrolchannelindex = value;
        buffercontrolchannelindex.value_namespace = name_space;
        buffercontrolchannelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlFullStatus")
    {
        buffercontrolfullstatus = value;
        buffercontrolfullstatus.value_namespace = name_space;
        buffercontrolfullstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlFullAction")
    {
        buffercontrolfullaction = value;
        buffercontrolfullaction.value_namespace = name_space;
        buffercontrolfullaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlCaptureSliceSize")
    {
        buffercontrolcaptureslicesize = value;
        buffercontrolcaptureslicesize.value_namespace = name_space;
        buffercontrolcaptureslicesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlDownloadSliceSize")
    {
        buffercontroldownloadslicesize = value;
        buffercontroldownloadslicesize.value_namespace = name_space;
        buffercontroldownloadslicesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlDownloadOffset")
    {
        buffercontroldownloadoffset = value;
        buffercontroldownloadoffset.value_namespace = name_space;
        buffercontroldownloadoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlMaxOctetsRequested")
    {
        buffercontrolmaxoctetsrequested = value;
        buffercontrolmaxoctetsrequested.value_namespace = name_space;
        buffercontrolmaxoctetsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlMaxOctetsGranted")
    {
        buffercontrolmaxoctetsgranted = value;
        buffercontrolmaxoctetsgranted.value_namespace = name_space;
        buffercontrolmaxoctetsgranted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlCapturedPackets")
    {
        buffercontrolcapturedpackets = value;
        buffercontrolcapturedpackets.value_namespace = name_space;
        buffercontrolcapturedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlTurnOnTime")
    {
        buffercontrolturnontime = value;
        buffercontrolturnontime.value_namespace = name_space;
        buffercontrolturnontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlOwner")
    {
        buffercontrolowner = value;
        buffercontrolowner.value_namespace = name_space;
        buffercontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferControlStatus")
    {
        buffercontrolstatus = value;
        buffercontrolstatus.value_namespace = name_space;
        buffercontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Buffercontroltable::Buffercontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferControlIndex")
    {
        buffercontrolindex.yfilter = yfilter;
    }
    if(value_path == "bufferControlChannelIndex")
    {
        buffercontrolchannelindex.yfilter = yfilter;
    }
    if(value_path == "bufferControlFullStatus")
    {
        buffercontrolfullstatus.yfilter = yfilter;
    }
    if(value_path == "bufferControlFullAction")
    {
        buffercontrolfullaction.yfilter = yfilter;
    }
    if(value_path == "bufferControlCaptureSliceSize")
    {
        buffercontrolcaptureslicesize.yfilter = yfilter;
    }
    if(value_path == "bufferControlDownloadSliceSize")
    {
        buffercontroldownloadslicesize.yfilter = yfilter;
    }
    if(value_path == "bufferControlDownloadOffset")
    {
        buffercontroldownloadoffset.yfilter = yfilter;
    }
    if(value_path == "bufferControlMaxOctetsRequested")
    {
        buffercontrolmaxoctetsrequested.yfilter = yfilter;
    }
    if(value_path == "bufferControlMaxOctetsGranted")
    {
        buffercontrolmaxoctetsgranted.yfilter = yfilter;
    }
    if(value_path == "bufferControlCapturedPackets")
    {
        buffercontrolcapturedpackets.yfilter = yfilter;
    }
    if(value_path == "bufferControlTurnOnTime")
    {
        buffercontrolturnontime.yfilter = yfilter;
    }
    if(value_path == "bufferControlOwner")
    {
        buffercontrolowner.yfilter = yfilter;
    }
    if(value_path == "bufferControlStatus")
    {
        buffercontrolstatus.yfilter = yfilter;
    }
}

bool RMONMIB::Buffercontroltable::Buffercontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferControlIndex" || name == "bufferControlChannelIndex" || name == "bufferControlFullStatus" || name == "bufferControlFullAction" || name == "bufferControlCaptureSliceSize" || name == "bufferControlDownloadSliceSize" || name == "bufferControlDownloadOffset" || name == "bufferControlMaxOctetsRequested" || name == "bufferControlMaxOctetsGranted" || name == "bufferControlCapturedPackets" || name == "bufferControlTurnOnTime" || name == "bufferControlOwner" || name == "bufferControlStatus")
        return true;
    return false;
}

RMONMIB::Capturebuffertable::Capturebuffertable()
{

    yang_name = "captureBufferTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Capturebuffertable::~Capturebuffertable()
{
}

bool RMONMIB::Capturebuffertable::has_data() const
{
    for (std::size_t index=0; index<capturebufferentry.size(); index++)
    {
        if(capturebufferentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Capturebuffertable::has_operation() const
{
    for (std::size_t index=0; index<capturebufferentry.size(); index++)
    {
        if(capturebufferentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Capturebuffertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Capturebuffertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Capturebuffertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Capturebuffertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Capturebuffertable::Capturebufferentry>();
        c->parent = this;
        capturebufferentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Capturebuffertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : capturebufferentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Capturebuffertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Capturebuffertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Capturebuffertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "captureBufferEntry")
        return true;
    return false;
}

RMONMIB::Capturebuffertable::Capturebufferentry::Capturebufferentry()
    :
    capturebuffercontrolindex{YType::int32, "captureBufferControlIndex"},
    capturebufferindex{YType::int32, "captureBufferIndex"},
    capturebufferpacketid{YType::int32, "captureBufferPacketID"},
    capturebufferpacketdata{YType::str, "captureBufferPacketData"},
    capturebufferpacketlength{YType::int32, "captureBufferPacketLength"},
    capturebufferpackettime{YType::int32, "captureBufferPacketTime"},
    capturebufferpacketstatus{YType::int32, "captureBufferPacketStatus"}
{

    yang_name = "captureBufferEntry"; yang_parent_name = "captureBufferTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Capturebuffertable::Capturebufferentry::~Capturebufferentry()
{
}

bool RMONMIB::Capturebuffertable::Capturebufferentry::has_data() const
{
    return capturebuffercontrolindex.is_set
	|| capturebufferindex.is_set
	|| capturebufferpacketid.is_set
	|| capturebufferpacketdata.is_set
	|| capturebufferpacketlength.is_set
	|| capturebufferpackettime.is_set
	|| capturebufferpacketstatus.is_set;
}

bool RMONMIB::Capturebuffertable::Capturebufferentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capturebuffercontrolindex.yfilter)
	|| ydk::is_set(capturebufferindex.yfilter)
	|| ydk::is_set(capturebufferpacketid.yfilter)
	|| ydk::is_set(capturebufferpacketdata.yfilter)
	|| ydk::is_set(capturebufferpacketlength.yfilter)
	|| ydk::is_set(capturebufferpackettime.yfilter)
	|| ydk::is_set(capturebufferpacketstatus.yfilter);
}

std::string RMONMIB::Capturebuffertable::Capturebufferentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/captureBufferTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Capturebuffertable::Capturebufferentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferEntry" <<"[captureBufferControlIndex='" <<capturebuffercontrolindex <<"']" <<"[captureBufferIndex='" <<capturebufferindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Capturebuffertable::Capturebufferentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capturebuffercontrolindex.is_set || is_set(capturebuffercontrolindex.yfilter)) leaf_name_data.push_back(capturebuffercontrolindex.get_name_leafdata());
    if (capturebufferindex.is_set || is_set(capturebufferindex.yfilter)) leaf_name_data.push_back(capturebufferindex.get_name_leafdata());
    if (capturebufferpacketid.is_set || is_set(capturebufferpacketid.yfilter)) leaf_name_data.push_back(capturebufferpacketid.get_name_leafdata());
    if (capturebufferpacketdata.is_set || is_set(capturebufferpacketdata.yfilter)) leaf_name_data.push_back(capturebufferpacketdata.get_name_leafdata());
    if (capturebufferpacketlength.is_set || is_set(capturebufferpacketlength.yfilter)) leaf_name_data.push_back(capturebufferpacketlength.get_name_leafdata());
    if (capturebufferpackettime.is_set || is_set(capturebufferpackettime.yfilter)) leaf_name_data.push_back(capturebufferpackettime.get_name_leafdata());
    if (capturebufferpacketstatus.is_set || is_set(capturebufferpacketstatus.yfilter)) leaf_name_data.push_back(capturebufferpacketstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Capturebuffertable::Capturebufferentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Capturebuffertable::Capturebufferentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Capturebuffertable::Capturebufferentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "captureBufferControlIndex")
    {
        capturebuffercontrolindex = value;
        capturebuffercontrolindex.value_namespace = name_space;
        capturebuffercontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferIndex")
    {
        capturebufferindex = value;
        capturebufferindex.value_namespace = name_space;
        capturebufferindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferPacketID")
    {
        capturebufferpacketid = value;
        capturebufferpacketid.value_namespace = name_space;
        capturebufferpacketid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferPacketData")
    {
        capturebufferpacketdata = value;
        capturebufferpacketdata.value_namespace = name_space;
        capturebufferpacketdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferPacketLength")
    {
        capturebufferpacketlength = value;
        capturebufferpacketlength.value_namespace = name_space;
        capturebufferpacketlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferPacketTime")
    {
        capturebufferpackettime = value;
        capturebufferpackettime.value_namespace = name_space;
        capturebufferpackettime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureBufferPacketStatus")
    {
        capturebufferpacketstatus = value;
        capturebufferpacketstatus.value_namespace = name_space;
        capturebufferpacketstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Capturebuffertable::Capturebufferentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "captureBufferControlIndex")
    {
        capturebuffercontrolindex.yfilter = yfilter;
    }
    if(value_path == "captureBufferIndex")
    {
        capturebufferindex.yfilter = yfilter;
    }
    if(value_path == "captureBufferPacketID")
    {
        capturebufferpacketid.yfilter = yfilter;
    }
    if(value_path == "captureBufferPacketData")
    {
        capturebufferpacketdata.yfilter = yfilter;
    }
    if(value_path == "captureBufferPacketLength")
    {
        capturebufferpacketlength.yfilter = yfilter;
    }
    if(value_path == "captureBufferPacketTime")
    {
        capturebufferpackettime.yfilter = yfilter;
    }
    if(value_path == "captureBufferPacketStatus")
    {
        capturebufferpacketstatus.yfilter = yfilter;
    }
}

bool RMONMIB::Capturebuffertable::Capturebufferentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "captureBufferControlIndex" || name == "captureBufferIndex" || name == "captureBufferPacketID" || name == "captureBufferPacketData" || name == "captureBufferPacketLength" || name == "captureBufferPacketTime" || name == "captureBufferPacketStatus")
        return true;
    return false;
}

RMONMIB::Eventtable::Eventtable()
{

    yang_name = "eventTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Eventtable::~Eventtable()
{
}

bool RMONMIB::Eventtable::has_data() const
{
    for (std::size_t index=0; index<evententry.size(); index++)
    {
        if(evententry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Eventtable::has_operation() const
{
    for (std::size_t index=0; index<evententry.size(); index++)
    {
        if(evententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Eventtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Eventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Eventtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Eventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Eventtable::Evententry>();
        c->parent = this;
        evententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Eventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Eventtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Eventtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Eventtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventEntry")
        return true;
    return false;
}

RMONMIB::Eventtable::Evententry::Evententry()
    :
    eventindex{YType::int32, "eventIndex"},
    eventdescription{YType::str, "eventDescription"},
    eventtype{YType::enumeration, "eventType"},
    eventcommunity{YType::str, "eventCommunity"},
    eventlasttimesent{YType::uint32, "eventLastTimeSent"},
    eventowner{YType::str, "eventOwner"},
    eventstatus{YType::enumeration, "eventStatus"}
{

    yang_name = "eventEntry"; yang_parent_name = "eventTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Eventtable::Evententry::~Evententry()
{
}

bool RMONMIB::Eventtable::Evententry::has_data() const
{
    return eventindex.is_set
	|| eventdescription.is_set
	|| eventtype.is_set
	|| eventcommunity.is_set
	|| eventlasttimesent.is_set
	|| eventowner.is_set
	|| eventstatus.is_set;
}

bool RMONMIB::Eventtable::Evententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventindex.yfilter)
	|| ydk::is_set(eventdescription.yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(eventcommunity.yfilter)
	|| ydk::is_set(eventlasttimesent.yfilter)
	|| ydk::is_set(eventowner.yfilter)
	|| ydk::is_set(eventstatus.yfilter);
}

std::string RMONMIB::Eventtable::Evententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/eventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Eventtable::Evententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventEntry" <<"[eventIndex='" <<eventindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Eventtable::Evententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventindex.is_set || is_set(eventindex.yfilter)) leaf_name_data.push_back(eventindex.get_name_leafdata());
    if (eventdescription.is_set || is_set(eventdescription.yfilter)) leaf_name_data.push_back(eventdescription.get_name_leafdata());
    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (eventcommunity.is_set || is_set(eventcommunity.yfilter)) leaf_name_data.push_back(eventcommunity.get_name_leafdata());
    if (eventlasttimesent.is_set || is_set(eventlasttimesent.yfilter)) leaf_name_data.push_back(eventlasttimesent.get_name_leafdata());
    if (eventowner.is_set || is_set(eventowner.yfilter)) leaf_name_data.push_back(eventowner.get_name_leafdata());
    if (eventstatus.is_set || is_set(eventstatus.yfilter)) leaf_name_data.push_back(eventstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Eventtable::Evententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Eventtable::Evententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Eventtable::Evententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventIndex")
    {
        eventindex = value;
        eventindex.value_namespace = name_space;
        eventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventDescription")
    {
        eventdescription = value;
        eventdescription.value_namespace = name_space;
        eventdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventCommunity")
    {
        eventcommunity = value;
        eventcommunity.value_namespace = name_space;
        eventcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventLastTimeSent")
    {
        eventlasttimesent = value;
        eventlasttimesent.value_namespace = name_space;
        eventlasttimesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventOwner")
    {
        eventowner = value;
        eventowner.value_namespace = name_space;
        eventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventStatus")
    {
        eventstatus = value;
        eventstatus.value_namespace = name_space;
        eventstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Eventtable::Evententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventIndex")
    {
        eventindex.yfilter = yfilter;
    }
    if(value_path == "eventDescription")
    {
        eventdescription.yfilter = yfilter;
    }
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "eventCommunity")
    {
        eventcommunity.yfilter = yfilter;
    }
    if(value_path == "eventLastTimeSent")
    {
        eventlasttimesent.yfilter = yfilter;
    }
    if(value_path == "eventOwner")
    {
        eventowner.yfilter = yfilter;
    }
    if(value_path == "eventStatus")
    {
        eventstatus.yfilter = yfilter;
    }
}

bool RMONMIB::Eventtable::Evententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventIndex" || name == "eventDescription" || name == "eventType" || name == "eventCommunity" || name == "eventLastTimeSent" || name == "eventOwner" || name == "eventStatus")
        return true;
    return false;
}

RMONMIB::Logtable::Logtable()
{

    yang_name = "logTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Logtable::~Logtable()
{
}

bool RMONMIB::Logtable::has_data() const
{
    for (std::size_t index=0; index<logentry.size(); index++)
    {
        if(logentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::Logtable::has_operation() const
{
    for (std::size_t index=0; index<logentry.size(); index++)
    {
        if(logentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::Logtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Logtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Logtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Logtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RMONMIB::Logtable::Logentry>();
        c->parent = this;
        logentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Logtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : logentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMONMIB::Logtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::Logtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::Logtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logEntry")
        return true;
    return false;
}

RMONMIB::Logtable::Logentry::Logentry()
    :
    logeventindex{YType::int32, "logEventIndex"},
    logindex{YType::int32, "logIndex"},
    logtime{YType::uint32, "logTime"},
    logdescription{YType::str, "logDescription"}
{

    yang_name = "logEntry"; yang_parent_name = "logTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMONMIB::Logtable::Logentry::~Logentry()
{
}

bool RMONMIB::Logtable::Logentry::has_data() const
{
    return logeventindex.is_set
	|| logindex.is_set
	|| logtime.is_set
	|| logdescription.is_set;
}

bool RMONMIB::Logtable::Logentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logeventindex.yfilter)
	|| ydk::is_set(logindex.yfilter)
	|| ydk::is_set(logtime.yfilter)
	|| ydk::is_set(logdescription.yfilter);
}

std::string RMONMIB::Logtable::Logentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/logTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::Logtable::Logentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logEntry" <<"[logEventIndex='" <<logeventindex <<"']" <<"[logIndex='" <<logindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::Logtable::Logentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logeventindex.is_set || is_set(logeventindex.yfilter)) leaf_name_data.push_back(logeventindex.get_name_leafdata());
    if (logindex.is_set || is_set(logindex.yfilter)) leaf_name_data.push_back(logindex.get_name_leafdata());
    if (logtime.is_set || is_set(logtime.yfilter)) leaf_name_data.push_back(logtime.get_name_leafdata());
    if (logdescription.is_set || is_set(logdescription.yfilter)) leaf_name_data.push_back(logdescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMONMIB::Logtable::Logentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMONMIB::Logtable::Logentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMONMIB::Logtable::Logentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logEventIndex")
    {
        logeventindex = value;
        logeventindex.value_namespace = name_space;
        logeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logIndex")
    {
        logindex = value;
        logindex.value_namespace = name_space;
        logindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logTime")
    {
        logtime = value;
        logtime.value_namespace = name_space;
        logtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logDescription")
    {
        logdescription = value;
        logdescription.value_namespace = name_space;
        logdescription.value_namespace_prefix = name_space_prefix;
    }
}

void RMONMIB::Logtable::Logentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logEventIndex")
    {
        logeventindex.yfilter = yfilter;
    }
    if(value_path == "logIndex")
    {
        logindex.yfilter = yfilter;
    }
    if(value_path == "logTime")
    {
        logtime.yfilter = yfilter;
    }
    if(value_path == "logDescription")
    {
        logdescription.yfilter = yfilter;
    }
}

bool RMONMIB::Logtable::Logentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logEventIndex" || name == "logIndex" || name == "logTime" || name == "logDescription")
        return true;
    return false;
}

const Enum::YLeaf EntryStatus::valid {1, "valid"};
const Enum::YLeaf EntryStatus::createRequest {2, "createRequest"};
const Enum::YLeaf EntryStatus::underCreation {3, "underCreation"};
const Enum::YLeaf EntryStatus::invalid {4, "invalid"};

const Enum::YLeaf RMONMIB::Alarmtable::Alarmentry::Alarmsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf RMONMIB::Alarmtable::Alarmentry::Alarmsampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf RMONMIB::Alarmtable::Alarmentry::Alarmstartupalarm::risingAlarm {1, "risingAlarm"};
const Enum::YLeaf RMONMIB::Alarmtable::Alarmentry::Alarmstartupalarm::fallingAlarm {2, "fallingAlarm"};
const Enum::YLeaf RMONMIB::Alarmtable::Alarmentry::Alarmstartupalarm::risingOrFallingAlarm {3, "risingOrFallingAlarm"};

const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNInPkts {1, "hostTopNInPkts"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNOutPkts {2, "hostTopNOutPkts"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNInOctets {3, "hostTopNInOctets"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNOutOctets {4, "hostTopNOutOctets"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNOutErrors {5, "hostTopNOutErrors"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNOutBroadcastPkts {6, "hostTopNOutBroadcastPkts"};
const Enum::YLeaf RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase::hostTopNOutMulticastPkts {7, "hostTopNOutMulticastPkts"};

const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channelaccepttype::acceptMatched {1, "acceptMatched"};
const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channelaccepttype::acceptFailed {2, "acceptFailed"};

const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channeldatacontrol::on {1, "on"};
const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channeldatacontrol::off {2, "off"};

const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channeleventstatus::eventReady {1, "eventReady"};
const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channeleventstatus::eventFired {2, "eventFired"};
const Enum::YLeaf RMONMIB::Channeltable::Channelentry::Channeleventstatus::eventAlwaysReady {3, "eventAlwaysReady"};

const Enum::YLeaf RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullstatus::spaceAvailable {1, "spaceAvailable"};
const Enum::YLeaf RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullstatus::full {2, "full"};

const Enum::YLeaf RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullaction::lockWhenFull {1, "lockWhenFull"};
const Enum::YLeaf RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullaction::wrapWhenFull {2, "wrapWhenFull"};

const Enum::YLeaf RMONMIB::Eventtable::Evententry::Eventtype::none {1, "none"};
const Enum::YLeaf RMONMIB::Eventtable::Evententry::Eventtype::log {2, "log"};
const Enum::YLeaf RMONMIB::Eventtable::Evententry::Eventtype::snmptrap {3, "snmptrap"};
const Enum::YLeaf RMONMIB::Eventtable::Evententry::Eventtype::logandtrap {4, "logandtrap"};


}
}

