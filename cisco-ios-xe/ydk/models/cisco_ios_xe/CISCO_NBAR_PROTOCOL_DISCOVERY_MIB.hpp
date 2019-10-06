#ifndef _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_
#define _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

class CISCONBARPROTOCOLDISCOVERYMIB : public ydk::Entity
{
    public:
        CISCONBARPROTOCOLDISCOVERYMIB();
        ~CISCONBARPROTOCOLDISCOVERYMIB();

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

        class CnpdNotificationsConfig; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdNotificationsConfig
        class CnpdStatusTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable
        class CnpdAllStatsTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable
        class CnpdTopNConfigTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable
        class CnpdTopNStatsTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable
        class CnpdThresholdConfigTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable
        class CnpdThresholdHistoryTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable
        class CnpdSupportedProtocolsTable; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable

        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdNotificationsConfig> cnpdnotificationsconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable> cnpdstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable> cnpdallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable> cnpdtopnconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable> cnpdtopnstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable> cnpdthresholdconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable> cnpdthresholdhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable> cnpdsupportedprotocolstable;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdNotificationsConfig : public ydk::Entity
{
    public:
        CnpdNotificationsConfig();
        ~CnpdNotificationsConfig();

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

        ydk::YLeaf cnpdnotificationsenable; //type: boolean

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdNotificationsConfig


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable : public ydk::Entity
{
    public:
        CnpdStatusTable();
        ~CnpdStatusTable();

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

        class CnpdStatusEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable::CnpdStatusEntry

        ydk::YList cnpdstatusentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable::CnpdStatusEntry : public ydk::Entity
{
    public:
        CnpdStatusEntry();
        ~CnpdStatusEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdstatuspdenable; //type: boolean
        ydk::YLeaf cnpdstatuslastupdatetime; //type: uint32

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdStatusTable::CnpdStatusEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable : public ydk::Entity
{
    public:
        CnpdAllStatsTable();
        ~CnpdAllStatsTable();

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

        class CnpdAllStatsEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable::CnpdAllStatsEntry

        ydk::YList cnpdallstatsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable::CnpdAllStatsEntry : public ydk::Entity
{
    public:
        CnpdAllStatsEntry();
        ~CnpdAllStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdallstatsprotocolsindex; //type: uint32
        ydk::YLeaf cnpdallstatsprotocolname; //type: binary
        ydk::YLeaf cnpdallstatsinpkts; //type: uint32
        ydk::YLeaf cnpdallstatsoutpkts; //type: uint32
        ydk::YLeaf cnpdallstatsinbytes; //type: uint32
        ydk::YLeaf cnpdallstatsoutbytes; //type: uint32
        ydk::YLeaf cnpdallstatshcinpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcoutpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcinbytes; //type: uint64
        ydk::YLeaf cnpdallstatshcoutbytes; //type: uint64
        ydk::YLeaf cnpdallstatsinbitrate; //type: uint32
        ydk::YLeaf cnpdallstatsoutbitrate; //type: uint32

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdAllStatsTable::CnpdAllStatsEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable : public ydk::Entity
{
    public:
        CnpdTopNConfigTable();
        ~CnpdTopNConfigTable();

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

        class CnpdTopNConfigEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable::CnpdTopNConfigEntry

        ydk::YList cnpdtopnconfigentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable::CnpdTopNConfigEntry : public ydk::Entity
{
    public:
        CnpdTopNConfigEntry();
        ~CnpdTopNConfigEntry();

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

        ydk::YLeaf cnpdtopnconfigindex; //type: uint32
        ydk::YLeaf cnpdtopnconfigifindex; //type: int32
        ydk::YLeaf cnpdtopnconfigstatsselect; //type: CiscoPdDataType
        ydk::YLeaf cnpdtopnconfigsampletime; //type: uint32
        ydk::YLeaf cnpdtopnconfigrequestedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfiggrantedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfigtime; //type: uint32
        ydk::YLeaf cnpdtopnconfigstatus; //type: RowStatus

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable::CnpdTopNConfigEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable : public ydk::Entity
{
    public:
        CnpdTopNStatsTable();
        ~CnpdTopNStatsTable();

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

        class CnpdTopNStatsEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable::CnpdTopNStatsEntry

        ydk::YList cnpdtopnstatsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable::CnpdTopNStatsEntry : public ydk::Entity
{
    public:
        CnpdTopNStatsEntry();
        ~CnpdTopNStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNConfigTable::CnpdTopNConfigEntry::cnpdtopnconfigindex)
        ydk::YLeaf cnpdtopnconfigindex;
        ydk::YLeaf cnpdtopnstatsindex; //type: uint32
        ydk::YLeaf cnpdtopnstatsprotocolname; //type: binary
        ydk::YLeaf cnpdtopnstatsrate; //type: uint32
        ydk::YLeaf cnpdtopnstatshcrate; //type: uint64

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdTopNStatsTable::CnpdTopNStatsEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable : public ydk::Entity
{
    public:
        CnpdThresholdConfigTable();
        ~CnpdThresholdConfigTable();

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

        class CnpdThresholdConfigEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable::CnpdThresholdConfigEntry

        ydk::YList cnpdthresholdconfigentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable::CnpdThresholdConfigEntry : public ydk::Entity
{
    public:
        CnpdThresholdConfigEntry();
        ~CnpdThresholdConfigEntry();

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

        ydk::YLeaf cnpdthresholdconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdconfigifindex; //type: int32
        ydk::YLeaf cnpdthresholdconfiginterval; //type: uint32
        ydk::YLeaf cnpdthresholdconfigsampletype; //type: CnpdThresholdConfigSampleType
        ydk::YLeaf cnpdthresholdconfigprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdconfigprotocolany; //type: boolean
        ydk::YLeaf cnpdthresholdconfigstatsselect; //type: CiscoPdDataType
        ydk::YLeaf cnpdthresholdconfigstartup; //type: CnpdThresholdConfigStartup
        ydk::YLeaf cnpdthresholdconfigrising; //type: uint32
        ydk::YLeaf cnpdthresholdconfigfalling; //type: uint32
        ydk::YLeaf cnpdthresholdconfigstatus; //type: RowStatus
        class CnpdThresholdConfigSampleType;
        class CnpdThresholdConfigStartup;

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable::CnpdThresholdConfigEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable : public ydk::Entity
{
    public:
        CnpdThresholdHistoryTable();
        ~CnpdThresholdHistoryTable();

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

        class CnpdThresholdHistoryEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable::CnpdThresholdHistoryEntry

        ydk::YList cnpdthresholdhistoryentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable::CnpdThresholdHistoryEntry : public ydk::Entity
{
    public:
        CnpdThresholdHistoryEntry();
        ~CnpdThresholdHistoryEntry();

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

        ydk::YLeaf cnpdthresholdhistoryindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryvalue; //type: uint32
        ydk::YLeaf cnpdthresholdhistorytype; //type: CnpdThresholdHistoryType
        ydk::YLeaf cnpdthresholdhistorytime; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdhistorystatsselect; //type: CiscoPdDataType
        class CnpdThresholdHistoryType;

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable::CnpdThresholdHistoryEntry


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable : public ydk::Entity
{
    public:
        CnpdSupportedProtocolsTable();
        ~CnpdSupportedProtocolsTable();

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

        class CnpdSupportedProtocolsEntry; //type: CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable::CnpdSupportedProtocolsEntry

        ydk::YList cnpdsupportedprotocolsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable


class CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable::CnpdSupportedProtocolsEntry : public ydk::Entity
{
    public:
        CnpdSupportedProtocolsEntry();
        ~CnpdSupportedProtocolsEntry();

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

        ydk::YLeaf cnpdsupportedprotocolsindex; //type: uint32
        ydk::YLeaf cnpdsupportedprotocolsname; //type: binary

}; // CISCONBARPROTOCOLDISCOVERYMIB::CnpdSupportedProtocolsTable::CnpdSupportedProtocolsEntry

class CiscoPdDataType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bitRateIn;
        static const ydk::Enum::YLeaf bitRateOut;
        static const ydk::Enum::YLeaf bitRateSum;
        static const ydk::Enum::YLeaf byteCountIn;
        static const ydk::Enum::YLeaf byteCountOut;
        static const ydk::Enum::YLeaf byteCountSum;
        static const ydk::Enum::YLeaf packetCountIn;
        static const ydk::Enum::YLeaf packetCountOut;
        static const ydk::Enum::YLeaf packetCountSum;

        static int get_enum_value(const std::string & name) {
            if (name == "bitRateIn") return 1;
            if (name == "bitRateOut") return 2;
            if (name == "bitRateSum") return 3;
            if (name == "byteCountIn") return 4;
            if (name == "byteCountOut") return 5;
            if (name == "byteCountSum") return 6;
            if (name == "packetCountIn") return 7;
            if (name == "packetCountOut") return 8;
            if (name == "packetCountSum") return 9;
            return -1;
        }
};

class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable::CnpdThresholdConfigEntry::CnpdThresholdConfigSampleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

        static int get_enum_value(const std::string & name) {
            if (name == "absoluteValue") return 1;
            if (name == "deltaValue") return 2;
            return -1;
        }
};

class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdConfigTable::CnpdThresholdConfigEntry::CnpdThresholdConfigStartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

        static int get_enum_value(const std::string & name) {
            if (name == "rising") return 1;
            if (name == "falling") return 2;
            if (name == "risingOrFalling") return 3;
            return -1;
        }
};

class CISCONBARPROTOCOLDISCOVERYMIB::CnpdThresholdHistoryTable::CnpdThresholdHistoryEntry::CnpdThresholdHistoryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingBreach;
        static const ydk::Enum::YLeaf fallingBreach;

        static int get_enum_value(const std::string & name) {
            if (name == "risingBreach") return 1;
            if (name == "fallingBreach") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_ */

