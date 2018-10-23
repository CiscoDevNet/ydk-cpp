
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RMON_MIB {

RmonEventsV2::RmonEventsV2()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:RMON-MIB", "RMON-MIB", "RMON-MIB:rmonEventsV2")
{

}

RmonEventsV2::~RmonEventsV2()
{
}

RMONMIB::RMONMIB()
    :
    etherstatstable(std::make_shared<RMONMIB::EtherStatsTable>())
    , historycontroltable(std::make_shared<RMONMIB::HistoryControlTable>())
    , etherhistorytable(std::make_shared<RMONMIB::EtherHistoryTable>())
    , alarmtable(std::make_shared<RMONMIB::AlarmTable>())
    , hostcontroltable(std::make_shared<RMONMIB::HostControlTable>())
    , hosttable(std::make_shared<RMONMIB::HostTable>())
    , hosttimetable(std::make_shared<RMONMIB::HostTimeTable>())
    , hosttopncontroltable(std::make_shared<RMONMIB::HostTopNControlTable>())
    , hosttopntable(std::make_shared<RMONMIB::HostTopNTable>())
    , matrixcontroltable(std::make_shared<RMONMIB::MatrixControlTable>())
    , matrixsdtable(std::make_shared<RMONMIB::MatrixSDTable>())
    , matrixdstable(std::make_shared<RMONMIB::MatrixDSTable>())
    , filtertable(std::make_shared<RMONMIB::FilterTable>())
    , channeltable(std::make_shared<RMONMIB::ChannelTable>())
    , buffercontroltable(std::make_shared<RMONMIB::BufferControlTable>())
    , capturebuffertable(std::make_shared<RMONMIB::CaptureBufferTable>())
    , eventtable(std::make_shared<RMONMIB::EventTable>())
    , logtable(std::make_shared<RMONMIB::LogTable>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> RMONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherStatsTable")
    {
        if(etherstatstable == nullptr)
        {
            etherstatstable = std::make_shared<RMONMIB::EtherStatsTable>();
        }
        return etherstatstable;
    }

    if(child_yang_name == "historyControlTable")
    {
        if(historycontroltable == nullptr)
        {
            historycontroltable = std::make_shared<RMONMIB::HistoryControlTable>();
        }
        return historycontroltable;
    }

    if(child_yang_name == "etherHistoryTable")
    {
        if(etherhistorytable == nullptr)
        {
            etherhistorytable = std::make_shared<RMONMIB::EtherHistoryTable>();
        }
        return etherhistorytable;
    }

    if(child_yang_name == "alarmTable")
    {
        if(alarmtable == nullptr)
        {
            alarmtable = std::make_shared<RMONMIB::AlarmTable>();
        }
        return alarmtable;
    }

    if(child_yang_name == "hostControlTable")
    {
        if(hostcontroltable == nullptr)
        {
            hostcontroltable = std::make_shared<RMONMIB::HostControlTable>();
        }
        return hostcontroltable;
    }

    if(child_yang_name == "hostTable")
    {
        if(hosttable == nullptr)
        {
            hosttable = std::make_shared<RMONMIB::HostTable>();
        }
        return hosttable;
    }

    if(child_yang_name == "hostTimeTable")
    {
        if(hosttimetable == nullptr)
        {
            hosttimetable = std::make_shared<RMONMIB::HostTimeTable>();
        }
        return hosttimetable;
    }

    if(child_yang_name == "hostTopNControlTable")
    {
        if(hosttopncontroltable == nullptr)
        {
            hosttopncontroltable = std::make_shared<RMONMIB::HostTopNControlTable>();
        }
        return hosttopncontroltable;
    }

    if(child_yang_name == "hostTopNTable")
    {
        if(hosttopntable == nullptr)
        {
            hosttopntable = std::make_shared<RMONMIB::HostTopNTable>();
        }
        return hosttopntable;
    }

    if(child_yang_name == "matrixControlTable")
    {
        if(matrixcontroltable == nullptr)
        {
            matrixcontroltable = std::make_shared<RMONMIB::MatrixControlTable>();
        }
        return matrixcontroltable;
    }

    if(child_yang_name == "matrixSDTable")
    {
        if(matrixsdtable == nullptr)
        {
            matrixsdtable = std::make_shared<RMONMIB::MatrixSDTable>();
        }
        return matrixsdtable;
    }

    if(child_yang_name == "matrixDSTable")
    {
        if(matrixdstable == nullptr)
        {
            matrixdstable = std::make_shared<RMONMIB::MatrixDSTable>();
        }
        return matrixdstable;
    }

    if(child_yang_name == "filterTable")
    {
        if(filtertable == nullptr)
        {
            filtertable = std::make_shared<RMONMIB::FilterTable>();
        }
        return filtertable;
    }

    if(child_yang_name == "channelTable")
    {
        if(channeltable == nullptr)
        {
            channeltable = std::make_shared<RMONMIB::ChannelTable>();
        }
        return channeltable;
    }

    if(child_yang_name == "bufferControlTable")
    {
        if(buffercontroltable == nullptr)
        {
            buffercontroltable = std::make_shared<RMONMIB::BufferControlTable>();
        }
        return buffercontroltable;
    }

    if(child_yang_name == "captureBufferTable")
    {
        if(capturebuffertable == nullptr)
        {
            capturebuffertable = std::make_shared<RMONMIB::CaptureBufferTable>();
        }
        return capturebuffertable;
    }

    if(child_yang_name == "eventTable")
    {
        if(eventtable == nullptr)
        {
            eventtable = std::make_shared<RMONMIB::EventTable>();
        }
        return eventtable;
    }

    if(child_yang_name == "logTable")
    {
        if(logtable == nullptr)
        {
            logtable = std::make_shared<RMONMIB::LogTable>();
        }
        return logtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etherstatstable != nullptr)
    {
        _children["etherStatsTable"] = etherstatstable;
    }

    if(historycontroltable != nullptr)
    {
        _children["historyControlTable"] = historycontroltable;
    }

    if(etherhistorytable != nullptr)
    {
        _children["etherHistoryTable"] = etherhistorytable;
    }

    if(alarmtable != nullptr)
    {
        _children["alarmTable"] = alarmtable;
    }

    if(hostcontroltable != nullptr)
    {
        _children["hostControlTable"] = hostcontroltable;
    }

    if(hosttable != nullptr)
    {
        _children["hostTable"] = hosttable;
    }

    if(hosttimetable != nullptr)
    {
        _children["hostTimeTable"] = hosttimetable;
    }

    if(hosttopncontroltable != nullptr)
    {
        _children["hostTopNControlTable"] = hosttopncontroltable;
    }

    if(hosttopntable != nullptr)
    {
        _children["hostTopNTable"] = hosttopntable;
    }

    if(matrixcontroltable != nullptr)
    {
        _children["matrixControlTable"] = matrixcontroltable;
    }

    if(matrixsdtable != nullptr)
    {
        _children["matrixSDTable"] = matrixsdtable;
    }

    if(matrixdstable != nullptr)
    {
        _children["matrixDSTable"] = matrixdstable;
    }

    if(filtertable != nullptr)
    {
        _children["filterTable"] = filtertable;
    }

    if(channeltable != nullptr)
    {
        _children["channelTable"] = channeltable;
    }

    if(buffercontroltable != nullptr)
    {
        _children["bufferControlTable"] = buffercontroltable;
    }

    if(capturebuffertable != nullptr)
    {
        _children["captureBufferTable"] = capturebuffertable;
    }

    if(eventtable != nullptr)
    {
        _children["eventTable"] = eventtable;
    }

    if(logtable != nullptr)
    {
        _children["logTable"] = logtable;
    }

    return _children;
}

void RMONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RMONMIB::clone_ptr() const
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

RMONMIB::EtherStatsTable::EtherStatsTable()
    :
    etherstatsentry(this, {"etherstatsindex"})
{

    yang_name = "etherStatsTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::EtherStatsTable::~EtherStatsTable()
{
}

bool RMONMIB::EtherStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherstatsentry.len(); index++)
    {
        if(etherstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::EtherStatsTable::has_operation() const
{
    for (std::size_t index=0; index<etherstatsentry.len(); index++)
    {
        if(etherstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::EtherStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EtherStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EtherStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::EtherStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherStatsEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::EtherStatsTable::EtherStatsEntry>();
        ent_->parent = this;
        etherstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EtherStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : etherstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::EtherStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::EtherStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::EtherStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherStatsEntry")
        return true;
    return false;
}

RMONMIB::EtherStatsTable::EtherStatsEntry::EtherStatsEntry()
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

RMONMIB::EtherStatsTable::EtherStatsEntry::~EtherStatsEntry()
{
}

bool RMONMIB::EtherStatsTable::EtherStatsEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::EtherStatsTable::EtherStatsEntry::has_operation() const
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

std::string RMONMIB::EtherStatsTable::EtherStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/etherStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EtherStatsTable::EtherStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherStatsEntry";
    ADD_KEY_TOKEN(etherstatsindex, "etherStatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EtherStatsTable::EtherStatsEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::EtherStatsTable::EtherStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EtherStatsTable::EtherStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::EtherStatsTable::EtherStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::EtherStatsTable::EtherStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::EtherStatsTable::EtherStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherStatsIndex" || name == "etherStatsDataSource" || name == "etherStatsDropEvents" || name == "etherStatsOctets" || name == "etherStatsPkts" || name == "etherStatsBroadcastPkts" || name == "etherStatsMulticastPkts" || name == "etherStatsCRCAlignErrors" || name == "etherStatsUndersizePkts" || name == "etherStatsOversizePkts" || name == "etherStatsFragments" || name == "etherStatsJabbers" || name == "etherStatsCollisions" || name == "etherStatsPkts64Octets" || name == "etherStatsPkts65to127Octets" || name == "etherStatsPkts128to255Octets" || name == "etherStatsPkts256to511Octets" || name == "etherStatsPkts512to1023Octets" || name == "etherStatsPkts1024to1518Octets" || name == "etherStatsOwner" || name == "etherStatsStatus" || name == "etherStatsDroppedFrames" || name == "etherStatsCreateTime")
        return true;
    return false;
}

RMONMIB::HistoryControlTable::HistoryControlTable()
    :
    historycontrolentry(this, {"historycontrolindex"})
{

    yang_name = "historyControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HistoryControlTable::~HistoryControlTable()
{
}

bool RMONMIB::HistoryControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<historycontrolentry.len(); index++)
    {
        if(historycontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HistoryControlTable::has_operation() const
{
    for (std::size_t index=0; index<historycontrolentry.len(); index++)
    {
        if(historycontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HistoryControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HistoryControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HistoryControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HistoryControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "historyControlEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HistoryControlTable::HistoryControlEntry>();
        ent_->parent = this;
        historycontrolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HistoryControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : historycontrolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HistoryControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HistoryControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HistoryControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historyControlEntry")
        return true;
    return false;
}

RMONMIB::HistoryControlTable::HistoryControlEntry::HistoryControlEntry()
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

RMONMIB::HistoryControlTable::HistoryControlEntry::~HistoryControlEntry()
{
}

bool RMONMIB::HistoryControlTable::HistoryControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return historycontrolindex.is_set
	|| historycontroldatasource.is_set
	|| historycontrolbucketsrequested.is_set
	|| historycontrolbucketsgranted.is_set
	|| historycontrolinterval.is_set
	|| historycontrolowner.is_set
	|| historycontrolstatus.is_set
	|| historycontroldroppedframes.is_set;
}

bool RMONMIB::HistoryControlTable::HistoryControlEntry::has_operation() const
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

std::string RMONMIB::HistoryControlTable::HistoryControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/historyControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HistoryControlTable::HistoryControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historyControlEntry";
    ADD_KEY_TOKEN(historycontrolindex, "historyControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HistoryControlTable::HistoryControlEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::HistoryControlTable::HistoryControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HistoryControlTable::HistoryControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HistoryControlTable::HistoryControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HistoryControlTable::HistoryControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HistoryControlTable::HistoryControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historyControlIndex" || name == "historyControlDataSource" || name == "historyControlBucketsRequested" || name == "historyControlBucketsGranted" || name == "historyControlInterval" || name == "historyControlOwner" || name == "historyControlStatus" || name == "historyControlDroppedFrames")
        return true;
    return false;
}

RMONMIB::EtherHistoryTable::EtherHistoryTable()
    :
    etherhistoryentry(this, {"etherhistoryindex", "etherhistorysampleindex"})
{

    yang_name = "etherHistoryTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::EtherHistoryTable::~EtherHistoryTable()
{
}

bool RMONMIB::EtherHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherhistoryentry.len(); index++)
    {
        if(etherhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::EtherHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<etherhistoryentry.len(); index++)
    {
        if(etherhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::EtherHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EtherHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EtherHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::EtherHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherHistoryEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::EtherHistoryTable::EtherHistoryEntry>();
        ent_->parent = this;
        etherhistoryentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EtherHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : etherhistoryentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::EtherHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::EtherHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::EtherHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherHistoryEntry")
        return true;
    return false;
}

RMONMIB::EtherHistoryTable::EtherHistoryEntry::EtherHistoryEntry()
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

RMONMIB::EtherHistoryTable::EtherHistoryEntry::~EtherHistoryEntry()
{
}

bool RMONMIB::EtherHistoryTable::EtherHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::EtherHistoryTable::EtherHistoryEntry::has_operation() const
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

std::string RMONMIB::EtherHistoryTable::EtherHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/etherHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EtherHistoryTable::EtherHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherHistoryEntry";
    ADD_KEY_TOKEN(etherhistoryindex, "etherHistoryIndex");
    ADD_KEY_TOKEN(etherhistorysampleindex, "etherHistorySampleIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EtherHistoryTable::EtherHistoryEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::EtherHistoryTable::EtherHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EtherHistoryTable::EtherHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::EtherHistoryTable::EtherHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::EtherHistoryTable::EtherHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::EtherHistoryTable::EtherHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherHistoryIndex" || name == "etherHistorySampleIndex" || name == "etherHistoryIntervalStart" || name == "etherHistoryDropEvents" || name == "etherHistoryOctets" || name == "etherHistoryPkts" || name == "etherHistoryBroadcastPkts" || name == "etherHistoryMulticastPkts" || name == "etherHistoryCRCAlignErrors" || name == "etherHistoryUndersizePkts" || name == "etherHistoryOversizePkts" || name == "etherHistoryFragments" || name == "etherHistoryJabbers" || name == "etherHistoryCollisions" || name == "etherHistoryUtilization")
        return true;
    return false;
}

RMONMIB::AlarmTable::AlarmTable()
    :
    alarmentry(this, {"alarmindex"})
{

    yang_name = "alarmTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::AlarmTable::~AlarmTable()
{
}

bool RMONMIB::AlarmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarmentry.len(); index++)
    {
        if(alarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::AlarmTable::has_operation() const
{
    for (std::size_t index=0; index<alarmentry.len(); index++)
    {
        if(alarmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::AlarmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::AlarmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::AlarmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::AlarmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarmEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::AlarmTable::AlarmEntry>();
        ent_->parent = this;
        alarmentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::AlarmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarmentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::AlarmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::AlarmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::AlarmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarmEntry")
        return true;
    return false;
}

RMONMIB::AlarmTable::AlarmEntry::AlarmEntry()
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

RMONMIB::AlarmTable::AlarmEntry::~AlarmEntry()
{
}

bool RMONMIB::AlarmTable::AlarmEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::AlarmTable::AlarmEntry::has_operation() const
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

std::string RMONMIB::AlarmTable::AlarmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/alarmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::AlarmTable::AlarmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarmEntry";
    ADD_KEY_TOKEN(alarmindex, "alarmIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::AlarmTable::AlarmEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::AlarmTable::AlarmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::AlarmTable::AlarmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::AlarmTable::AlarmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::AlarmTable::AlarmEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::AlarmTable::AlarmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarmIndex" || name == "alarmInterval" || name == "alarmVariable" || name == "alarmSampleType" || name == "alarmValue" || name == "alarmStartupAlarm" || name == "alarmRisingThreshold" || name == "alarmFallingThreshold" || name == "alarmRisingEventIndex" || name == "alarmFallingEventIndex" || name == "alarmOwner" || name == "alarmStatus")
        return true;
    return false;
}

RMONMIB::HostControlTable::HostControlTable()
    :
    hostcontrolentry(this, {"hostcontrolindex"})
{

    yang_name = "hostControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostControlTable::~HostControlTable()
{
}

bool RMONMIB::HostControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostcontrolentry.len(); index++)
    {
        if(hostcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HostControlTable::has_operation() const
{
    for (std::size_t index=0; index<hostcontrolentry.len(); index++)
    {
        if(hostcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HostControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostControlEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HostControlTable::HostControlEntry>();
        ent_->parent = this;
        hostcontrolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostcontrolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HostControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HostControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HostControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostControlEntry")
        return true;
    return false;
}

RMONMIB::HostControlTable::HostControlEntry::HostControlEntry()
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

RMONMIB::HostControlTable::HostControlEntry::~HostControlEntry()
{
}

bool RMONMIB::HostControlTable::HostControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return hostcontrolindex.is_set
	|| hostcontroldatasource.is_set
	|| hostcontroltablesize.is_set
	|| hostcontrollastdeletetime.is_set
	|| hostcontrolowner.is_set
	|| hostcontrolstatus.is_set
	|| hostcontroldroppedframes.is_set
	|| hostcontrolcreatetime.is_set;
}

bool RMONMIB::HostControlTable::HostControlEntry::has_operation() const
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

std::string RMONMIB::HostControlTable::HostControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostControlTable::HostControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostControlEntry";
    ADD_KEY_TOKEN(hostcontrolindex, "hostControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostControlTable::HostControlEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::HostControlTable::HostControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostControlTable::HostControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HostControlTable::HostControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HostControlTable::HostControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HostControlTable::HostControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostControlIndex" || name == "hostControlDataSource" || name == "hostControlTableSize" || name == "hostControlLastDeleteTime" || name == "hostControlOwner" || name == "hostControlStatus" || name == "hostControlDroppedFrames" || name == "hostControlCreateTime")
        return true;
    return false;
}

RMONMIB::HostTable::HostTable()
    :
    hostentry(this, {"hostindex", "hostaddress"})
{

    yang_name = "hostTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostTable::~HostTable()
{
}

bool RMONMIB::HostTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostentry.len(); index++)
    {
        if(hostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HostTable::has_operation() const
{
    for (std::size_t index=0; index<hostentry.len(); index++)
    {
        if(hostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HostTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HostTable::HostEntry>();
        ent_->parent = this;
        hostentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HostTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HostTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HostTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostEntry")
        return true;
    return false;
}

RMONMIB::HostTable::HostEntry::HostEntry()
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

RMONMIB::HostTable::HostEntry::~HostEntry()
{
}

bool RMONMIB::HostTable::HostEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::HostTable::HostEntry::has_operation() const
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

std::string RMONMIB::HostTable::HostEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTable::HostEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostEntry";
    ADD_KEY_TOKEN(hostindex, "hostIndex");
    ADD_KEY_TOKEN(hostaddress, "hostAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTable::HostEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::HostTable::HostEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTable::HostEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HostTable::HostEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HostTable::HostEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HostTable::HostEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostIndex" || name == "hostAddress" || name == "hostCreationOrder" || name == "hostInPkts" || name == "hostOutPkts" || name == "hostInOctets" || name == "hostOutOctets" || name == "hostOutErrors" || name == "hostOutBroadcastPkts" || name == "hostOutMulticastPkts")
        return true;
    return false;
}

RMONMIB::HostTimeTable::HostTimeTable()
    :
    hosttimeentry(this, {"hosttimeindex", "hosttimecreationorder"})
{

    yang_name = "hostTimeTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostTimeTable::~HostTimeTable()
{
}

bool RMONMIB::HostTimeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hosttimeentry.len(); index++)
    {
        if(hosttimeentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HostTimeTable::has_operation() const
{
    for (std::size_t index=0; index<hosttimeentry.len(); index++)
    {
        if(hosttimeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HostTimeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTimeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTimeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostTimeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTimeEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HostTimeTable::HostTimeEntry>();
        ent_->parent = this;
        hosttimeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTimeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hosttimeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HostTimeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HostTimeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HostTimeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTimeEntry")
        return true;
    return false;
}

RMONMIB::HostTimeTable::HostTimeEntry::HostTimeEntry()
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

RMONMIB::HostTimeTable::HostTimeEntry::~HostTimeEntry()
{
}

bool RMONMIB::HostTimeTable::HostTimeEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::HostTimeTable::HostTimeEntry::has_operation() const
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

std::string RMONMIB::HostTimeTable::HostTimeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTimeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTimeTable::HostTimeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTimeEntry";
    ADD_KEY_TOKEN(hosttimeindex, "hostTimeIndex");
    ADD_KEY_TOKEN(hosttimecreationorder, "hostTimeCreationOrder");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTimeTable::HostTimeEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::HostTimeTable::HostTimeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTimeTable::HostTimeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HostTimeTable::HostTimeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HostTimeTable::HostTimeEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HostTimeTable::HostTimeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTimeIndex" || name == "hostTimeCreationOrder" || name == "hostTimeAddress" || name == "hostTimeInPkts" || name == "hostTimeOutPkts" || name == "hostTimeInOctets" || name == "hostTimeOutOctets" || name == "hostTimeOutErrors" || name == "hostTimeOutBroadcastPkts" || name == "hostTimeOutMulticastPkts")
        return true;
    return false;
}

RMONMIB::HostTopNControlTable::HostTopNControlTable()
    :
    hosttopncontrolentry(this, {"hosttopncontrolindex"})
{

    yang_name = "hostTopNControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostTopNControlTable::~HostTopNControlTable()
{
}

bool RMONMIB::HostTopNControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hosttopncontrolentry.len(); index++)
    {
        if(hosttopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HostTopNControlTable::has_operation() const
{
    for (std::size_t index=0; index<hosttopncontrolentry.len(); index++)
    {
        if(hosttopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HostTopNControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTopNControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTopNControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostTopNControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTopNControlEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HostTopNControlTable::HostTopNControlEntry>();
        ent_->parent = this;
        hosttopncontrolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTopNControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hosttopncontrolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HostTopNControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HostTopNControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HostTopNControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNControlEntry")
        return true;
    return false;
}

RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNControlEntry()
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

RMONMIB::HostTopNControlTable::HostTopNControlEntry::~HostTopNControlEntry()
{
}

bool RMONMIB::HostTopNControlTable::HostTopNControlEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::HostTopNControlTable::HostTopNControlEntry::has_operation() const
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

std::string RMONMIB::HostTopNControlTable::HostTopNControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTopNControlTable::HostTopNControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNControlEntry";
    ADD_KEY_TOKEN(hosttopncontrolindex, "hostTopNControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTopNControlTable::HostTopNControlEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::HostTopNControlTable::HostTopNControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTopNControlTable::HostTopNControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HostTopNControlTable::HostTopNControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HostTopNControlTable::HostTopNControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HostTopNControlTable::HostTopNControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNControlIndex" || name == "hostTopNHostIndex" || name == "hostTopNRateBase" || name == "hostTopNTimeRemaining" || name == "hostTopNDuration" || name == "hostTopNRequestedSize" || name == "hostTopNGrantedSize" || name == "hostTopNStartTime" || name == "hostTopNOwner" || name == "hostTopNStatus")
        return true;
    return false;
}

RMONMIB::HostTopNTable::HostTopNTable()
    :
    hosttopnentry(this, {"hosttopnreport", "hosttopnindex"})
{

    yang_name = "hostTopNTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostTopNTable::~HostTopNTable()
{
}

bool RMONMIB::HostTopNTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hosttopnentry.len(); index++)
    {
        if(hosttopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::HostTopNTable::has_operation() const
{
    for (std::size_t index=0; index<hosttopnentry.len(); index++)
    {
        if(hosttopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::HostTopNTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTopNTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTopNTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostTopNTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostTopNEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::HostTopNTable::HostTopNEntry>();
        ent_->parent = this;
        hosttopnentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTopNTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hosttopnentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::HostTopNTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::HostTopNTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::HostTopNTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNEntry")
        return true;
    return false;
}

RMONMIB::HostTopNTable::HostTopNEntry::HostTopNEntry()
    :
    hosttopnreport{YType::int32, "hostTopNReport"},
    hosttopnindex{YType::int32, "hostTopNIndex"},
    hosttopnaddress{YType::str, "hostTopNAddress"},
    hosttopnrate{YType::int32, "hostTopNRate"}
{

    yang_name = "hostTopNEntry"; yang_parent_name = "hostTopNTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::HostTopNTable::HostTopNEntry::~HostTopNEntry()
{
}

bool RMONMIB::HostTopNTable::HostTopNEntry::has_data() const
{
    if (is_presence_container) return true;
    return hosttopnreport.is_set
	|| hosttopnindex.is_set
	|| hosttopnaddress.is_set
	|| hosttopnrate.is_set;
}

bool RMONMIB::HostTopNTable::HostTopNEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hosttopnreport.yfilter)
	|| ydk::is_set(hosttopnindex.yfilter)
	|| ydk::is_set(hosttopnaddress.yfilter)
	|| ydk::is_set(hosttopnrate.yfilter);
}

std::string RMONMIB::HostTopNTable::HostTopNEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/hostTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::HostTopNTable::HostTopNEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostTopNEntry";
    ADD_KEY_TOKEN(hosttopnreport, "hostTopNReport");
    ADD_KEY_TOKEN(hosttopnindex, "hostTopNIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::HostTopNTable::HostTopNEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hosttopnreport.is_set || is_set(hosttopnreport.yfilter)) leaf_name_data.push_back(hosttopnreport.get_name_leafdata());
    if (hosttopnindex.is_set || is_set(hosttopnindex.yfilter)) leaf_name_data.push_back(hosttopnindex.get_name_leafdata());
    if (hosttopnaddress.is_set || is_set(hosttopnaddress.yfilter)) leaf_name_data.push_back(hosttopnaddress.get_name_leafdata());
    if (hosttopnrate.is_set || is_set(hosttopnrate.yfilter)) leaf_name_data.push_back(hosttopnrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::HostTopNTable::HostTopNEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::HostTopNTable::HostTopNEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::HostTopNTable::HostTopNEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::HostTopNTable::HostTopNEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::HostTopNTable::HostTopNEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostTopNReport" || name == "hostTopNIndex" || name == "hostTopNAddress" || name == "hostTopNRate")
        return true;
    return false;
}

RMONMIB::MatrixControlTable::MatrixControlTable()
    :
    matrixcontrolentry(this, {"matrixcontrolindex"})
{

    yang_name = "matrixControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::MatrixControlTable::~MatrixControlTable()
{
}

bool RMONMIB::MatrixControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matrixcontrolentry.len(); index++)
    {
        if(matrixcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::MatrixControlTable::has_operation() const
{
    for (std::size_t index=0; index<matrixcontrolentry.len(); index++)
    {
        if(matrixcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::MatrixControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::MatrixControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixControlEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::MatrixControlTable::MatrixControlEntry>();
        ent_->parent = this;
        matrixcontrolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matrixcontrolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::MatrixControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::MatrixControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::MatrixControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixControlEntry")
        return true;
    return false;
}

RMONMIB::MatrixControlTable::MatrixControlEntry::MatrixControlEntry()
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

RMONMIB::MatrixControlTable::MatrixControlEntry::~MatrixControlEntry()
{
}

bool RMONMIB::MatrixControlTable::MatrixControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return matrixcontrolindex.is_set
	|| matrixcontroldatasource.is_set
	|| matrixcontroltablesize.is_set
	|| matrixcontrollastdeletetime.is_set
	|| matrixcontrolowner.is_set
	|| matrixcontrolstatus.is_set
	|| matrixcontroldroppedframes.is_set
	|| matrixcontrolcreatetime.is_set;
}

bool RMONMIB::MatrixControlTable::MatrixControlEntry::has_operation() const
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

std::string RMONMIB::MatrixControlTable::MatrixControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixControlTable::MatrixControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixControlEntry";
    ADD_KEY_TOKEN(matrixcontrolindex, "matrixControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixControlTable::MatrixControlEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::MatrixControlTable::MatrixControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixControlTable::MatrixControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::MatrixControlTable::MatrixControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::MatrixControlTable::MatrixControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::MatrixControlTable::MatrixControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixControlIndex" || name == "matrixControlDataSource" || name == "matrixControlTableSize" || name == "matrixControlLastDeleteTime" || name == "matrixControlOwner" || name == "matrixControlStatus" || name == "matrixControlDroppedFrames" || name == "matrixControlCreateTime")
        return true;
    return false;
}

RMONMIB::MatrixSDTable::MatrixSDTable()
    :
    matrixsdentry(this, {"matrixsdindex", "matrixsdsourceaddress", "matrixsddestaddress"})
{

    yang_name = "matrixSDTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::MatrixSDTable::~MatrixSDTable()
{
}

bool RMONMIB::MatrixSDTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matrixsdentry.len(); index++)
    {
        if(matrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::MatrixSDTable::has_operation() const
{
    for (std::size_t index=0; index<matrixsdentry.len(); index++)
    {
        if(matrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::MatrixSDTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixSDTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixSDTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::MatrixSDTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixSDEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::MatrixSDTable::MatrixSDEntry>();
        ent_->parent = this;
        matrixsdentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixSDTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matrixsdentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::MatrixSDTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::MatrixSDTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::MatrixSDTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixSDEntry")
        return true;
    return false;
}

RMONMIB::MatrixSDTable::MatrixSDEntry::MatrixSDEntry()
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

RMONMIB::MatrixSDTable::MatrixSDEntry::~MatrixSDEntry()
{
}

bool RMONMIB::MatrixSDTable::MatrixSDEntry::has_data() const
{
    if (is_presence_container) return true;
    return matrixsdindex.is_set
	|| matrixsdsourceaddress.is_set
	|| matrixsddestaddress.is_set
	|| matrixsdpkts.is_set
	|| matrixsdoctets.is_set
	|| matrixsderrors.is_set;
}

bool RMONMIB::MatrixSDTable::MatrixSDEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matrixsdindex.yfilter)
	|| ydk::is_set(matrixsdsourceaddress.yfilter)
	|| ydk::is_set(matrixsddestaddress.yfilter)
	|| ydk::is_set(matrixsdpkts.yfilter)
	|| ydk::is_set(matrixsdoctets.yfilter)
	|| ydk::is_set(matrixsderrors.yfilter);
}

std::string RMONMIB::MatrixSDTable::MatrixSDEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixSDTable::MatrixSDEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixSDEntry";
    ADD_KEY_TOKEN(matrixsdindex, "matrixSDIndex");
    ADD_KEY_TOKEN(matrixsdsourceaddress, "matrixSDSourceAddress");
    ADD_KEY_TOKEN(matrixsddestaddress, "matrixSDDestAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixSDTable::MatrixSDEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::MatrixSDTable::MatrixSDEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixSDTable::MatrixSDEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::MatrixSDTable::MatrixSDEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::MatrixSDTable::MatrixSDEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::MatrixSDTable::MatrixSDEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixSDIndex" || name == "matrixSDSourceAddress" || name == "matrixSDDestAddress" || name == "matrixSDPkts" || name == "matrixSDOctets" || name == "matrixSDErrors")
        return true;
    return false;
}

RMONMIB::MatrixDSTable::MatrixDSTable()
    :
    matrixdsentry(this, {"matrixdsindex", "matrixdsdestaddress", "matrixdssourceaddress"})
{

    yang_name = "matrixDSTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::MatrixDSTable::~MatrixDSTable()
{
}

bool RMONMIB::MatrixDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matrixdsentry.len(); index++)
    {
        if(matrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::MatrixDSTable::has_operation() const
{
    for (std::size_t index=0; index<matrixdsentry.len(); index++)
    {
        if(matrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::MatrixDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::MatrixDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "matrixDSEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::MatrixDSTable::MatrixDSEntry>();
        ent_->parent = this;
        matrixdsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matrixdsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::MatrixDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::MatrixDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::MatrixDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixDSEntry")
        return true;
    return false;
}

RMONMIB::MatrixDSTable::MatrixDSEntry::MatrixDSEntry()
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

RMONMIB::MatrixDSTable::MatrixDSEntry::~MatrixDSEntry()
{
}

bool RMONMIB::MatrixDSTable::MatrixDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return matrixdsindex.is_set
	|| matrixdsdestaddress.is_set
	|| matrixdssourceaddress.is_set
	|| matrixdspkts.is_set
	|| matrixdsoctets.is_set
	|| matrixdserrors.is_set;
}

bool RMONMIB::MatrixDSTable::MatrixDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matrixdsindex.yfilter)
	|| ydk::is_set(matrixdsdestaddress.yfilter)
	|| ydk::is_set(matrixdssourceaddress.yfilter)
	|| ydk::is_set(matrixdspkts.yfilter)
	|| ydk::is_set(matrixdsoctets.yfilter)
	|| ydk::is_set(matrixdserrors.yfilter);
}

std::string RMONMIB::MatrixDSTable::MatrixDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/matrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::MatrixDSTable::MatrixDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "matrixDSEntry";
    ADD_KEY_TOKEN(matrixdsindex, "matrixDSIndex");
    ADD_KEY_TOKEN(matrixdsdestaddress, "matrixDSDestAddress");
    ADD_KEY_TOKEN(matrixdssourceaddress, "matrixDSSourceAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::MatrixDSTable::MatrixDSEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::MatrixDSTable::MatrixDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::MatrixDSTable::MatrixDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::MatrixDSTable::MatrixDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::MatrixDSTable::MatrixDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::MatrixDSTable::MatrixDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matrixDSIndex" || name == "matrixDSDestAddress" || name == "matrixDSSourceAddress" || name == "matrixDSPkts" || name == "matrixDSOctets" || name == "matrixDSErrors")
        return true;
    return false;
}

RMONMIB::FilterTable::FilterTable()
    :
    filterentry(this, {"filterindex"})
{

    yang_name = "filterTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::FilterTable::~FilterTable()
{
}

bool RMONMIB::FilterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filterentry.len(); index++)
    {
        if(filterentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::FilterTable::has_operation() const
{
    for (std::size_t index=0; index<filterentry.len(); index++)
    {
        if(filterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::FilterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::FilterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::FilterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::FilterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filterEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::FilterTable::FilterEntry>();
        ent_->parent = this;
        filterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::FilterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::FilterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::FilterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::FilterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filterEntry")
        return true;
    return false;
}

RMONMIB::FilterTable::FilterEntry::FilterEntry()
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

RMONMIB::FilterTable::FilterEntry::~FilterEntry()
{
}

bool RMONMIB::FilterTable::FilterEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::FilterTable::FilterEntry::has_operation() const
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

std::string RMONMIB::FilterTable::FilterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/filterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::FilterTable::FilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filterEntry";
    ADD_KEY_TOKEN(filterindex, "filterIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::FilterTable::FilterEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::FilterTable::FilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::FilterTable::FilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::FilterTable::FilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::FilterTable::FilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::FilterTable::FilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filterIndex" || name == "filterChannelIndex" || name == "filterPktDataOffset" || name == "filterPktData" || name == "filterPktDataMask" || name == "filterPktDataNotMask" || name == "filterPktStatus" || name == "filterPktStatusMask" || name == "filterPktStatusNotMask" || name == "filterOwner" || name == "filterStatus" || name == "filterProtocolDirDataLocalIndex" || name == "filterProtocolDirLocalIndex")
        return true;
    return false;
}

RMONMIB::ChannelTable::ChannelTable()
    :
    channelentry(this, {"channelindex"})
{

    yang_name = "channelTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::ChannelTable::~ChannelTable()
{
}

bool RMONMIB::ChannelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channelentry.len(); index++)
    {
        if(channelentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::ChannelTable::has_operation() const
{
    for (std::size_t index=0; index<channelentry.len(); index++)
    {
        if(channelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::ChannelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::ChannelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::ChannelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::ChannelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channelEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::ChannelTable::ChannelEntry>();
        ent_->parent = this;
        channelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::ChannelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : channelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::ChannelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::ChannelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::ChannelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channelEntry")
        return true;
    return false;
}

RMONMIB::ChannelTable::ChannelEntry::ChannelEntry()
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

RMONMIB::ChannelTable::ChannelEntry::~ChannelEntry()
{
}

bool RMONMIB::ChannelTable::ChannelEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::ChannelTable::ChannelEntry::has_operation() const
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

std::string RMONMIB::ChannelTable::ChannelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/channelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::ChannelTable::ChannelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channelEntry";
    ADD_KEY_TOKEN(channelindex, "channelIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::ChannelTable::ChannelEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::ChannelTable::ChannelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::ChannelTable::ChannelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::ChannelTable::ChannelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::ChannelTable::ChannelEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::ChannelTable::ChannelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channelIndex" || name == "channelIfIndex" || name == "channelAcceptType" || name == "channelDataControl" || name == "channelTurnOnEventIndex" || name == "channelTurnOffEventIndex" || name == "channelEventIndex" || name == "channelEventStatus" || name == "channelMatches" || name == "channelDescription" || name == "channelOwner" || name == "channelStatus" || name == "channelDroppedFrames" || name == "channelCreateTime")
        return true;
    return false;
}

RMONMIB::BufferControlTable::BufferControlTable()
    :
    buffercontrolentry(this, {"buffercontrolindex"})
{

    yang_name = "bufferControlTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::BufferControlTable::~BufferControlTable()
{
}

bool RMONMIB::BufferControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<buffercontrolentry.len(); index++)
    {
        if(buffercontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::BufferControlTable::has_operation() const
{
    for (std::size_t index=0; index<buffercontrolentry.len(); index++)
    {
        if(buffercontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::BufferControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::BufferControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::BufferControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::BufferControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bufferControlEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::BufferControlTable::BufferControlEntry>();
        ent_->parent = this;
        buffercontrolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::BufferControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : buffercontrolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::BufferControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::BufferControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::BufferControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferControlEntry")
        return true;
    return false;
}

RMONMIB::BufferControlTable::BufferControlEntry::BufferControlEntry()
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

RMONMIB::BufferControlTable::BufferControlEntry::~BufferControlEntry()
{
}

bool RMONMIB::BufferControlTable::BufferControlEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool RMONMIB::BufferControlTable::BufferControlEntry::has_operation() const
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

std::string RMONMIB::BufferControlTable::BufferControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/bufferControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::BufferControlTable::BufferControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bufferControlEntry";
    ADD_KEY_TOKEN(buffercontrolindex, "bufferControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::BufferControlTable::BufferControlEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::BufferControlTable::BufferControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::BufferControlTable::BufferControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::BufferControlTable::BufferControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::BufferControlTable::BufferControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::BufferControlTable::BufferControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferControlIndex" || name == "bufferControlChannelIndex" || name == "bufferControlFullStatus" || name == "bufferControlFullAction" || name == "bufferControlCaptureSliceSize" || name == "bufferControlDownloadSliceSize" || name == "bufferControlDownloadOffset" || name == "bufferControlMaxOctetsRequested" || name == "bufferControlMaxOctetsGranted" || name == "bufferControlCapturedPackets" || name == "bufferControlTurnOnTime" || name == "bufferControlOwner" || name == "bufferControlStatus")
        return true;
    return false;
}

RMONMIB::CaptureBufferTable::CaptureBufferTable()
    :
    capturebufferentry(this, {"capturebuffercontrolindex", "capturebufferindex"})
{

    yang_name = "captureBufferTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::CaptureBufferTable::~CaptureBufferTable()
{
}

bool RMONMIB::CaptureBufferTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capturebufferentry.len(); index++)
    {
        if(capturebufferentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::CaptureBufferTable::has_operation() const
{
    for (std::size_t index=0; index<capturebufferentry.len(); index++)
    {
        if(capturebufferentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::CaptureBufferTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::CaptureBufferTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::CaptureBufferTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::CaptureBufferTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "captureBufferEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::CaptureBufferTable::CaptureBufferEntry>();
        ent_->parent = this;
        capturebufferentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::CaptureBufferTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : capturebufferentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::CaptureBufferTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::CaptureBufferTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::CaptureBufferTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "captureBufferEntry")
        return true;
    return false;
}

RMONMIB::CaptureBufferTable::CaptureBufferEntry::CaptureBufferEntry()
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

RMONMIB::CaptureBufferTable::CaptureBufferEntry::~CaptureBufferEntry()
{
}

bool RMONMIB::CaptureBufferTable::CaptureBufferEntry::has_data() const
{
    if (is_presence_container) return true;
    return capturebuffercontrolindex.is_set
	|| capturebufferindex.is_set
	|| capturebufferpacketid.is_set
	|| capturebufferpacketdata.is_set
	|| capturebufferpacketlength.is_set
	|| capturebufferpackettime.is_set
	|| capturebufferpacketstatus.is_set;
}

bool RMONMIB::CaptureBufferTable::CaptureBufferEntry::has_operation() const
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

std::string RMONMIB::CaptureBufferTable::CaptureBufferEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/captureBufferTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::CaptureBufferTable::CaptureBufferEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "captureBufferEntry";
    ADD_KEY_TOKEN(capturebuffercontrolindex, "captureBufferControlIndex");
    ADD_KEY_TOKEN(capturebufferindex, "captureBufferIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::CaptureBufferTable::CaptureBufferEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::CaptureBufferTable::CaptureBufferEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::CaptureBufferTable::CaptureBufferEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::CaptureBufferTable::CaptureBufferEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::CaptureBufferTable::CaptureBufferEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::CaptureBufferTable::CaptureBufferEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "captureBufferControlIndex" || name == "captureBufferIndex" || name == "captureBufferPacketID" || name == "captureBufferPacketData" || name == "captureBufferPacketLength" || name == "captureBufferPacketTime" || name == "captureBufferPacketStatus")
        return true;
    return false;
}

RMONMIB::EventTable::EventTable()
    :
    evententry(this, {"eventindex"})
{

    yang_name = "eventTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::EventTable::~EventTable()
{
}

bool RMONMIB::EventTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evententry.len(); index++)
    {
        if(evententry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::EventTable::has_operation() const
{
    for (std::size_t index=0; index<evententry.len(); index++)
    {
        if(evententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::EventTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EventTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EventTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::EventTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::EventTable::EventEntry>();
        ent_->parent = this;
        evententry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EventTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evententry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::EventTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::EventTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::EventTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventEntry")
        return true;
    return false;
}

RMONMIB::EventTable::EventEntry::EventEntry()
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

RMONMIB::EventTable::EventEntry::~EventEntry()
{
}

bool RMONMIB::EventTable::EventEntry::has_data() const
{
    if (is_presence_container) return true;
    return eventindex.is_set
	|| eventdescription.is_set
	|| eventtype.is_set
	|| eventcommunity.is_set
	|| eventlasttimesent.is_set
	|| eventowner.is_set
	|| eventstatus.is_set;
}

bool RMONMIB::EventTable::EventEntry::has_operation() const
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

std::string RMONMIB::EventTable::EventEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/eventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::EventTable::EventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventEntry";
    ADD_KEY_TOKEN(eventindex, "eventIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::EventTable::EventEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RMONMIB::EventTable::EventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::EventTable::EventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::EventTable::EventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::EventTable::EventEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::EventTable::EventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventIndex" || name == "eventDescription" || name == "eventType" || name == "eventCommunity" || name == "eventLastTimeSent" || name == "eventOwner" || name == "eventStatus")
        return true;
    return false;
}

RMONMIB::LogTable::LogTable()
    :
    logentry(this, {"logeventindex", "logindex"})
{

    yang_name = "logTable"; yang_parent_name = "RMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::LogTable::~LogTable()
{
}

bool RMONMIB::LogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logentry.len(); index++)
    {
        if(logentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMONMIB::LogTable::has_operation() const
{
    for (std::size_t index=0; index<logentry.len(); index++)
    {
        if(logentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMONMIB::LogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::LogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::LogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::LogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logEntry")
    {
        auto ent_ = std::make_shared<RMONMIB::LogTable::LogEntry>();
        ent_->parent = this;
        logentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::LogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : logentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RMONMIB::LogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMONMIB::LogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMONMIB::LogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logEntry")
        return true;
    return false;
}

RMONMIB::LogTable::LogEntry::LogEntry()
    :
    logeventindex{YType::int32, "logEventIndex"},
    logindex{YType::int32, "logIndex"},
    logtime{YType::uint32, "logTime"},
    logdescription{YType::str, "logDescription"}
{

    yang_name = "logEntry"; yang_parent_name = "logTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMONMIB::LogTable::LogEntry::~LogEntry()
{
}

bool RMONMIB::LogTable::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    return logeventindex.is_set
	|| logindex.is_set
	|| logtime.is_set
	|| logdescription.is_set;
}

bool RMONMIB::LogTable::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logeventindex.yfilter)
	|| ydk::is_set(logindex.yfilter)
	|| ydk::is_set(logtime.yfilter)
	|| ydk::is_set(logdescription.yfilter);
}

std::string RMONMIB::LogTable::LogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON-MIB:RMON-MIB/logTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMONMIB::LogTable::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logEntry";
    ADD_KEY_TOKEN(logeventindex, "logEventIndex");
    ADD_KEY_TOKEN(logindex, "logIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMONMIB::LogTable::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logeventindex.is_set || is_set(logeventindex.yfilter)) leaf_name_data.push_back(logeventindex.get_name_leafdata());
    if (logindex.is_set || is_set(logindex.yfilter)) leaf_name_data.push_back(logindex.get_name_leafdata());
    if (logtime.is_set || is_set(logtime.yfilter)) leaf_name_data.push_back(logtime.get_name_leafdata());
    if (logdescription.is_set || is_set(logdescription.yfilter)) leaf_name_data.push_back(logdescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RMONMIB::LogTable::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RMONMIB::LogTable::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RMONMIB::LogTable::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMONMIB::LogTable::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMONMIB::LogTable::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logEventIndex" || name == "logIndex" || name == "logTime" || name == "logDescription")
        return true;
    return false;
}

const Enum::YLeaf EntryStatus::valid {1, "valid"};
const Enum::YLeaf EntryStatus::createRequest {2, "createRequest"};
const Enum::YLeaf EntryStatus::underCreation {3, "underCreation"};
const Enum::YLeaf EntryStatus::invalid {4, "invalid"};

const Enum::YLeaf RMONMIB::AlarmTable::AlarmEntry::AlarmSampleType::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf RMONMIB::AlarmTable::AlarmEntry::AlarmSampleType::deltaValue {2, "deltaValue"};

const Enum::YLeaf RMONMIB::AlarmTable::AlarmEntry::AlarmStartupAlarm::risingAlarm {1, "risingAlarm"};
const Enum::YLeaf RMONMIB::AlarmTable::AlarmEntry::AlarmStartupAlarm::fallingAlarm {2, "fallingAlarm"};
const Enum::YLeaf RMONMIB::AlarmTable::AlarmEntry::AlarmStartupAlarm::risingOrFallingAlarm {3, "risingOrFallingAlarm"};

const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNInPkts {1, "hostTopNInPkts"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNOutPkts {2, "hostTopNOutPkts"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNInOctets {3, "hostTopNInOctets"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNOutOctets {4, "hostTopNOutOctets"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNOutErrors {5, "hostTopNOutErrors"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNOutBroadcastPkts {6, "hostTopNOutBroadcastPkts"};
const Enum::YLeaf RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase::hostTopNOutMulticastPkts {7, "hostTopNOutMulticastPkts"};

const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelAcceptType::acceptMatched {1, "acceptMatched"};
const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelAcceptType::acceptFailed {2, "acceptFailed"};

const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelDataControl::on {1, "on"};
const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelDataControl::off {2, "off"};

const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelEventStatus::eventReady {1, "eventReady"};
const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelEventStatus::eventFired {2, "eventFired"};
const Enum::YLeaf RMONMIB::ChannelTable::ChannelEntry::ChannelEventStatus::eventAlwaysReady {3, "eventAlwaysReady"};

const Enum::YLeaf RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullStatus::spaceAvailable {1, "spaceAvailable"};
const Enum::YLeaf RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullStatus::full {2, "full"};

const Enum::YLeaf RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullAction::lockWhenFull {1, "lockWhenFull"};
const Enum::YLeaf RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullAction::wrapWhenFull {2, "wrapWhenFull"};

const Enum::YLeaf RMONMIB::EventTable::EventEntry::EventType::none {1, "none"};
const Enum::YLeaf RMONMIB::EventTable::EventEntry::EventType::log {2, "log"};
const Enum::YLeaf RMONMIB::EventTable::EventEntry::EventType::snmptrap {3, "snmptrap"};
const Enum::YLeaf RMONMIB::EventTable::EventEntry::EventType::logandtrap {4, "logandtrap"};


}
}

