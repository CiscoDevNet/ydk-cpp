#ifndef _CISCO_FLASH_MIB_
#define _CISCO_FLASH_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_FLASH_MIB {

class CISCOFLASHMIB : public ydk::Entity
{
    public:
        CISCOFLASHMIB();
        ~CISCOFLASHMIB();

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

        class CiscoFlashDevice; //type: CISCOFLASHMIB::CiscoFlashDevice
        class CiscoFlashCfg; //type: CISCOFLASHMIB::CiscoFlashCfg
        class CiscoFlashDeviceTable; //type: CISCOFLASHMIB::CiscoFlashDeviceTable
        class CiscoFlashChipTable; //type: CISCOFLASHMIB::CiscoFlashChipTable
        class CiscoFlashPartitionTable; //type: CISCOFLASHMIB::CiscoFlashPartitionTable
        class CiscoFlashFileTable; //type: CISCOFLASHMIB::CiscoFlashFileTable
        class CiscoFlashFileByTypeTable; //type: CISCOFLASHMIB::CiscoFlashFileByTypeTable
        class CiscoFlashCopyTable; //type: CISCOFLASHMIB::CiscoFlashCopyTable
        class CiscoFlashPartitioningTable; //type: CISCOFLASHMIB::CiscoFlashPartitioningTable
        class CiscoFlashMiscOpTable; //type: CISCOFLASHMIB::CiscoFlashMiscOpTable

        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDevice> ciscoflashdevice;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashCfg> ciscoflashcfg;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDeviceTable> ciscoflashdevicetable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashChipTable> ciscoflashchiptable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashPartitionTable> ciscoflashpartitiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashFileTable> ciscoflashfiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashFileByTypeTable> ciscoflashfilebytypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashCopyTable> ciscoflashcopytable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashPartitioningTable> ciscoflashpartitioningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashMiscOpTable> ciscoflashmiscoptable;
        
}; // CISCOFLASHMIB


class CISCOFLASHMIB::CiscoFlashDevice : public ydk::Entity
{
    public:
        CiscoFlashDevice();
        ~CiscoFlashDevice();

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

        ydk::YLeaf ciscoflashdevicessupported; //type: uint32

}; // CISCOFLASHMIB::CiscoFlashDevice


class CISCOFLASHMIB::CiscoFlashCfg : public ydk::Entity
{
    public:
        CiscoFlashCfg();
        ~CiscoFlashCfg();

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

        ydk::YLeaf ciscoflashcfgdevinsnotifenable; //type: boolean
        ydk::YLeaf ciscoflashcfgdevremnotifenable; //type: boolean
        ydk::YLeaf ciscoflashpartitionlowspacenotifenable; //type: boolean

}; // CISCOFLASHMIB::CiscoFlashCfg


class CISCOFLASHMIB::CiscoFlashDeviceTable : public ydk::Entity
{
    public:
        CiscoFlashDeviceTable();
        ~CiscoFlashDeviceTable();

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

        class CiscoFlashDeviceEntry; //type: CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry

        ydk::YList ciscoflashdeviceentry;
        
}; // CISCOFLASHMIB::CiscoFlashDeviceTable


class CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry : public ydk::Entity
{
    public:
        CiscoFlashDeviceEntry();
        ~CiscoFlashDeviceEntry();

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

        ydk::YLeaf ciscoflashdeviceindex; //type: uint32
        ydk::YLeaf ciscoflashdevicesize; //type: uint32
        ydk::YLeaf ciscoflashdeviceminpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashdevicemaxpartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicepartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicechipcount; //type: int32
        ydk::YLeaf ciscoflashdevicename; //type: string
        ydk::YLeaf ciscoflashdevicedescr; //type: string
        ydk::YLeaf ciscoflashdevicecontroller; //type: string
        ydk::YLeaf ciscoflashdevicecard; //type: string
        ydk::YLeaf ciscoflashdeviceprogrammingjumper; //type: CiscoFlashDeviceProgrammingJumper
        ydk::YLeaf ciscoflashdeviceinittime; //type: uint32
        ydk::YLeaf ciscoflashdeviceremovable; //type: boolean
        ydk::YLeaf ciscoflashphyentindex; //type: int32
        ydk::YLeaf ciscoflashdevicenameextended; //type: string
        ydk::YLeaf ciscoflashdevicesizeextended; //type: uint64
        ydk::YLeaf ciscoflashdeviceminpartitionsizeextended; //type: uint64
        class CiscoFlashDeviceProgrammingJumper;

}; // CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry


class CISCOFLASHMIB::CiscoFlashChipTable : public ydk::Entity
{
    public:
        CiscoFlashChipTable();
        ~CiscoFlashChipTable();

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

        class CiscoFlashChipEntry; //type: CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry

        ydk::YList ciscoflashchipentry;
        
}; // CISCOFLASHMIB::CiscoFlashChipTable


class CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry : public ydk::Entity
{
    public:
        CiscoFlashChipEntry();
        ~CiscoFlashChipEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashchipindex; //type: int32
        ydk::YLeaf ciscoflashchipcode; //type: string
        ydk::YLeaf ciscoflashchipdescr; //type: string
        ydk::YLeaf ciscoflashchipwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchiperaseretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxeraseretries; //type: uint32

}; // CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry


class CISCOFLASHMIB::CiscoFlashPartitionTable : public ydk::Entity
{
    public:
        CiscoFlashPartitionTable();
        ~CiscoFlashPartitionTable();

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

        class CiscoFlashPartitionEntry; //type: CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry

        ydk::YList ciscoflashpartitionentry;
        
}; // CISCOFLASHMIB::CiscoFlashPartitionTable


class CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry : public ydk::Entity
{
    public:
        CiscoFlashPartitionEntry();
        ~CiscoFlashPartitionEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashpartitionindex; //type: uint32
        ydk::YLeaf ciscoflashpartitionstartchip; //type: int32
        ydk::YLeaf ciscoflashpartitionendchip; //type: int32
        ydk::YLeaf ciscoflashpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashpartitionfreespace; //type: uint32
        ydk::YLeaf ciscoflashpartitionfilecount; //type: uint32
        ydk::YLeaf ciscoflashpartitionchecksumalgorithm; //type: CiscoFlashPartitionChecksumAlgorithm
        ydk::YLeaf ciscoflashpartitionstatus; //type: CiscoFlashPartitionStatus
        ydk::YLeaf ciscoflashpartitionupgrademethod; //type: CiscoFlashPartitionUpgradeMethod
        ydk::YLeaf ciscoflashpartitionname; //type: string
        ydk::YLeaf ciscoflashpartitionneederasure; //type: boolean
        ydk::YLeaf ciscoflashpartitionfilenamelength; //type: int32
        ydk::YLeaf ciscoflashpartitionsizeextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionfreespaceextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionlowspacenotifthreshold; //type: int32
        class CiscoFlashPartitionChecksumAlgorithm;
        class CiscoFlashPartitionStatus;
        class CiscoFlashPartitionUpgradeMethod;

}; // CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry


class CISCOFLASHMIB::CiscoFlashFileTable : public ydk::Entity
{
    public:
        CiscoFlashFileTable();
        ~CiscoFlashFileTable();

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

        class CiscoFlashFileEntry; //type: CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry

        ydk::YList ciscoflashfileentry;
        
}; // CISCOFLASHMIB::CiscoFlashFileTable


class CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry : public ydk::Entity
{
    public:
        CiscoFlashFileEntry();
        ~CiscoFlashFileEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        ydk::YLeaf ciscoflashfileindex; //type: uint32
        ydk::YLeaf ciscoflashfilesize; //type: uint32
        ydk::YLeaf ciscoflashfilechecksum; //type: binary
        ydk::YLeaf ciscoflashfilestatus; //type: CiscoFlashFileStatus
        ydk::YLeaf ciscoflashfilename; //type: string
        ydk::YLeaf ciscoflashfiletype; //type: FlashFileType
        ydk::YLeaf ciscoflashfiledate; //type: string
        class CiscoFlashFileStatus;

}; // CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry


class CISCOFLASHMIB::CiscoFlashFileByTypeTable : public ydk::Entity
{
    public:
        CiscoFlashFileByTypeTable();
        ~CiscoFlashFileByTypeTable();

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

        class CiscoFlashFileByTypeEntry; //type: CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry

        ydk::YList ciscoflashfilebytypeentry;
        
}; // CISCOFLASHMIB::CiscoFlashFileByTypeTable


class CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry : public ydk::Entity
{
    public:
        CiscoFlashFileByTypeEntry();
        ~CiscoFlashFileByTypeEntry();

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

        ydk::YLeaf ciscoflashfiletype; //type: FlashFileType
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::ciscoflashfileindex)
        ydk::YLeaf ciscoflashfileindex;
        ydk::YLeaf ciscoflashfilebytypesize; //type: uint32
        ydk::YLeaf ciscoflashfilebytypechecksum; //type: binary
        ydk::YLeaf ciscoflashfilebytypestatus; //type: CiscoFlashFileByTypeStatus
        ydk::YLeaf ciscoflashfilebytypename; //type: string
        ydk::YLeaf ciscoflashfilebytypedate; //type: string
        class CiscoFlashFileByTypeStatus;

}; // CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry


class CISCOFLASHMIB::CiscoFlashCopyTable : public ydk::Entity
{
    public:
        CiscoFlashCopyTable();
        ~CiscoFlashCopyTable();

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

        class CiscoFlashCopyEntry; //type: CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry

        ydk::YList ciscoflashcopyentry;
        
}; // CISCOFLASHMIB::CiscoFlashCopyTable


class CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry : public ydk::Entity
{
    public:
        CiscoFlashCopyEntry();
        ~CiscoFlashCopyEntry();

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

        ydk::YLeaf ciscoflashcopyserialnumber; //type: int32
        ydk::YLeaf ciscoflashcopycommand; //type: CiscoFlashCopyCommand
        ydk::YLeaf ciscoflashcopyprotocol; //type: CiscoFlashCopyProtocol
        ydk::YLeaf ciscoflashcopyserveraddress; //type: string
        ydk::YLeaf ciscoflashcopysourcename; //type: string
        ydk::YLeaf ciscoflashcopydestinationname; //type: string
        ydk::YLeaf ciscoflashcopyremoteusername; //type: string
        ydk::YLeaf ciscoflashcopystatus; //type: CiscoFlashCopyStatus
        ydk::YLeaf ciscoflashcopynotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashcopytime; //type: uint32
        ydk::YLeaf ciscoflashcopyentrystatus; //type: RowStatus
        ydk::YLeaf ciscoflashcopyverify; //type: boolean
        ydk::YLeaf ciscoflashcopyserveraddrtype; //type: InetAddressType
        ydk::YLeaf ciscoflashcopyserveraddrrev1; //type: binary
        ydk::YLeaf ciscoflashcopyremotepassword; //type: string
        class CiscoFlashCopyCommand;
        class CiscoFlashCopyProtocol;
        class CiscoFlashCopyStatus;

}; // CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry


class CISCOFLASHMIB::CiscoFlashPartitioningTable : public ydk::Entity
{
    public:
        CiscoFlashPartitioningTable();
        ~CiscoFlashPartitioningTable();

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

        class CiscoFlashPartitioningEntry; //type: CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry

        ydk::YList ciscoflashpartitioningentry;
        
}; // CISCOFLASHMIB::CiscoFlashPartitioningTable


class CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry : public ydk::Entity
{
    public:
        CiscoFlashPartitioningEntry();
        ~CiscoFlashPartitioningEntry();

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

        ydk::YLeaf ciscoflashpartitioningserialnumber; //type: int32
        ydk::YLeaf ciscoflashpartitioningcommand; //type: CiscoFlashPartitioningCommand
        ydk::YLeaf ciscoflashpartitioningdestinationname; //type: string
        ydk::YLeaf ciscoflashpartitioningpartitioncount; //type: uint32
        ydk::YLeaf ciscoflashpartitioningpartitionsizes; //type: string
        ydk::YLeaf ciscoflashpartitioningstatus; //type: CiscoFlashPartitioningStatus
        ydk::YLeaf ciscoflashpartitioningnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashpartitioningtime; //type: uint32
        ydk::YLeaf ciscoflashpartitioningentrystatus; //type: RowStatus
        class CiscoFlashPartitioningCommand;
        class CiscoFlashPartitioningStatus;

}; // CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry


class CISCOFLASHMIB::CiscoFlashMiscOpTable : public ydk::Entity
{
    public:
        CiscoFlashMiscOpTable();
        ~CiscoFlashMiscOpTable();

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

        class CiscoFlashMiscOpEntry; //type: CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry

        ydk::YList ciscoflashmiscopentry;
        
}; // CISCOFLASHMIB::CiscoFlashMiscOpTable


class CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry : public ydk::Entity
{
    public:
        CiscoFlashMiscOpEntry();
        ~CiscoFlashMiscOpEntry();

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

        ydk::YLeaf ciscoflashmiscopserialnumber; //type: int32
        ydk::YLeaf ciscoflashmiscopcommand; //type: CiscoFlashMiscOpCommand
        ydk::YLeaf ciscoflashmiscopdestinationname; //type: string
        ydk::YLeaf ciscoflashmiscopstatus; //type: CiscoFlashMiscOpStatus
        ydk::YLeaf ciscoflashmiscopnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashmiscoptime; //type: uint32
        ydk::YLeaf ciscoflashmiscopentrystatus; //type: RowStatus
        class CiscoFlashMiscOpCommand;
        class CiscoFlashMiscOpStatus;

}; // CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry

class FlashFileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf image;
        static const ydk::Enum::YLeaf directory;
        static const ydk::Enum::YLeaf crashinfo;

};

class CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::CiscoFlashDeviceProgrammingJumper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf notInstalled;
        static const ydk::Enum::YLeaf unknown;

};

class CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionChecksumAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simpleChecksum;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf simpleCRC;

};

class CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf readOnly;
        static const ydk::Enum::YLeaf runFromFlash;
        static const ydk::Enum::YLeaf readWrite;

};

class CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionUpgradeMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf rxbootFLH;
        static const ydk::Enum::YLeaf direct;

};

class CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::CiscoFlashFileStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::CiscoFlashFileByTypeStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyToFlashWithErase;
        static const ydk::Enum::YLeaf copyToFlashWithoutErase;
        static const ydk::Enum::YLeaf copyFromFlash;
        static const ydk::Enum::YLeaf copyFromFlhLog;

};

class CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf lex;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyOperationPending;
        static const ydk::Enum::YLeaf copyInProgress;
        static const ydk::Enum::YLeaf copyOperationSuccess;
        static const ydk::Enum::YLeaf copyInvalidOperation;
        static const ydk::Enum::YLeaf copyInvalidProtocol;
        static const ydk::Enum::YLeaf copyInvalidSourceName;
        static const ydk::Enum::YLeaf copyInvalidDestName;
        static const ydk::Enum::YLeaf copyInvalidServerAddress;
        static const ydk::Enum::YLeaf copyDeviceBusy;
        static const ydk::Enum::YLeaf copyDeviceOpenError;
        static const ydk::Enum::YLeaf copyDeviceError;
        static const ydk::Enum::YLeaf copyDeviceNotProgrammable;
        static const ydk::Enum::YLeaf copyDeviceFull;
        static const ydk::Enum::YLeaf copyFileOpenError;
        static const ydk::Enum::YLeaf copyFileTransferError;
        static const ydk::Enum::YLeaf copyFileChecksumError;
        static const ydk::Enum::YLeaf copyNoMemory;
        static const ydk::Enum::YLeaf copyUnknownFailure;
        static const ydk::Enum::YLeaf copyInvalidSignature;
        static const ydk::Enum::YLeaf copyProhibited;

};

class CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partition;

};

class CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partitioningInProgress;
        static const ydk::Enum::YLeaf partitioningOperationSuccess;
        static const ydk::Enum::YLeaf partitioningInvalidOperation;
        static const ydk::Enum::YLeaf partitioningInvalidDestName;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionCount;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionSizes;
        static const ydk::Enum::YLeaf partitioningDeviceBusy;
        static const ydk::Enum::YLeaf partitioningDeviceOpenError;
        static const ydk::Enum::YLeaf partitioningDeviceError;
        static const ydk::Enum::YLeaf partitioningNoMemory;
        static const ydk::Enum::YLeaf partitioningUnknownFailure;

};

class CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erase;
        static const ydk::Enum::YLeaf verify;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf undelete;
        static const ydk::Enum::YLeaf squeeze;
        static const ydk::Enum::YLeaf format;

};

class CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf miscOpInProgress;
        static const ydk::Enum::YLeaf miscOpOperationSuccess;
        static const ydk::Enum::YLeaf miscOpInvalidOperation;
        static const ydk::Enum::YLeaf miscOpInvalidDestName;
        static const ydk::Enum::YLeaf miscOpDeviceBusy;
        static const ydk::Enum::YLeaf miscOpDeviceOpenError;
        static const ydk::Enum::YLeaf miscOpDeviceError;
        static const ydk::Enum::YLeaf miscOpDeviceNotProgrammable;
        static const ydk::Enum::YLeaf miscOpFileOpenError;
        static const ydk::Enum::YLeaf miscOpFileDeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileUndeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileChecksumError;
        static const ydk::Enum::YLeaf miscOpNoMemory;
        static const ydk::Enum::YLeaf miscOpUnknownFailure;
        static const ydk::Enum::YLeaf miscOpSqueezeFailure;
        static const ydk::Enum::YLeaf miscOpNoSuchFile;
        static const ydk::Enum::YLeaf miscOpFormatFailure;

};


}
}

#endif /* _CISCO_FLASH_MIB_ */

