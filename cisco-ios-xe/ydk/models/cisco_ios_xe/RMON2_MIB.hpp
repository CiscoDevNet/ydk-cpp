#ifndef _RMON2_MIB_
#define _RMON2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RMON2_MIB {

class RMON2MIB : public ydk::Entity
{
    public:
        RMON2MIB();
        ~RMON2MIB();

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

        class ProtocolDir; //type: RMON2MIB::ProtocolDir
        class AddressMap; //type: RMON2MIB::AddressMap
        class ProbeConfig; //type: RMON2MIB::ProbeConfig
        class ProtocolDirTable; //type: RMON2MIB::ProtocolDirTable
        class ProtocolDistControlTable; //type: RMON2MIB::ProtocolDistControlTable
        class ProtocolDistStatsTable; //type: RMON2MIB::ProtocolDistStatsTable
        class AddressMapControlTable; //type: RMON2MIB::AddressMapControlTable
        class AddressMapTable; //type: RMON2MIB::AddressMapTable
        class HlHostControlTable; //type: RMON2MIB::HlHostControlTable
        class NlHostTable; //type: RMON2MIB::NlHostTable
        class HlMatrixControlTable; //type: RMON2MIB::HlMatrixControlTable
        class NlMatrixSDTable; //type: RMON2MIB::NlMatrixSDTable
        class NlMatrixDSTable; //type: RMON2MIB::NlMatrixDSTable
        class NlMatrixTopNControlTable; //type: RMON2MIB::NlMatrixTopNControlTable
        class NlMatrixTopNTable; //type: RMON2MIB::NlMatrixTopNTable
        class AlHostTable; //type: RMON2MIB::AlHostTable
        class AlMatrixSDTable; //type: RMON2MIB::AlMatrixSDTable
        class AlMatrixDSTable; //type: RMON2MIB::AlMatrixDSTable
        class AlMatrixTopNControlTable; //type: RMON2MIB::AlMatrixTopNControlTable
        class AlMatrixTopNTable; //type: RMON2MIB::AlMatrixTopNTable
        class UsrHistoryControlTable; //type: RMON2MIB::UsrHistoryControlTable
        class UsrHistoryObjectTable; //type: RMON2MIB::UsrHistoryObjectTable
        class UsrHistoryTable; //type: RMON2MIB::UsrHistoryTable
        class SerialConfigTable; //type: RMON2MIB::SerialConfigTable
        class NetConfigTable; //type: RMON2MIB::NetConfigTable
        class TrapDestTable; //type: RMON2MIB::TrapDestTable
        class SerialConnectionTable; //type: RMON2MIB::SerialConnectionTable

        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDir> protocoldir;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AddressMap> addressmap;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::ProbeConfig> probeconfig;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable> protocoldirtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDistControlTable> protocoldistcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDistStatsTable> protocoldiststatstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AddressMapControlTable> addressmapcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AddressMapTable> addressmaptable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::HlHostControlTable> hlhostcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NlHostTable> nlhosttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::HlMatrixControlTable> hlmatrixcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixSDTable> nlmatrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixDSTable> nlmatrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixTopNControlTable> nlmatrixtopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixTopNTable> nlmatrixtopntable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AlHostTable> alhosttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AlMatrixSDTable> almatrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AlMatrixDSTable> almatrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AlMatrixTopNControlTable> almatrixtopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::AlMatrixTopNTable> almatrixtopntable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryControlTable> usrhistorycontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryObjectTable> usrhistoryobjecttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryTable> usrhistorytable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::SerialConfigTable> serialconfigtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::NetConfigTable> netconfigtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::TrapDestTable> trapdesttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::SerialConnectionTable> serialconnectiontable;
        
}; // RMON2MIB


class RMON2MIB::ProtocolDir : public ydk::Entity
{
    public:
        ProtocolDir();
        ~ProtocolDir();

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

        ydk::YLeaf protocoldirlastchange; //type: uint32

}; // RMON2MIB::ProtocolDir


class RMON2MIB::AddressMap : public ydk::Entity
{
    public:
        AddressMap();
        ~AddressMap();

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

        ydk::YLeaf addressmapinserts; //type: uint32
        ydk::YLeaf addressmapdeletes; //type: uint32
        ydk::YLeaf addressmapmaxdesiredentries; //type: int32

}; // RMON2MIB::AddressMap


class RMON2MIB::ProbeConfig : public ydk::Entity
{
    public:
        ProbeConfig();
        ~ProbeConfig();

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

        ydk::YLeaf probecapabilities; //type: binary
        ydk::YLeaf probesoftwarerev; //type: string
        ydk::YLeaf probehardwarerev; //type: string
        ydk::YLeaf probedatetime; //type: binary
        ydk::YLeaf proberesetcontrol; //type: ProbeResetControl
        ydk::YLeaf probedownloadfile; //type: string
        ydk::YLeaf probedownloadtftpserver; //type: string
        ydk::YLeaf probedownloadaction; //type: ProbeDownloadAction
        ydk::YLeaf probedownloadstatus; //type: ProbeDownloadStatus
        ydk::YLeaf netdefaultgateway; //type: string
        class ProbeResetControl;
        class ProbeDownloadAction;
        class ProbeDownloadStatus;

}; // RMON2MIB::ProbeConfig


class RMON2MIB::ProtocolDirTable : public ydk::Entity
{
    public:
        ProtocolDirTable();
        ~ProtocolDirTable();

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

        class ProtocolDirEntry; //type: RMON2MIB::ProtocolDirTable::ProtocolDirEntry

        ydk::YList protocoldirentry;
        
}; // RMON2MIB::ProtocolDirTable


class RMON2MIB::ProtocolDirTable::ProtocolDirEntry : public ydk::Entity
{
    public:
        ProtocolDirEntry();
        ~ProtocolDirEntry();

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

        ydk::YLeaf protocoldirid; //type: binary
        ydk::YLeaf protocoldirparameters; //type: binary
        ydk::YLeaf protocoldirlocalindex; //type: int32
        ydk::YLeaf protocoldirdescr; //type: string
        ydk::YLeaf protocoldirtype; //type: binary
        ydk::YLeaf protocoldiraddressmapconfig; //type: ProtocolDirAddressMapConfig
        ydk::YLeaf protocoldirhostconfig; //type: ProtocolDirHostConfig
        ydk::YLeaf protocoldirmatrixconfig; //type: ProtocolDirMatrixConfig
        ydk::YLeaf protocoldirowner; //type: binary
        ydk::YLeaf protocoldirstatus; //type: RowStatus
        class ProtocolDirAddressMapConfig;
        class ProtocolDirHostConfig;
        class ProtocolDirMatrixConfig;

}; // RMON2MIB::ProtocolDirTable::ProtocolDirEntry


class RMON2MIB::ProtocolDistControlTable : public ydk::Entity
{
    public:
        ProtocolDistControlTable();
        ~ProtocolDistControlTable();

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

        class ProtocolDistControlEntry; //type: RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry

        ydk::YList protocoldistcontrolentry;
        
}; // RMON2MIB::ProtocolDistControlTable


class RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry : public ydk::Entity
{
    public:
        ProtocolDistControlEntry();
        ~ProtocolDistControlEntry();

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

        ydk::YLeaf protocoldistcontrolindex; //type: int32
        ydk::YLeaf protocoldistcontroldatasource; //type: string
        ydk::YLeaf protocoldistcontroldroppedframes; //type: uint32
        ydk::YLeaf protocoldistcontrolcreatetime; //type: uint32
        ydk::YLeaf protocoldistcontrolowner; //type: binary
        ydk::YLeaf protocoldistcontrolstatus; //type: RowStatus

}; // RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry


class RMON2MIB::ProtocolDistStatsTable : public ydk::Entity
{
    public:
        ProtocolDistStatsTable();
        ~ProtocolDistStatsTable();

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

        class ProtocolDistStatsEntry; //type: RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry

        ydk::YList protocoldiststatsentry;
        
}; // RMON2MIB::ProtocolDistStatsTable


class RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry : public ydk::Entity
{
    public:
        ProtocolDistStatsEntry();
        ~ProtocolDistStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::protocoldistcontrolindex)
        ydk::YLeaf protocoldistcontrolindex;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf protocoldiststatspkts; //type: uint32
        ydk::YLeaf protocoldiststatsoctets; //type: uint32

}; // RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry


class RMON2MIB::AddressMapControlTable : public ydk::Entity
{
    public:
        AddressMapControlTable();
        ~AddressMapControlTable();

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

        class AddressMapControlEntry; //type: RMON2MIB::AddressMapControlTable::AddressMapControlEntry

        ydk::YList addressmapcontrolentry;
        
}; // RMON2MIB::AddressMapControlTable


class RMON2MIB::AddressMapControlTable::AddressMapControlEntry : public ydk::Entity
{
    public:
        AddressMapControlEntry();
        ~AddressMapControlEntry();

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

        ydk::YLeaf addressmapcontrolindex; //type: int32
        ydk::YLeaf addressmapcontroldatasource; //type: string
        ydk::YLeaf addressmapcontroldroppedframes; //type: uint32
        ydk::YLeaf addressmapcontrolowner; //type: binary
        ydk::YLeaf addressmapcontrolstatus; //type: RowStatus

}; // RMON2MIB::AddressMapControlTable::AddressMapControlEntry


class RMON2MIB::AddressMapTable : public ydk::Entity
{
    public:
        AddressMapTable();
        ~AddressMapTable();

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

        class AddressMapEntry; //type: RMON2MIB::AddressMapTable::AddressMapEntry

        ydk::YList addressmapentry;
        
}; // RMON2MIB::AddressMapTable


class RMON2MIB::AddressMapTable::AddressMapEntry : public ydk::Entity
{
    public:
        AddressMapEntry();
        ~AddressMapEntry();

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

        ydk::YLeaf addressmaptimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf addressmapnetworkaddress; //type: binary
        ydk::YLeaf addressmapsource; //type: string
        ydk::YLeaf addressmapphysicaladdress; //type: binary
        ydk::YLeaf addressmaplastchange; //type: uint32

}; // RMON2MIB::AddressMapTable::AddressMapEntry


class RMON2MIB::HlHostControlTable : public ydk::Entity
{
    public:
        HlHostControlTable();
        ~HlHostControlTable();

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

        class HlHostControlEntry; //type: RMON2MIB::HlHostControlTable::HlHostControlEntry

        ydk::YList hlhostcontrolentry;
        
}; // RMON2MIB::HlHostControlTable


class RMON2MIB::HlHostControlTable::HlHostControlEntry : public ydk::Entity
{
    public:
        HlHostControlEntry();
        ~HlHostControlEntry();

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

        ydk::YLeaf hlhostcontrolindex; //type: int32
        ydk::YLeaf hlhostcontroldatasource; //type: string
        ydk::YLeaf hlhostcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolnlinserts; //type: uint32
        ydk::YLeaf hlhostcontrolnldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolalinserts; //type: uint32
        ydk::YLeaf hlhostcontrolaldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolowner; //type: binary
        ydk::YLeaf hlhostcontrolstatus; //type: RowStatus

}; // RMON2MIB::HlHostControlTable::HlHostControlEntry


class RMON2MIB::NlHostTable : public ydk::Entity
{
    public:
        NlHostTable();
        ~NlHostTable();

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

        class NlHostEntry; //type: RMON2MIB::NlHostTable::NlHostEntry

        ydk::YList nlhostentry;
        
}; // RMON2MIB::NlHostTable


class RMON2MIB::NlHostTable::NlHostEntry : public ydk::Entity
{
    public:
        NlHostEntry();
        ~NlHostEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlHostControlTable::HlHostControlEntry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf nlhosttimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlhostaddress; //type: binary
        ydk::YLeaf nlhostinpkts; //type: uint32
        ydk::YLeaf nlhostoutpkts; //type: uint32
        ydk::YLeaf nlhostinoctets; //type: uint32
        ydk::YLeaf nlhostoutoctets; //type: uint32
        ydk::YLeaf nlhostoutmacnonunicastpkts; //type: uint32
        ydk::YLeaf nlhostcreatetime; //type: uint32

}; // RMON2MIB::NlHostTable::NlHostEntry


class RMON2MIB::HlMatrixControlTable : public ydk::Entity
{
    public:
        HlMatrixControlTable();
        ~HlMatrixControlTable();

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

        class HlMatrixControlEntry; //type: RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry

        ydk::YList hlmatrixcontrolentry;
        
}; // RMON2MIB::HlMatrixControlTable


class RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry : public ydk::Entity
{
    public:
        HlMatrixControlEntry();
        ~HlMatrixControlEntry();

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

        ydk::YLeaf hlmatrixcontrolindex; //type: int32
        ydk::YLeaf hlmatrixcontroldatasource; //type: string
        ydk::YLeaf hlmatrixcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolnldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolaldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolowner; //type: binary
        ydk::YLeaf hlmatrixcontrolstatus; //type: RowStatus

}; // RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry


class RMON2MIB::NlMatrixSDTable : public ydk::Entity
{
    public:
        NlMatrixSDTable();
        ~NlMatrixSDTable();

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

        class NlMatrixSDEntry; //type: RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry

        ydk::YList nlmatrixsdentry;
        
}; // RMON2MIB::NlMatrixSDTable


class RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry : public ydk::Entity
{
    public:
        NlMatrixSDEntry();
        ~NlMatrixSDEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixsdtimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixsdsourceaddress; //type: binary
        ydk::YLeaf nlmatrixsddestaddress; //type: binary
        ydk::YLeaf nlmatrixsdpkts; //type: uint32
        ydk::YLeaf nlmatrixsdoctets; //type: uint32
        ydk::YLeaf nlmatrixsdcreatetime; //type: uint32

}; // RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry


class RMON2MIB::NlMatrixDSTable : public ydk::Entity
{
    public:
        NlMatrixDSTable();
        ~NlMatrixDSTable();

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

        class NlMatrixDSEntry; //type: RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry

        ydk::YList nlmatrixdsentry;
        
}; // RMON2MIB::NlMatrixDSTable


class RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry : public ydk::Entity
{
    public:
        NlMatrixDSEntry();
        ~NlMatrixDSEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixdstimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixdsdestaddress; //type: binary
        ydk::YLeaf nlmatrixdssourceaddress; //type: binary
        ydk::YLeaf nlmatrixdspkts; //type: uint32
        ydk::YLeaf nlmatrixdsoctets; //type: uint32
        ydk::YLeaf nlmatrixdscreatetime; //type: uint32

}; // RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry


class RMON2MIB::NlMatrixTopNControlTable : public ydk::Entity
{
    public:
        NlMatrixTopNControlTable();
        ~NlMatrixTopNControlTable();

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

        class NlMatrixTopNControlEntry; //type: RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry

        ydk::YList nlmatrixtopncontrolentry;
        
}; // RMON2MIB::NlMatrixTopNControlTable


class RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry : public ydk::Entity
{
    public:
        NlMatrixTopNControlEntry();
        ~NlMatrixTopNControlEntry();

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

        ydk::YLeaf nlmatrixtopncontrolindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolratebase; //type: NlMatrixTopNControlRateBase
        ydk::YLeaf nlmatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolduration; //type: int32
        ydk::YLeaf nlmatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolowner; //type: binary
        ydk::YLeaf nlmatrixtopncontrolstatus; //type: RowStatus
        class NlMatrixTopNControlRateBase;

}; // RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry


class RMON2MIB::NlMatrixTopNTable : public ydk::Entity
{
    public:
        NlMatrixTopNTable();
        ~NlMatrixTopNTable();

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

        class NlMatrixTopNEntry; //type: RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry

        ydk::YList nlmatrixtopnentry;
        
}; // RMON2MIB::NlMatrixTopNTable


class RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry : public ydk::Entity
{
    public:
        NlMatrixTopNEntry();
        ~NlMatrixTopNEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::nlmatrixtopncontrolindex)
        ydk::YLeaf nlmatrixtopncontrolindex;
        ydk::YLeaf nlmatrixtopnindex; //type: int32
        ydk::YLeaf nlmatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf nlmatrixtopnsourceaddress; //type: binary
        ydk::YLeaf nlmatrixtopndestaddress; //type: binary
        ydk::YLeaf nlmatrixtopnpktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnoctetrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreverseoctetrate; //type: uint32

}; // RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry


class RMON2MIB::AlHostTable : public ydk::Entity
{
    public:
        AlHostTable();
        ~AlHostTable();

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

        class AlHostEntry; //type: RMON2MIB::AlHostTable::AlHostEntry

        ydk::YList alhostentry;
        
}; // RMON2MIB::AlHostTable


class RMON2MIB::AlHostTable::AlHostEntry : public ydk::Entity
{
    public:
        AlHostEntry();
        ~AlHostEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlHostControlTable::HlHostControlEntry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf alhosttimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlHostTable::NlHostEntry::nlhostaddress)
        ydk::YLeaf nlhostaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf alhostinpkts; //type: uint32
        ydk::YLeaf alhostoutpkts; //type: uint32
        ydk::YLeaf alhostinoctets; //type: uint32
        ydk::YLeaf alhostoutoctets; //type: uint32
        ydk::YLeaf alhostcreatetime; //type: uint32

}; // RMON2MIB::AlHostTable::AlHostEntry


class RMON2MIB::AlMatrixSDTable : public ydk::Entity
{
    public:
        AlMatrixSDTable();
        ~AlMatrixSDTable();

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

        class AlMatrixSDEntry; //type: RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry

        ydk::YList almatrixsdentry;
        
}; // RMON2MIB::AlMatrixSDTable


class RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry : public ydk::Entity
{
    public:
        AlMatrixSDEntry();
        ~AlMatrixSDEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixsdtimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::nlmatrixsdsourceaddress)
        ydk::YLeaf nlmatrixsdsourceaddress;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::nlmatrixsddestaddress)
        ydk::YLeaf nlmatrixsddestaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixsdpkts; //type: uint32
        ydk::YLeaf almatrixsdoctets; //type: uint32
        ydk::YLeaf almatrixsdcreatetime; //type: uint32

}; // RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry


class RMON2MIB::AlMatrixDSTable : public ydk::Entity
{
    public:
        AlMatrixDSTable();
        ~AlMatrixDSTable();

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

        class AlMatrixDSEntry; //type: RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry

        ydk::YList almatrixdsentry;
        
}; // RMON2MIB::AlMatrixDSTable


class RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry : public ydk::Entity
{
    public:
        AlMatrixDSEntry();
        ~AlMatrixDSEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixdstimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::nlmatrixdsdestaddress)
        ydk::YLeaf nlmatrixdsdestaddress;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::nlmatrixdssourceaddress)
        ydk::YLeaf nlmatrixdssourceaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::ProtocolDirTable::ProtocolDirEntry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixdspkts; //type: uint32
        ydk::YLeaf almatrixdsoctets; //type: uint32
        ydk::YLeaf almatrixdscreatetime; //type: uint32

}; // RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry


class RMON2MIB::AlMatrixTopNControlTable : public ydk::Entity
{
    public:
        AlMatrixTopNControlTable();
        ~AlMatrixTopNControlTable();

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

        class AlMatrixTopNControlEntry; //type: RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry

        ydk::YList almatrixtopncontrolentry;
        
}; // RMON2MIB::AlMatrixTopNControlTable


class RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry : public ydk::Entity
{
    public:
        AlMatrixTopNControlEntry();
        ~AlMatrixTopNControlEntry();

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

        ydk::YLeaf almatrixtopncontrolindex; //type: int32
        ydk::YLeaf almatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf almatrixtopncontrolratebase; //type: AlMatrixTopNControlRateBase
        ydk::YLeaf almatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf almatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf almatrixtopncontrolduration; //type: int32
        ydk::YLeaf almatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf almatrixtopncontrolowner; //type: binary
        ydk::YLeaf almatrixtopncontrolstatus; //type: RowStatus
        class AlMatrixTopNControlRateBase;

}; // RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry


class RMON2MIB::AlMatrixTopNTable : public ydk::Entity
{
    public:
        AlMatrixTopNTable();
        ~AlMatrixTopNTable();

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

        class AlMatrixTopNEntry; //type: RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry

        ydk::YList almatrixtopnentry;
        
}; // RMON2MIB::AlMatrixTopNTable


class RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry : public ydk::Entity
{
    public:
        AlMatrixTopNEntry();
        ~AlMatrixTopNEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::almatrixtopncontrolindex)
        ydk::YLeaf almatrixtopncontrolindex;
        ydk::YLeaf almatrixtopnindex; //type: int32
        ydk::YLeaf almatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnsourceaddress; //type: binary
        ydk::YLeaf almatrixtopndestaddress; //type: binary
        ydk::YLeaf almatrixtopnappprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnpktrate; //type: uint32
        ydk::YLeaf almatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf almatrixtopnoctetrate; //type: uint32
        ydk::YLeaf almatrixtopnreverseoctetrate; //type: uint32

}; // RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry


class RMON2MIB::UsrHistoryControlTable : public ydk::Entity
{
    public:
        UsrHistoryControlTable();
        ~UsrHistoryControlTable();

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

        class UsrHistoryControlEntry; //type: RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry

        ydk::YList usrhistorycontrolentry;
        
}; // RMON2MIB::UsrHistoryControlTable


class RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry : public ydk::Entity
{
    public:
        UsrHistoryControlEntry();
        ~UsrHistoryControlEntry();

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

        ydk::YLeaf usrhistorycontrolindex; //type: int32
        ydk::YLeaf usrhistorycontrolobjects; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsrequested; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsgranted; //type: int32
        ydk::YLeaf usrhistorycontrolinterval; //type: int32
        ydk::YLeaf usrhistorycontrolowner; //type: binary
        ydk::YLeaf usrhistorycontrolstatus; //type: RowStatus

}; // RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry


class RMON2MIB::UsrHistoryObjectTable : public ydk::Entity
{
    public:
        UsrHistoryObjectTable();
        ~UsrHistoryObjectTable();

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

        class UsrHistoryObjectEntry; //type: RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry

        ydk::YList usrhistoryobjectentry;
        
}; // RMON2MIB::UsrHistoryObjectTable


class RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry : public ydk::Entity
{
    public:
        UsrHistoryObjectEntry();
        ~UsrHistoryObjectEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistoryobjectindex; //type: int32
        ydk::YLeaf usrhistoryobjectvariable; //type: string
        ydk::YLeaf usrhistoryobjectsampletype; //type: UsrHistoryObjectSampleType
        class UsrHistoryObjectSampleType;

}; // RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry


class RMON2MIB::UsrHistoryTable : public ydk::Entity
{
    public:
        UsrHistoryTable();
        ~UsrHistoryTable();

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

        class UsrHistoryEntry; //type: RMON2MIB::UsrHistoryTable::UsrHistoryEntry

        ydk::YList usrhistoryentry;
        
}; // RMON2MIB::UsrHistoryTable


class RMON2MIB::UsrHistoryTable::UsrHistoryEntry : public ydk::Entity
{
    public:
        UsrHistoryEntry();
        ~UsrHistoryEntry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistorysampleindex; //type: int32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::usrhistoryobjectindex)
        ydk::YLeaf usrhistoryobjectindex;
        ydk::YLeaf usrhistoryintervalstart; //type: uint32
        ydk::YLeaf usrhistoryintervalend; //type: uint32
        ydk::YLeaf usrhistoryabsvalue; //type: uint32
        ydk::YLeaf usrhistoryvalstatus; //type: UsrHistoryValStatus
        class UsrHistoryValStatus;

}; // RMON2MIB::UsrHistoryTable::UsrHistoryEntry


class RMON2MIB::SerialConfigTable : public ydk::Entity
{
    public:
        SerialConfigTable();
        ~SerialConfigTable();

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

        class SerialConfigEntry; //type: RMON2MIB::SerialConfigTable::SerialConfigEntry

        ydk::YList serialconfigentry;
        
}; // RMON2MIB::SerialConfigTable


class RMON2MIB::SerialConfigTable::SerialConfigEntry : public ydk::Entity
{
    public:
        SerialConfigEntry();
        ~SerialConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::RFC1213_MIB::RFC1213MIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf serialmode; //type: SerialMode
        ydk::YLeaf serialprotocol; //type: SerialProtocol
        ydk::YLeaf serialtimeout; //type: int32
        ydk::YLeaf serialmodeminitstring; //type: string
        ydk::YLeaf serialmodemhangupstring; //type: string
        ydk::YLeaf serialmodemconnectresp; //type: string
        ydk::YLeaf serialmodemnoconnectresp; //type: string
        ydk::YLeaf serialdialouttimeout; //type: int32
        ydk::YLeaf serialstatus; //type: RowStatus
        class SerialMode;
        class SerialProtocol;

}; // RMON2MIB::SerialConfigTable::SerialConfigEntry


class RMON2MIB::NetConfigTable : public ydk::Entity
{
    public:
        NetConfigTable();
        ~NetConfigTable();

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

        class NetConfigEntry; //type: RMON2MIB::NetConfigTable::NetConfigEntry

        ydk::YList netconfigentry;
        
}; // RMON2MIB::NetConfigTable


class RMON2MIB::NetConfigTable::NetConfigEntry : public ydk::Entity
{
    public:
        NetConfigEntry();
        ~NetConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::RFC1213_MIB::RFC1213MIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf netconfigipaddress; //type: string
        ydk::YLeaf netconfigsubnetmask; //type: string
        ydk::YLeaf netconfigstatus; //type: RowStatus

}; // RMON2MIB::NetConfigTable::NetConfigEntry


class RMON2MIB::TrapDestTable : public ydk::Entity
{
    public:
        TrapDestTable();
        ~TrapDestTable();

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

        class TrapDestEntry; //type: RMON2MIB::TrapDestTable::TrapDestEntry

        ydk::YList trapdestentry;
        
}; // RMON2MIB::TrapDestTable


class RMON2MIB::TrapDestTable::TrapDestEntry : public ydk::Entity
{
    public:
        TrapDestEntry();
        ~TrapDestEntry();

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

        ydk::YLeaf trapdestindex; //type: int32
        ydk::YLeaf trapdestcommunity; //type: binary
        ydk::YLeaf trapdestprotocol; //type: TrapDestProtocol
        ydk::YLeaf trapdestaddress; //type: binary
        ydk::YLeaf trapdestowner; //type: binary
        ydk::YLeaf trapdeststatus; //type: RowStatus
        class TrapDestProtocol;

}; // RMON2MIB::TrapDestTable::TrapDestEntry


class RMON2MIB::SerialConnectionTable : public ydk::Entity
{
    public:
        SerialConnectionTable();
        ~SerialConnectionTable();

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

        class SerialConnectionEntry; //type: RMON2MIB::SerialConnectionTable::SerialConnectionEntry

        ydk::YList serialconnectionentry;
        
}; // RMON2MIB::SerialConnectionTable


class RMON2MIB::SerialConnectionTable::SerialConnectionEntry : public ydk::Entity
{
    public:
        SerialConnectionEntry();
        ~SerialConnectionEntry();

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

        ydk::YLeaf serialconnectindex; //type: int32
        ydk::YLeaf serialconnectdestipaddress; //type: string
        ydk::YLeaf serialconnecttype; //type: SerialConnectType
        ydk::YLeaf serialconnectdialstring; //type: string
        ydk::YLeaf serialconnectswitchconnectseq; //type: string
        ydk::YLeaf serialconnectswitchdisconnectseq; //type: string
        ydk::YLeaf serialconnectswitchresetseq; //type: string
        ydk::YLeaf serialconnectowner; //type: binary
        ydk::YLeaf serialconnectstatus; //type: RowStatus
        class SerialConnectType;

}; // RMON2MIB::SerialConnectionTable::SerialConnectionEntry

class RMON2MIB::ProbeConfig::ProbeResetControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf warmBoot;
        static const ydk::Enum::YLeaf coldBoot;

        static int get_enum_value(const std::string & name) {
            if (name == "running") return 1;
            if (name == "warmBoot") return 2;
            if (name == "coldBoot") return 3;
            return -1;
        }
};

class RMON2MIB::ProbeConfig::ProbeDownloadAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notDownloading;
        static const ydk::Enum::YLeaf downloadToPROM;
        static const ydk::Enum::YLeaf downloadToRAM;

        static int get_enum_value(const std::string & name) {
            if (name == "notDownloading") return 1;
            if (name == "downloadToPROM") return 2;
            if (name == "downloadToRAM") return 3;
            return -1;
        }
};

class RMON2MIB::ProbeConfig::ProbeDownloadStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downloadSuccess;
        static const ydk::Enum::YLeaf downloadStatusUnknown;
        static const ydk::Enum::YLeaf downloadGeneralError;
        static const ydk::Enum::YLeaf downloadNoResponseFromServer;
        static const ydk::Enum::YLeaf downloadChecksumError;
        static const ydk::Enum::YLeaf downloadIncompatibleImage;
        static const ydk::Enum::YLeaf downloadTftpFileNotFound;
        static const ydk::Enum::YLeaf downloadTftpAccessViolation;

        static int get_enum_value(const std::string & name) {
            if (name == "downloadSuccess") return 1;
            if (name == "downloadStatusUnknown") return 2;
            if (name == "downloadGeneralError") return 3;
            if (name == "downloadNoResponseFromServer") return 4;
            if (name == "downloadChecksumError") return 5;
            if (name == "downloadIncompatibleImage") return 6;
            if (name == "downloadTftpFileNotFound") return 7;
            if (name == "downloadTftpAccessViolation") return 8;
            return -1;
        }
};

class RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirAddressMapConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

        static int get_enum_value(const std::string & name) {
            if (name == "notSupported") return 1;
            if (name == "supportedOff") return 2;
            if (name == "supportedOn") return 3;
            return -1;
        }
};

class RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirHostConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

        static int get_enum_value(const std::string & name) {
            if (name == "notSupported") return 1;
            if (name == "supportedOff") return 2;
            if (name == "supportedOn") return 3;
            return -1;
        }
};

class RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirMatrixConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

        static int get_enum_value(const std::string & name) {
            if (name == "notSupported") return 1;
            if (name == "supportedOff") return 2;
            if (name == "supportedOn") return 3;
            return -1;
        }
};

class RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::NlMatrixTopNControlRateBase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nlMatrixTopNPkts;
        static const ydk::Enum::YLeaf nlMatrixTopNOctets;

        static int get_enum_value(const std::string & name) {
            if (name == "nlMatrixTopNPkts") return 1;
            if (name == "nlMatrixTopNOctets") return 2;
            return -1;
        }
};

class RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlRateBase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsPkts;
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsOctets;
        static const ydk::Enum::YLeaf alMatrixTopNAllPkts;
        static const ydk::Enum::YLeaf alMatrixTopNAllOctets;

        static int get_enum_value(const std::string & name) {
            if (name == "alMatrixTopNTerminalsPkts") return 1;
            if (name == "alMatrixTopNTerminalsOctets") return 2;
            if (name == "alMatrixTopNAllPkts") return 3;
            if (name == "alMatrixTopNAllOctets") return 4;
            return -1;
        }
};

class RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::UsrHistoryObjectSampleType : public ydk::Enum
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

class RMON2MIB::UsrHistoryTable::UsrHistoryEntry::UsrHistoryValStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valueNotAvailable;
        static const ydk::Enum::YLeaf valuePositive;
        static const ydk::Enum::YLeaf valueNegative;

        static int get_enum_value(const std::string & name) {
            if (name == "valueNotAvailable") return 1;
            if (name == "valuePositive") return 2;
            if (name == "valueNegative") return 3;
            return -1;
        }
};

class RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;

        static int get_enum_value(const std::string & name) {
            if (name == "direct") return 1;
            if (name == "modem") return 2;
            return -1;
        }
};

class RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf slip;
        static const ydk::Enum::YLeaf ppp;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "slip") return 2;
            if (name == "ppp") return 3;
            return -1;
        }
};

class RMON2MIB::TrapDestTable::TrapDestEntry::TrapDestProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipx;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "ipx") return 2;
            return -1;
        }
};

class RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf modemSwitch;

        static int get_enum_value(const std::string & name) {
            if (name == "direct") return 1;
            if (name == "modem") return 2;
            if (name == "switch") return 3;
            if (name == "modemSwitch") return 4;
            return -1;
        }
};


}
}

#endif /* _RMON2_MIB_ */

