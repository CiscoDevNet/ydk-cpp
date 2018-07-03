#ifndef _RMON_MIB_
#define _RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace RMON_MIB {

class RmonEventsV2 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        RmonEventsV2();
        ~RmonEventsV2();


}; // RmonEventsV2

class RMONMIB : public ydk::Entity
{
    public:
        RMONMIB();
        ~RMONMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class EtherStatsTable; //type: RMONMIB::EtherStatsTable
        class HistoryControlTable; //type: RMONMIB::HistoryControlTable
        class EtherHistoryTable; //type: RMONMIB::EtherHistoryTable
        class AlarmTable; //type: RMONMIB::AlarmTable
        class HostControlTable; //type: RMONMIB::HostControlTable
        class HostTable; //type: RMONMIB::HostTable
        class HostTimeTable; //type: RMONMIB::HostTimeTable
        class HostTopNControlTable; //type: RMONMIB::HostTopNControlTable
        class HostTopNTable; //type: RMONMIB::HostTopNTable
        class MatrixControlTable; //type: RMONMIB::MatrixControlTable
        class MatrixSDTable; //type: RMONMIB::MatrixSDTable
        class MatrixDSTable; //type: RMONMIB::MatrixDSTable
        class FilterTable; //type: RMONMIB::FilterTable
        class ChannelTable; //type: RMONMIB::ChannelTable
        class BufferControlTable; //type: RMONMIB::BufferControlTable
        class CaptureBufferTable; //type: RMONMIB::CaptureBufferTable
        class EventTable; //type: RMONMIB::EventTable
        class LogTable; //type: RMONMIB::LogTable

        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::EtherStatsTable> etherstatstable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HistoryControlTable> historycontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::EtherHistoryTable> etherhistorytable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::AlarmTable> alarmtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HostControlTable> hostcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HostTable> hosttable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HostTimeTable> hosttimetable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HostTopNControlTable> hosttopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::HostTopNTable> hosttopntable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::MatrixControlTable> matrixcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::MatrixSDTable> matrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::MatrixDSTable> matrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::FilterTable> filtertable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::ChannelTable> channeltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::BufferControlTable> buffercontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::CaptureBufferTable> capturebuffertable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::EventTable> eventtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::LogTable> logtable;
        
}; // RMONMIB


class RMONMIB::EtherStatsTable : public ydk::Entity
{
    public:
        EtherStatsTable();
        ~EtherStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EtherStatsEntry; //type: RMONMIB::EtherStatsTable::EtherStatsEntry

        ydk::YList etherstatsentry;
        
}; // RMONMIB::EtherStatsTable


class RMONMIB::EtherStatsTable::EtherStatsEntry : public ydk::Entity
{
    public:
        EtherStatsEntry();
        ~EtherStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf etherstatsindex; //type: int32
        ydk::YLeaf etherstatsdatasource; //type: string
        ydk::YLeaf etherstatsdropevents; //type: uint32
        ydk::YLeaf etherstatsoctets; //type: uint32
        ydk::YLeaf etherstatspkts; //type: uint32
        ydk::YLeaf etherstatsbroadcastpkts; //type: uint32
        ydk::YLeaf etherstatsmulticastpkts; //type: uint32
        ydk::YLeaf etherstatscrcalignerrors; //type: uint32
        ydk::YLeaf etherstatsundersizepkts; //type: uint32
        ydk::YLeaf etherstatsoversizepkts; //type: uint32
        ydk::YLeaf etherstatsfragments; //type: uint32
        ydk::YLeaf etherstatsjabbers; //type: uint32
        ydk::YLeaf etherstatscollisions; //type: uint32
        ydk::YLeaf etherstatspkts64octets; //type: uint32
        ydk::YLeaf etherstatspkts65to127octets; //type: uint32
        ydk::YLeaf etherstatspkts128to255octets; //type: uint32
        ydk::YLeaf etherstatspkts256to511octets; //type: uint32
        ydk::YLeaf etherstatspkts512to1023octets; //type: uint32
        ydk::YLeaf etherstatspkts1024to1518octets; //type: uint32
        ydk::YLeaf etherstatsowner; //type: binary
        ydk::YLeaf etherstatsstatus; //type: EntryStatus
        ydk::YLeaf etherstatsdroppedframes; //type: uint32
        ydk::YLeaf etherstatscreatetime; //type: uint32

}; // RMONMIB::EtherStatsTable::EtherStatsEntry


class RMONMIB::HistoryControlTable : public ydk::Entity
{
    public:
        HistoryControlTable();
        ~HistoryControlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HistoryControlEntry; //type: RMONMIB::HistoryControlTable::HistoryControlEntry

        ydk::YList historycontrolentry;
        
}; // RMONMIB::HistoryControlTable


class RMONMIB::HistoryControlTable::HistoryControlEntry : public ydk::Entity
{
    public:
        HistoryControlEntry();
        ~HistoryControlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf historycontrolindex; //type: int32
        ydk::YLeaf historycontroldatasource; //type: string
        ydk::YLeaf historycontrolbucketsrequested; //type: int32
        ydk::YLeaf historycontrolbucketsgranted; //type: int32
        ydk::YLeaf historycontrolinterval; //type: int32
        ydk::YLeaf historycontrolowner; //type: binary
        ydk::YLeaf historycontrolstatus; //type: EntryStatus
        ydk::YLeaf historycontroldroppedframes; //type: uint32

}; // RMONMIB::HistoryControlTable::HistoryControlEntry


class RMONMIB::EtherHistoryTable : public ydk::Entity
{
    public:
        EtherHistoryTable();
        ~EtherHistoryTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EtherHistoryEntry; //type: RMONMIB::EtherHistoryTable::EtherHistoryEntry

        ydk::YList etherhistoryentry;
        
}; // RMONMIB::EtherHistoryTable


class RMONMIB::EtherHistoryTable::EtherHistoryEntry : public ydk::Entity
{
    public:
        EtherHistoryEntry();
        ~EtherHistoryEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf etherhistoryindex; //type: int32
        ydk::YLeaf etherhistorysampleindex; //type: int32
        ydk::YLeaf etherhistoryintervalstart; //type: uint32
        ydk::YLeaf etherhistorydropevents; //type: uint32
        ydk::YLeaf etherhistoryoctets; //type: uint32
        ydk::YLeaf etherhistorypkts; //type: uint32
        ydk::YLeaf etherhistorybroadcastpkts; //type: uint32
        ydk::YLeaf etherhistorymulticastpkts; //type: uint32
        ydk::YLeaf etherhistorycrcalignerrors; //type: uint32
        ydk::YLeaf etherhistoryundersizepkts; //type: uint32
        ydk::YLeaf etherhistoryoversizepkts; //type: uint32
        ydk::YLeaf etherhistoryfragments; //type: uint32
        ydk::YLeaf etherhistoryjabbers; //type: uint32
        ydk::YLeaf etherhistorycollisions; //type: uint32
        ydk::YLeaf etherhistoryutilization; //type: int32

}; // RMONMIB::EtherHistoryTable::EtherHistoryEntry


class RMONMIB::AlarmTable : public ydk::Entity
{
    public:
        AlarmTable();
        ~AlarmTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmEntry; //type: RMONMIB::AlarmTable::AlarmEntry

        ydk::YList alarmentry;
        
}; // RMONMIB::AlarmTable


class RMONMIB::AlarmTable::AlarmEntry : public ydk::Entity
{
    public:
        AlarmEntry();
        ~AlarmEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarmindex; //type: int32
        ydk::YLeaf alarminterval; //type: int32
        ydk::YLeaf alarmvariable; //type: string
        ydk::YLeaf alarmsampletype; //type: AlarmSampleType
        ydk::YLeaf alarmvalue; //type: int32
        ydk::YLeaf alarmstartupalarm; //type: AlarmStartupAlarm
        ydk::YLeaf alarmrisingthreshold; //type: int32
        ydk::YLeaf alarmfallingthreshold; //type: int32
        ydk::YLeaf alarmrisingeventindex; //type: int32
        ydk::YLeaf alarmfallingeventindex; //type: int32
        ydk::YLeaf alarmowner; //type: binary
        ydk::YLeaf alarmstatus; //type: EntryStatus
        class AlarmSampleType;
        class AlarmStartupAlarm;

}; // RMONMIB::AlarmTable::AlarmEntry


class RMONMIB::HostControlTable : public ydk::Entity
{
    public:
        HostControlTable();
        ~HostControlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HostControlEntry; //type: RMONMIB::HostControlTable::HostControlEntry

        ydk::YList hostcontrolentry;
        
}; // RMONMIB::HostControlTable


class RMONMIB::HostControlTable::HostControlEntry : public ydk::Entity
{
    public:
        HostControlEntry();
        ~HostControlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hostcontrolindex; //type: int32
        ydk::YLeaf hostcontroldatasource; //type: string
        ydk::YLeaf hostcontroltablesize; //type: int32
        ydk::YLeaf hostcontrollastdeletetime; //type: uint32
        ydk::YLeaf hostcontrolowner; //type: binary
        ydk::YLeaf hostcontrolstatus; //type: EntryStatus
        ydk::YLeaf hostcontroldroppedframes; //type: uint32
        ydk::YLeaf hostcontrolcreatetime; //type: uint32

}; // RMONMIB::HostControlTable::HostControlEntry


class RMONMIB::HostTable : public ydk::Entity
{
    public:
        HostTable();
        ~HostTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HostEntry; //type: RMONMIB::HostTable::HostEntry

        ydk::YList hostentry;
        
}; // RMONMIB::HostTable


class RMONMIB::HostTable::HostEntry : public ydk::Entity
{
    public:
        HostEntry();
        ~HostEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hostindex; //type: int32
        ydk::YLeaf hostaddress; //type: binary
        ydk::YLeaf hostcreationorder; //type: int32
        ydk::YLeaf hostinpkts; //type: uint32
        ydk::YLeaf hostoutpkts; //type: uint32
        ydk::YLeaf hostinoctets; //type: uint32
        ydk::YLeaf hostoutoctets; //type: uint32
        ydk::YLeaf hostouterrors; //type: uint32
        ydk::YLeaf hostoutbroadcastpkts; //type: uint32
        ydk::YLeaf hostoutmulticastpkts; //type: uint32

}; // RMONMIB::HostTable::HostEntry


class RMONMIB::HostTimeTable : public ydk::Entity
{
    public:
        HostTimeTable();
        ~HostTimeTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HostTimeEntry; //type: RMONMIB::HostTimeTable::HostTimeEntry

        ydk::YList hosttimeentry;
        
}; // RMONMIB::HostTimeTable


class RMONMIB::HostTimeTable::HostTimeEntry : public ydk::Entity
{
    public:
        HostTimeEntry();
        ~HostTimeEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hosttimeindex; //type: int32
        ydk::YLeaf hosttimecreationorder; //type: int32
        ydk::YLeaf hosttimeaddress; //type: binary
        ydk::YLeaf hosttimeinpkts; //type: uint32
        ydk::YLeaf hosttimeoutpkts; //type: uint32
        ydk::YLeaf hosttimeinoctets; //type: uint32
        ydk::YLeaf hosttimeoutoctets; //type: uint32
        ydk::YLeaf hosttimeouterrors; //type: uint32
        ydk::YLeaf hosttimeoutbroadcastpkts; //type: uint32
        ydk::YLeaf hosttimeoutmulticastpkts; //type: uint32

}; // RMONMIB::HostTimeTable::HostTimeEntry


class RMONMIB::HostTopNControlTable : public ydk::Entity
{
    public:
        HostTopNControlTable();
        ~HostTopNControlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HostTopNControlEntry; //type: RMONMIB::HostTopNControlTable::HostTopNControlEntry

        ydk::YList hosttopncontrolentry;
        
}; // RMONMIB::HostTopNControlTable


class RMONMIB::HostTopNControlTable::HostTopNControlEntry : public ydk::Entity
{
    public:
        HostTopNControlEntry();
        ~HostTopNControlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hosttopncontrolindex; //type: int32
        ydk::YLeaf hosttopnhostindex; //type: int32
        ydk::YLeaf hosttopnratebase; //type: HostTopNRateBase
        ydk::YLeaf hosttopntimeremaining; //type: int32
        ydk::YLeaf hosttopnduration; //type: int32
        ydk::YLeaf hosttopnrequestedsize; //type: int32
        ydk::YLeaf hosttopngrantedsize; //type: int32
        ydk::YLeaf hosttopnstarttime; //type: uint32
        ydk::YLeaf hosttopnowner; //type: binary
        ydk::YLeaf hosttopnstatus; //type: EntryStatus
        class HostTopNRateBase;

}; // RMONMIB::HostTopNControlTable::HostTopNControlEntry


class RMONMIB::HostTopNTable : public ydk::Entity
{
    public:
        HostTopNTable();
        ~HostTopNTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HostTopNEntry; //type: RMONMIB::HostTopNTable::HostTopNEntry

        ydk::YList hosttopnentry;
        
}; // RMONMIB::HostTopNTable


class RMONMIB::HostTopNTable::HostTopNEntry : public ydk::Entity
{
    public:
        HostTopNEntry();
        ~HostTopNEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hosttopnreport; //type: int32
        ydk::YLeaf hosttopnindex; //type: int32
        ydk::YLeaf hosttopnaddress; //type: binary
        ydk::YLeaf hosttopnrate; //type: int32

}; // RMONMIB::HostTopNTable::HostTopNEntry


class RMONMIB::MatrixControlTable : public ydk::Entity
{
    public:
        MatrixControlTable();
        ~MatrixControlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MatrixControlEntry; //type: RMONMIB::MatrixControlTable::MatrixControlEntry

        ydk::YList matrixcontrolentry;
        
}; // RMONMIB::MatrixControlTable


class RMONMIB::MatrixControlTable::MatrixControlEntry : public ydk::Entity
{
    public:
        MatrixControlEntry();
        ~MatrixControlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf matrixcontrolindex; //type: int32
        ydk::YLeaf matrixcontroldatasource; //type: string
        ydk::YLeaf matrixcontroltablesize; //type: int32
        ydk::YLeaf matrixcontrollastdeletetime; //type: uint32
        ydk::YLeaf matrixcontrolowner; //type: binary
        ydk::YLeaf matrixcontrolstatus; //type: EntryStatus
        ydk::YLeaf matrixcontroldroppedframes; //type: uint32
        ydk::YLeaf matrixcontrolcreatetime; //type: uint32

}; // RMONMIB::MatrixControlTable::MatrixControlEntry


class RMONMIB::MatrixSDTable : public ydk::Entity
{
    public:
        MatrixSDTable();
        ~MatrixSDTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MatrixSDEntry; //type: RMONMIB::MatrixSDTable::MatrixSDEntry

        ydk::YList matrixsdentry;
        
}; // RMONMIB::MatrixSDTable


class RMONMIB::MatrixSDTable::MatrixSDEntry : public ydk::Entity
{
    public:
        MatrixSDEntry();
        ~MatrixSDEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf matrixsdindex; //type: int32
        ydk::YLeaf matrixsdsourceaddress; //type: binary
        ydk::YLeaf matrixsddestaddress; //type: binary
        ydk::YLeaf matrixsdpkts; //type: uint32
        ydk::YLeaf matrixsdoctets; //type: uint32
        ydk::YLeaf matrixsderrors; //type: uint32

}; // RMONMIB::MatrixSDTable::MatrixSDEntry


class RMONMIB::MatrixDSTable : public ydk::Entity
{
    public:
        MatrixDSTable();
        ~MatrixDSTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MatrixDSEntry; //type: RMONMIB::MatrixDSTable::MatrixDSEntry

        ydk::YList matrixdsentry;
        
}; // RMONMIB::MatrixDSTable


class RMONMIB::MatrixDSTable::MatrixDSEntry : public ydk::Entity
{
    public:
        MatrixDSEntry();
        ~MatrixDSEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf matrixdsindex; //type: int32
        ydk::YLeaf matrixdsdestaddress; //type: binary
        ydk::YLeaf matrixdssourceaddress; //type: binary
        ydk::YLeaf matrixdspkts; //type: uint32
        ydk::YLeaf matrixdsoctets; //type: uint32
        ydk::YLeaf matrixdserrors; //type: uint32

}; // RMONMIB::MatrixDSTable::MatrixDSEntry


class RMONMIB::FilterTable : public ydk::Entity
{
    public:
        FilterTable();
        ~FilterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FilterEntry; //type: RMONMIB::FilterTable::FilterEntry

        ydk::YList filterentry;
        
}; // RMONMIB::FilterTable


class RMONMIB::FilterTable::FilterEntry : public ydk::Entity
{
    public:
        FilterEntry();
        ~FilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filterindex; //type: int32
        ydk::YLeaf filterchannelindex; //type: int32
        ydk::YLeaf filterpktdataoffset; //type: int32
        ydk::YLeaf filterpktdata; //type: binary
        ydk::YLeaf filterpktdatamask; //type: binary
        ydk::YLeaf filterpktdatanotmask; //type: binary
        ydk::YLeaf filterpktstatus; //type: int32
        ydk::YLeaf filterpktstatusmask; //type: int32
        ydk::YLeaf filterpktstatusnotmask; //type: int32
        ydk::YLeaf filterowner; //type: binary
        ydk::YLeaf filterstatus; //type: EntryStatus
        ydk::YLeaf filterprotocoldirdatalocalindex; //type: int32
        ydk::YLeaf filterprotocoldirlocalindex; //type: int32

}; // RMONMIB::FilterTable::FilterEntry


class RMONMIB::ChannelTable : public ydk::Entity
{
    public:
        ChannelTable();
        ~ChannelTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ChannelEntry; //type: RMONMIB::ChannelTable::ChannelEntry

        ydk::YList channelentry;
        
}; // RMONMIB::ChannelTable


class RMONMIB::ChannelTable::ChannelEntry : public ydk::Entity
{
    public:
        ChannelEntry();
        ~ChannelEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf channelindex; //type: int32
        ydk::YLeaf channelifindex; //type: int32
        ydk::YLeaf channelaccepttype; //type: ChannelAcceptType
        ydk::YLeaf channeldatacontrol; //type: ChannelDataControl
        ydk::YLeaf channelturnoneventindex; //type: int32
        ydk::YLeaf channelturnoffeventindex; //type: int32
        ydk::YLeaf channeleventindex; //type: int32
        ydk::YLeaf channeleventstatus; //type: ChannelEventStatus
        ydk::YLeaf channelmatches; //type: uint32
        ydk::YLeaf channeldescription; //type: string
        ydk::YLeaf channelowner; //type: binary
        ydk::YLeaf channelstatus; //type: EntryStatus
        ydk::YLeaf channeldroppedframes; //type: uint32
        ydk::YLeaf channelcreatetime; //type: uint32
        class ChannelAcceptType;
        class ChannelDataControl;
        class ChannelEventStatus;

}; // RMONMIB::ChannelTable::ChannelEntry


class RMONMIB::BufferControlTable : public ydk::Entity
{
    public:
        BufferControlTable();
        ~BufferControlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BufferControlEntry; //type: RMONMIB::BufferControlTable::BufferControlEntry

        ydk::YList buffercontrolentry;
        
}; // RMONMIB::BufferControlTable


class RMONMIB::BufferControlTable::BufferControlEntry : public ydk::Entity
{
    public:
        BufferControlEntry();
        ~BufferControlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf buffercontrolindex; //type: int32
        ydk::YLeaf buffercontrolchannelindex; //type: int32
        ydk::YLeaf buffercontrolfullstatus; //type: BufferControlFullStatus
        ydk::YLeaf buffercontrolfullaction; //type: BufferControlFullAction
        ydk::YLeaf buffercontrolcaptureslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadoffset; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsrequested; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsgranted; //type: int32
        ydk::YLeaf buffercontrolcapturedpackets; //type: int32
        ydk::YLeaf buffercontrolturnontime; //type: uint32
        ydk::YLeaf buffercontrolowner; //type: binary
        ydk::YLeaf buffercontrolstatus; //type: EntryStatus
        class BufferControlFullStatus;
        class BufferControlFullAction;

}; // RMONMIB::BufferControlTable::BufferControlEntry


class RMONMIB::CaptureBufferTable : public ydk::Entity
{
    public:
        CaptureBufferTable();
        ~CaptureBufferTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CaptureBufferEntry; //type: RMONMIB::CaptureBufferTable::CaptureBufferEntry

        ydk::YList capturebufferentry;
        
}; // RMONMIB::CaptureBufferTable


class RMONMIB::CaptureBufferTable::CaptureBufferEntry : public ydk::Entity
{
    public:
        CaptureBufferEntry();
        ~CaptureBufferEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capturebuffercontrolindex; //type: int32
        ydk::YLeaf capturebufferindex; //type: int32
        ydk::YLeaf capturebufferpacketid; //type: int32
        ydk::YLeaf capturebufferpacketdata; //type: binary
        ydk::YLeaf capturebufferpacketlength; //type: int32
        ydk::YLeaf capturebufferpackettime; //type: int32
        ydk::YLeaf capturebufferpacketstatus; //type: int32

}; // RMONMIB::CaptureBufferTable::CaptureBufferEntry


class RMONMIB::EventTable : public ydk::Entity
{
    public:
        EventTable();
        ~EventTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventEntry; //type: RMONMIB::EventTable::EventEntry

        ydk::YList evententry;
        
}; // RMONMIB::EventTable


class RMONMIB::EventTable::EventEntry : public ydk::Entity
{
    public:
        EventEntry();
        ~EventEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf eventindex; //type: int32
        ydk::YLeaf eventdescription; //type: string
        ydk::YLeaf eventtype; //type: EventType
        ydk::YLeaf eventcommunity; //type: binary
        ydk::YLeaf eventlasttimesent; //type: uint32
        ydk::YLeaf eventowner; //type: binary
        ydk::YLeaf eventstatus; //type: EntryStatus
        class EventType;

}; // RMONMIB::EventTable::EventEntry


class RMONMIB::LogTable : public ydk::Entity
{
    public:
        LogTable();
        ~LogTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LogEntry; //type: RMONMIB::LogTable::LogEntry

        ydk::YList logentry;
        
}; // RMONMIB::LogTable


class RMONMIB::LogTable::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logeventindex; //type: int32
        ydk::YLeaf logindex; //type: int32
        ydk::YLeaf logtime; //type: uint32
        ydk::YLeaf logdescription; //type: string

}; // RMONMIB::LogTable::LogEntry

class EntryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

};

class RMONMIB::AlarmTable::AlarmEntry::AlarmSampleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class RMONMIB::AlarmTable::AlarmEntry::AlarmStartupAlarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingAlarm;
        static const ydk::Enum::YLeaf fallingAlarm;
        static const ydk::Enum::YLeaf risingOrFallingAlarm;

};

class RMONMIB::HostTopNControlTable::HostTopNControlEntry::HostTopNRateBase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostTopNInPkts;
        static const ydk::Enum::YLeaf hostTopNOutPkts;
        static const ydk::Enum::YLeaf hostTopNInOctets;
        static const ydk::Enum::YLeaf hostTopNOutOctets;
        static const ydk::Enum::YLeaf hostTopNOutErrors;
        static const ydk::Enum::YLeaf hostTopNOutBroadcastPkts;
        static const ydk::Enum::YLeaf hostTopNOutMulticastPkts;

};

class RMONMIB::ChannelTable::ChannelEntry::ChannelAcceptType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptMatched;
        static const ydk::Enum::YLeaf acceptFailed;

};

class RMONMIB::ChannelTable::ChannelEntry::ChannelDataControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class RMONMIB::ChannelTable::ChannelEntry::ChannelEventStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eventReady;
        static const ydk::Enum::YLeaf eventFired;
        static const ydk::Enum::YLeaf eventAlwaysReady;

};

class RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spaceAvailable;
        static const ydk::Enum::YLeaf full;

};

class RMONMIB::BufferControlTable::BufferControlEntry::BufferControlFullAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lockWhenFull;
        static const ydk::Enum::YLeaf wrapWhenFull;

};

class RMONMIB::EventTable::EventEntry::EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf logandtrap;

};


}
}

#endif /* _RMON_MIB_ */

