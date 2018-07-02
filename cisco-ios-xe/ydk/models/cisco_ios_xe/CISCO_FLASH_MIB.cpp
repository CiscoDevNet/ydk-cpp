
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FLASH_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_FLASH_MIB {

CISCOFLASHMIB::CISCOFLASHMIB()
    :
    ciscoflashdevice(std::make_shared<CISCOFLASHMIB::CiscoFlashDevice>())
    , ciscoflashcfg(std::make_shared<CISCOFLASHMIB::CiscoFlashCfg>())
    , ciscoflashdevicetable(std::make_shared<CISCOFLASHMIB::CiscoFlashDeviceTable>())
    , ciscoflashchiptable(std::make_shared<CISCOFLASHMIB::CiscoFlashChipTable>())
    , ciscoflashpartitiontable(std::make_shared<CISCOFLASHMIB::CiscoFlashPartitionTable>())
    , ciscoflashfiletable(std::make_shared<CISCOFLASHMIB::CiscoFlashFileTable>())
    , ciscoflashfilebytypetable(std::make_shared<CISCOFLASHMIB::CiscoFlashFileByTypeTable>())
    , ciscoflashcopytable(std::make_shared<CISCOFLASHMIB::CiscoFlashCopyTable>())
    , ciscoflashpartitioningtable(std::make_shared<CISCOFLASHMIB::CiscoFlashPartitioningTable>())
    , ciscoflashmiscoptable(std::make_shared<CISCOFLASHMIB::CiscoFlashMiscOpTable>())
{
    ciscoflashdevice->parent = this;
    ciscoflashcfg->parent = this;
    ciscoflashdevicetable->parent = this;
    ciscoflashchiptable->parent = this;
    ciscoflashpartitiontable->parent = this;
    ciscoflashfiletable->parent = this;
    ciscoflashfilebytypetable->parent = this;
    ciscoflashcopytable->parent = this;
    ciscoflashpartitioningtable->parent = this;
    ciscoflashmiscoptable->parent = this;

    yang_name = "CISCO-FLASH-MIB"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOFLASHMIB::~CISCOFLASHMIB()
{
}

bool CISCOFLASHMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoflashdevice !=  nullptr && ciscoflashdevice->has_data())
	|| (ciscoflashcfg !=  nullptr && ciscoflashcfg->has_data())
	|| (ciscoflashdevicetable !=  nullptr && ciscoflashdevicetable->has_data())
	|| (ciscoflashchiptable !=  nullptr && ciscoflashchiptable->has_data())
	|| (ciscoflashpartitiontable !=  nullptr && ciscoflashpartitiontable->has_data())
	|| (ciscoflashfiletable !=  nullptr && ciscoflashfiletable->has_data())
	|| (ciscoflashfilebytypetable !=  nullptr && ciscoflashfilebytypetable->has_data())
	|| (ciscoflashcopytable !=  nullptr && ciscoflashcopytable->has_data())
	|| (ciscoflashpartitioningtable !=  nullptr && ciscoflashpartitioningtable->has_data())
	|| (ciscoflashmiscoptable !=  nullptr && ciscoflashmiscoptable->has_data());
}

bool CISCOFLASHMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoflashdevice !=  nullptr && ciscoflashdevice->has_operation())
	|| (ciscoflashcfg !=  nullptr && ciscoflashcfg->has_operation())
	|| (ciscoflashdevicetable !=  nullptr && ciscoflashdevicetable->has_operation())
	|| (ciscoflashchiptable !=  nullptr && ciscoflashchiptable->has_operation())
	|| (ciscoflashpartitiontable !=  nullptr && ciscoflashpartitiontable->has_operation())
	|| (ciscoflashfiletable !=  nullptr && ciscoflashfiletable->has_operation())
	|| (ciscoflashfilebytypetable !=  nullptr && ciscoflashfilebytypetable->has_operation())
	|| (ciscoflashcopytable !=  nullptr && ciscoflashcopytable->has_operation())
	|| (ciscoflashpartitioningtable !=  nullptr && ciscoflashpartitioningtable->has_operation())
	|| (ciscoflashmiscoptable !=  nullptr && ciscoflashmiscoptable->has_operation());
}

std::string CISCOFLASHMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashDevice")
    {
        if(ciscoflashdevice == nullptr)
        {
            ciscoflashdevice = std::make_shared<CISCOFLASHMIB::CiscoFlashDevice>();
        }
        return ciscoflashdevice;
    }

    if(child_yang_name == "ciscoFlashCfg")
    {
        if(ciscoflashcfg == nullptr)
        {
            ciscoflashcfg = std::make_shared<CISCOFLASHMIB::CiscoFlashCfg>();
        }
        return ciscoflashcfg;
    }

    if(child_yang_name == "ciscoFlashDeviceTable")
    {
        if(ciscoflashdevicetable == nullptr)
        {
            ciscoflashdevicetable = std::make_shared<CISCOFLASHMIB::CiscoFlashDeviceTable>();
        }
        return ciscoflashdevicetable;
    }

    if(child_yang_name == "ciscoFlashChipTable")
    {
        if(ciscoflashchiptable == nullptr)
        {
            ciscoflashchiptable = std::make_shared<CISCOFLASHMIB::CiscoFlashChipTable>();
        }
        return ciscoflashchiptable;
    }

    if(child_yang_name == "ciscoFlashPartitionTable")
    {
        if(ciscoflashpartitiontable == nullptr)
        {
            ciscoflashpartitiontable = std::make_shared<CISCOFLASHMIB::CiscoFlashPartitionTable>();
        }
        return ciscoflashpartitiontable;
    }

    if(child_yang_name == "ciscoFlashFileTable")
    {
        if(ciscoflashfiletable == nullptr)
        {
            ciscoflashfiletable = std::make_shared<CISCOFLASHMIB::CiscoFlashFileTable>();
        }
        return ciscoflashfiletable;
    }

    if(child_yang_name == "ciscoFlashFileByTypeTable")
    {
        if(ciscoflashfilebytypetable == nullptr)
        {
            ciscoflashfilebytypetable = std::make_shared<CISCOFLASHMIB::CiscoFlashFileByTypeTable>();
        }
        return ciscoflashfilebytypetable;
    }

    if(child_yang_name == "ciscoFlashCopyTable")
    {
        if(ciscoflashcopytable == nullptr)
        {
            ciscoflashcopytable = std::make_shared<CISCOFLASHMIB::CiscoFlashCopyTable>();
        }
        return ciscoflashcopytable;
    }

    if(child_yang_name == "ciscoFlashPartitioningTable")
    {
        if(ciscoflashpartitioningtable == nullptr)
        {
            ciscoflashpartitioningtable = std::make_shared<CISCOFLASHMIB::CiscoFlashPartitioningTable>();
        }
        return ciscoflashpartitioningtable;
    }

    if(child_yang_name == "ciscoFlashMiscOpTable")
    {
        if(ciscoflashmiscoptable == nullptr)
        {
            ciscoflashmiscoptable = std::make_shared<CISCOFLASHMIB::CiscoFlashMiscOpTable>();
        }
        return ciscoflashmiscoptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoflashdevice != nullptr)
    {
        children["ciscoFlashDevice"] = ciscoflashdevice;
    }

    if(ciscoflashcfg != nullptr)
    {
        children["ciscoFlashCfg"] = ciscoflashcfg;
    }

    if(ciscoflashdevicetable != nullptr)
    {
        children["ciscoFlashDeviceTable"] = ciscoflashdevicetable;
    }

    if(ciscoflashchiptable != nullptr)
    {
        children["ciscoFlashChipTable"] = ciscoflashchiptable;
    }

    if(ciscoflashpartitiontable != nullptr)
    {
        children["ciscoFlashPartitionTable"] = ciscoflashpartitiontable;
    }

    if(ciscoflashfiletable != nullptr)
    {
        children["ciscoFlashFileTable"] = ciscoflashfiletable;
    }

    if(ciscoflashfilebytypetable != nullptr)
    {
        children["ciscoFlashFileByTypeTable"] = ciscoflashfilebytypetable;
    }

    if(ciscoflashcopytable != nullptr)
    {
        children["ciscoFlashCopyTable"] = ciscoflashcopytable;
    }

    if(ciscoflashpartitioningtable != nullptr)
    {
        children["ciscoFlashPartitioningTable"] = ciscoflashpartitioningtable;
    }

    if(ciscoflashmiscoptable != nullptr)
    {
        children["ciscoFlashMiscOpTable"] = ciscoflashmiscoptable;
    }

    return children;
}

void CISCOFLASHMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOFLASHMIB::clone_ptr() const
{
    return std::make_shared<CISCOFLASHMIB>();
}

std::string CISCOFLASHMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOFLASHMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOFLASHMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOFLASHMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOFLASHMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDevice" || name == "ciscoFlashCfg" || name == "ciscoFlashDeviceTable" || name == "ciscoFlashChipTable" || name == "ciscoFlashPartitionTable" || name == "ciscoFlashFileTable" || name == "ciscoFlashFileByTypeTable" || name == "ciscoFlashCopyTable" || name == "ciscoFlashPartitioningTable" || name == "ciscoFlashMiscOpTable")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashDevice::CiscoFlashDevice()
    :
    ciscoflashdevicessupported{YType::uint32, "ciscoFlashDevicesSupported"}
{

    yang_name = "ciscoFlashDevice"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashDevice::~CiscoFlashDevice()
{
}

bool CISCOFLASHMIB::CiscoFlashDevice::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashdevicessupported.is_set;
}

bool CISCOFLASHMIB::CiscoFlashDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdevicessupported.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDevice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdevicessupported.is_set || is_set(ciscoflashdevicessupported.yfilter)) leaf_name_data.push_back(ciscoflashdevicessupported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDevicesSupported")
    {
        ciscoflashdevicessupported = value;
        ciscoflashdevicessupported.value_namespace = name_space;
        ciscoflashdevicessupported.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDevicesSupported")
    {
        ciscoflashdevicessupported.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDevicesSupported")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashCfg::CiscoFlashCfg()
    :
    ciscoflashcfgdevinsnotifenable{YType::boolean, "ciscoFlashCfgDevInsNotifEnable"},
    ciscoflashcfgdevremnotifenable{YType::boolean, "ciscoFlashCfgDevRemNotifEnable"},
    ciscoflashpartitionlowspacenotifenable{YType::boolean, "ciscoFlashPartitionLowSpaceNotifEnable"}
{

    yang_name = "ciscoFlashCfg"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashCfg::~CiscoFlashCfg()
{
}

bool CISCOFLASHMIB::CiscoFlashCfg::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashcfgdevinsnotifenable.is_set
	|| ciscoflashcfgdevremnotifenable.is_set
	|| ciscoflashpartitionlowspacenotifenable.is_set;
}

bool CISCOFLASHMIB::CiscoFlashCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashcfgdevinsnotifenable.yfilter)
	|| ydk::is_set(ciscoflashcfgdevremnotifenable.yfilter)
	|| ydk::is_set(ciscoflashpartitionlowspacenotifenable.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcfgdevinsnotifenable.is_set || is_set(ciscoflashcfgdevinsnotifenable.yfilter)) leaf_name_data.push_back(ciscoflashcfgdevinsnotifenable.get_name_leafdata());
    if (ciscoflashcfgdevremnotifenable.is_set || is_set(ciscoflashcfgdevremnotifenable.yfilter)) leaf_name_data.push_back(ciscoflashcfgdevremnotifenable.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifenable.is_set || is_set(ciscoflashpartitionlowspacenotifenable.yfilter)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashCfgDevInsNotifEnable")
    {
        ciscoflashcfgdevinsnotifenable = value;
        ciscoflashcfgdevinsnotifenable.value_namespace = name_space;
        ciscoflashcfgdevinsnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCfgDevRemNotifEnable")
    {
        ciscoflashcfgdevremnotifenable = value;
        ciscoflashcfgdevremnotifenable.value_namespace = name_space;
        ciscoflashcfgdevremnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifEnable")
    {
        ciscoflashpartitionlowspacenotifenable = value;
        ciscoflashpartitionlowspacenotifenable.value_namespace = name_space;
        ciscoflashpartitionlowspacenotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashCfgDevInsNotifEnable")
    {
        ciscoflashcfgdevinsnotifenable.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCfgDevRemNotifEnable")
    {
        ciscoflashcfgdevremnotifenable.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifEnable")
    {
        ciscoflashpartitionlowspacenotifenable.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCfgDevInsNotifEnable" || name == "ciscoFlashCfgDevRemNotifEnable" || name == "ciscoFlashPartitionLowSpaceNotifEnable")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceTable()
    :
    ciscoflashdeviceentry(this, {"ciscoflashdeviceindex"})
{

    yang_name = "ciscoFlashDeviceTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashDeviceTable::~CiscoFlashDeviceTable()
{
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashdeviceentry.len(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashdeviceentry.len(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashDeviceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashDeviceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashDeviceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashDeviceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashDeviceEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry>();
        c->parent = this;
        ciscoflashdeviceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashDeviceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashdeviceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashDeviceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashDeviceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::CiscoFlashDeviceEntry()
    :
    ciscoflashdeviceindex{YType::uint32, "ciscoFlashDeviceIndex"},
    ciscoflashdevicesize{YType::uint32, "ciscoFlashDeviceSize"},
    ciscoflashdeviceminpartitionsize{YType::uint32, "ciscoFlashDeviceMinPartitionSize"},
    ciscoflashdevicemaxpartitions{YType::uint32, "ciscoFlashDeviceMaxPartitions"},
    ciscoflashdevicepartitions{YType::uint32, "ciscoFlashDevicePartitions"},
    ciscoflashdevicechipcount{YType::int32, "ciscoFlashDeviceChipCount"},
    ciscoflashdevicename{YType::str, "ciscoFlashDeviceName"},
    ciscoflashdevicedescr{YType::str, "ciscoFlashDeviceDescr"},
    ciscoflashdevicecontroller{YType::str, "ciscoFlashDeviceController"},
    ciscoflashdevicecard{YType::str, "ciscoFlashDeviceCard"},
    ciscoflashdeviceprogrammingjumper{YType::enumeration, "ciscoFlashDeviceProgrammingJumper"},
    ciscoflashdeviceinittime{YType::uint32, "ciscoFlashDeviceInitTime"},
    ciscoflashdeviceremovable{YType::boolean, "ciscoFlashDeviceRemovable"},
    ciscoflashphyentindex{YType::int32, "ciscoFlashPhyEntIndex"},
    ciscoflashdevicenameextended{YType::str, "ciscoFlashDeviceNameExtended"},
    ciscoflashdevicesizeextended{YType::uint64, "ciscoFlashDeviceSizeExtended"},
    ciscoflashdeviceminpartitionsizeextended{YType::uint64, "ciscoFlashDeviceMinPartitionSizeExtended"}
{

    yang_name = "ciscoFlashDeviceEntry"; yang_parent_name = "ciscoFlashDeviceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::~CiscoFlashDeviceEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashdeviceindex.is_set
	|| ciscoflashdevicesize.is_set
	|| ciscoflashdeviceminpartitionsize.is_set
	|| ciscoflashdevicemaxpartitions.is_set
	|| ciscoflashdevicepartitions.is_set
	|| ciscoflashdevicechipcount.is_set
	|| ciscoflashdevicename.is_set
	|| ciscoflashdevicedescr.is_set
	|| ciscoflashdevicecontroller.is_set
	|| ciscoflashdevicecard.is_set
	|| ciscoflashdeviceprogrammingjumper.is_set
	|| ciscoflashdeviceinittime.is_set
	|| ciscoflashdeviceremovable.is_set
	|| ciscoflashphyentindex.is_set
	|| ciscoflashdevicenameextended.is_set
	|| ciscoflashdevicesizeextended.is_set
	|| ciscoflashdeviceminpartitionsizeextended.is_set;
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashdevicesize.yfilter)
	|| ydk::is_set(ciscoflashdeviceminpartitionsize.yfilter)
	|| ydk::is_set(ciscoflashdevicemaxpartitions.yfilter)
	|| ydk::is_set(ciscoflashdevicepartitions.yfilter)
	|| ydk::is_set(ciscoflashdevicechipcount.yfilter)
	|| ydk::is_set(ciscoflashdevicename.yfilter)
	|| ydk::is_set(ciscoflashdevicedescr.yfilter)
	|| ydk::is_set(ciscoflashdevicecontroller.yfilter)
	|| ydk::is_set(ciscoflashdevicecard.yfilter)
	|| ydk::is_set(ciscoflashdeviceprogrammingjumper.yfilter)
	|| ydk::is_set(ciscoflashdeviceinittime.yfilter)
	|| ydk::is_set(ciscoflashdeviceremovable.yfilter)
	|| ydk::is_set(ciscoflashphyentindex.yfilter)
	|| ydk::is_set(ciscoflashdevicenameextended.yfilter)
	|| ydk::is_set(ciscoflashdevicesizeextended.yfilter)
	|| ydk::is_set(ciscoflashdeviceminpartitionsizeextended.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashDeviceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceEntry";
    ADD_KEY_TOKEN(ciscoflashdeviceindex, "ciscoFlashDeviceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashdevicesize.is_set || is_set(ciscoflashdevicesize.yfilter)) leaf_name_data.push_back(ciscoflashdevicesize.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsize.is_set || is_set(ciscoflashdeviceminpartitionsize.yfilter)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsize.get_name_leafdata());
    if (ciscoflashdevicemaxpartitions.is_set || is_set(ciscoflashdevicemaxpartitions.yfilter)) leaf_name_data.push_back(ciscoflashdevicemaxpartitions.get_name_leafdata());
    if (ciscoflashdevicepartitions.is_set || is_set(ciscoflashdevicepartitions.yfilter)) leaf_name_data.push_back(ciscoflashdevicepartitions.get_name_leafdata());
    if (ciscoflashdevicechipcount.is_set || is_set(ciscoflashdevicechipcount.yfilter)) leaf_name_data.push_back(ciscoflashdevicechipcount.get_name_leafdata());
    if (ciscoflashdevicename.is_set || is_set(ciscoflashdevicename.yfilter)) leaf_name_data.push_back(ciscoflashdevicename.get_name_leafdata());
    if (ciscoflashdevicedescr.is_set || is_set(ciscoflashdevicedescr.yfilter)) leaf_name_data.push_back(ciscoflashdevicedescr.get_name_leafdata());
    if (ciscoflashdevicecontroller.is_set || is_set(ciscoflashdevicecontroller.yfilter)) leaf_name_data.push_back(ciscoflashdevicecontroller.get_name_leafdata());
    if (ciscoflashdevicecard.is_set || is_set(ciscoflashdevicecard.yfilter)) leaf_name_data.push_back(ciscoflashdevicecard.get_name_leafdata());
    if (ciscoflashdeviceprogrammingjumper.is_set || is_set(ciscoflashdeviceprogrammingjumper.yfilter)) leaf_name_data.push_back(ciscoflashdeviceprogrammingjumper.get_name_leafdata());
    if (ciscoflashdeviceinittime.is_set || is_set(ciscoflashdeviceinittime.yfilter)) leaf_name_data.push_back(ciscoflashdeviceinittime.get_name_leafdata());
    if (ciscoflashdeviceremovable.is_set || is_set(ciscoflashdeviceremovable.yfilter)) leaf_name_data.push_back(ciscoflashdeviceremovable.get_name_leafdata());
    if (ciscoflashphyentindex.is_set || is_set(ciscoflashphyentindex.yfilter)) leaf_name_data.push_back(ciscoflashphyentindex.get_name_leafdata());
    if (ciscoflashdevicenameextended.is_set || is_set(ciscoflashdevicenameextended.yfilter)) leaf_name_data.push_back(ciscoflashdevicenameextended.get_name_leafdata());
    if (ciscoflashdevicesizeextended.is_set || is_set(ciscoflashdevicesizeextended.yfilter)) leaf_name_data.push_back(ciscoflashdevicesizeextended.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsizeextended.is_set || is_set(ciscoflashdeviceminpartitionsizeextended.yfilter)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsizeextended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceSize")
    {
        ciscoflashdevicesize = value;
        ciscoflashdevicesize.value_namespace = name_space;
        ciscoflashdevicesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSize")
    {
        ciscoflashdeviceminpartitionsize = value;
        ciscoflashdeviceminpartitionsize.value_namespace = name_space;
        ciscoflashdeviceminpartitionsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMaxPartitions")
    {
        ciscoflashdevicemaxpartitions = value;
        ciscoflashdevicemaxpartitions.value_namespace = name_space;
        ciscoflashdevicemaxpartitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDevicePartitions")
    {
        ciscoflashdevicepartitions = value;
        ciscoflashdevicepartitions.value_namespace = name_space;
        ciscoflashdevicepartitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceChipCount")
    {
        ciscoflashdevicechipcount = value;
        ciscoflashdevicechipcount.value_namespace = name_space;
        ciscoflashdevicechipcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceName")
    {
        ciscoflashdevicename = value;
        ciscoflashdevicename.value_namespace = name_space;
        ciscoflashdevicename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceDescr")
    {
        ciscoflashdevicedescr = value;
        ciscoflashdevicedescr.value_namespace = name_space;
        ciscoflashdevicedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceController")
    {
        ciscoflashdevicecontroller = value;
        ciscoflashdevicecontroller.value_namespace = name_space;
        ciscoflashdevicecontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceCard")
    {
        ciscoflashdevicecard = value;
        ciscoflashdevicecard.value_namespace = name_space;
        ciscoflashdevicecard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceProgrammingJumper")
    {
        ciscoflashdeviceprogrammingjumper = value;
        ciscoflashdeviceprogrammingjumper.value_namespace = name_space;
        ciscoflashdeviceprogrammingjumper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceInitTime")
    {
        ciscoflashdeviceinittime = value;
        ciscoflashdeviceinittime.value_namespace = name_space;
        ciscoflashdeviceinittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceRemovable")
    {
        ciscoflashdeviceremovable = value;
        ciscoflashdeviceremovable.value_namespace = name_space;
        ciscoflashdeviceremovable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPhyEntIndex")
    {
        ciscoflashphyentindex = value;
        ciscoflashphyentindex.value_namespace = name_space;
        ciscoflashphyentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceNameExtended")
    {
        ciscoflashdevicenameextended = value;
        ciscoflashdevicenameextended.value_namespace = name_space;
        ciscoflashdevicenameextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceSizeExtended")
    {
        ciscoflashdevicesizeextended = value;
        ciscoflashdevicesizeextended.value_namespace = name_space;
        ciscoflashdevicesizeextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSizeExtended")
    {
        ciscoflashdeviceminpartitionsizeextended = value;
        ciscoflashdeviceminpartitionsizeextended.value_namespace = name_space;
        ciscoflashdeviceminpartitionsizeextended.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceSize")
    {
        ciscoflashdevicesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSize")
    {
        ciscoflashdeviceminpartitionsize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMaxPartitions")
    {
        ciscoflashdevicemaxpartitions.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDevicePartitions")
    {
        ciscoflashdevicepartitions.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceChipCount")
    {
        ciscoflashdevicechipcount.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceName")
    {
        ciscoflashdevicename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceDescr")
    {
        ciscoflashdevicedescr.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceController")
    {
        ciscoflashdevicecontroller.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceCard")
    {
        ciscoflashdevicecard.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceProgrammingJumper")
    {
        ciscoflashdeviceprogrammingjumper.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceInitTime")
    {
        ciscoflashdeviceinittime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceRemovable")
    {
        ciscoflashdeviceremovable.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPhyEntIndex")
    {
        ciscoflashphyentindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceNameExtended")
    {
        ciscoflashdevicenameextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceSizeExtended")
    {
        ciscoflashdevicesizeextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSizeExtended")
    {
        ciscoflashdeviceminpartitionsizeextended.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashDeviceSize" || name == "ciscoFlashDeviceMinPartitionSize" || name == "ciscoFlashDeviceMaxPartitions" || name == "ciscoFlashDevicePartitions" || name == "ciscoFlashDeviceChipCount" || name == "ciscoFlashDeviceName" || name == "ciscoFlashDeviceDescr" || name == "ciscoFlashDeviceController" || name == "ciscoFlashDeviceCard" || name == "ciscoFlashDeviceProgrammingJumper" || name == "ciscoFlashDeviceInitTime" || name == "ciscoFlashDeviceRemovable" || name == "ciscoFlashPhyEntIndex" || name == "ciscoFlashDeviceNameExtended" || name == "ciscoFlashDeviceSizeExtended" || name == "ciscoFlashDeviceMinPartitionSizeExtended")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipTable()
    :
    ciscoflashchipentry(this, {"ciscoflashdeviceindex", "ciscoflashchipindex"})
{

    yang_name = "ciscoFlashChipTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashChipTable::~CiscoFlashChipTable()
{
}

bool CISCOFLASHMIB::CiscoFlashChipTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashchipentry.len(); index++)
    {
        if(ciscoflashchipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashChipTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashchipentry.len(); index++)
    {
        if(ciscoflashchipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashChipTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashChipTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashChipTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashChipTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashChipEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry>();
        c->parent = this;
        ciscoflashchipentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashChipTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashchipentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashChipTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashChipTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashChipTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashChipEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::CiscoFlashChipEntry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashchipindex{YType::int32, "ciscoFlashChipIndex"},
    ciscoflashchipcode{YType::str, "ciscoFlashChipCode"},
    ciscoflashchipdescr{YType::str, "ciscoFlashChipDescr"},
    ciscoflashchipwriteretries{YType::uint32, "ciscoFlashChipWriteRetries"},
    ciscoflashchiperaseretries{YType::uint32, "ciscoFlashChipEraseRetries"},
    ciscoflashchipmaxwriteretries{YType::uint32, "ciscoFlashChipMaxWriteRetries"},
    ciscoflashchipmaxeraseretries{YType::uint32, "ciscoFlashChipMaxEraseRetries"}
{

    yang_name = "ciscoFlashChipEntry"; yang_parent_name = "ciscoFlashChipTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::~CiscoFlashChipEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashdeviceindex.is_set
	|| ciscoflashchipindex.is_set
	|| ciscoflashchipcode.is_set
	|| ciscoflashchipdescr.is_set
	|| ciscoflashchipwriteretries.is_set
	|| ciscoflashchiperaseretries.is_set
	|| ciscoflashchipmaxwriteretries.is_set
	|| ciscoflashchipmaxeraseretries.is_set;
}

bool CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashchipindex.yfilter)
	|| ydk::is_set(ciscoflashchipcode.yfilter)
	|| ydk::is_set(ciscoflashchipdescr.yfilter)
	|| ydk::is_set(ciscoflashchipwriteretries.yfilter)
	|| ydk::is_set(ciscoflashchiperaseretries.yfilter)
	|| ydk::is_set(ciscoflashchipmaxwriteretries.yfilter)
	|| ydk::is_set(ciscoflashchipmaxeraseretries.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashChipTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipEntry";
    ADD_KEY_TOKEN(ciscoflashdeviceindex, "ciscoFlashDeviceIndex");
    ADD_KEY_TOKEN(ciscoflashchipindex, "ciscoFlashChipIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashchipindex.is_set || is_set(ciscoflashchipindex.yfilter)) leaf_name_data.push_back(ciscoflashchipindex.get_name_leafdata());
    if (ciscoflashchipcode.is_set || is_set(ciscoflashchipcode.yfilter)) leaf_name_data.push_back(ciscoflashchipcode.get_name_leafdata());
    if (ciscoflashchipdescr.is_set || is_set(ciscoflashchipdescr.yfilter)) leaf_name_data.push_back(ciscoflashchipdescr.get_name_leafdata());
    if (ciscoflashchipwriteretries.is_set || is_set(ciscoflashchipwriteretries.yfilter)) leaf_name_data.push_back(ciscoflashchipwriteretries.get_name_leafdata());
    if (ciscoflashchiperaseretries.is_set || is_set(ciscoflashchiperaseretries.yfilter)) leaf_name_data.push_back(ciscoflashchiperaseretries.get_name_leafdata());
    if (ciscoflashchipmaxwriteretries.is_set || is_set(ciscoflashchipmaxwriteretries.yfilter)) leaf_name_data.push_back(ciscoflashchipmaxwriteretries.get_name_leafdata());
    if (ciscoflashchipmaxeraseretries.is_set || is_set(ciscoflashchipmaxeraseretries.yfilter)) leaf_name_data.push_back(ciscoflashchipmaxeraseretries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipIndex")
    {
        ciscoflashchipindex = value;
        ciscoflashchipindex.value_namespace = name_space;
        ciscoflashchipindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipCode")
    {
        ciscoflashchipcode = value;
        ciscoflashchipcode.value_namespace = name_space;
        ciscoflashchipcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipDescr")
    {
        ciscoflashchipdescr = value;
        ciscoflashchipdescr.value_namespace = name_space;
        ciscoflashchipdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipWriteRetries")
    {
        ciscoflashchipwriteretries = value;
        ciscoflashchipwriteretries.value_namespace = name_space;
        ciscoflashchipwriteretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipEraseRetries")
    {
        ciscoflashchiperaseretries = value;
        ciscoflashchiperaseretries.value_namespace = name_space;
        ciscoflashchiperaseretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipMaxWriteRetries")
    {
        ciscoflashchipmaxwriteretries = value;
        ciscoflashchipmaxwriteretries.value_namespace = name_space;
        ciscoflashchipmaxwriteretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipMaxEraseRetries")
    {
        ciscoflashchipmaxeraseretries = value;
        ciscoflashchipmaxeraseretries.value_namespace = name_space;
        ciscoflashchipmaxeraseretries.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipIndex")
    {
        ciscoflashchipindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipCode")
    {
        ciscoflashchipcode.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipDescr")
    {
        ciscoflashchipdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipWriteRetries")
    {
        ciscoflashchipwriteretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipEraseRetries")
    {
        ciscoflashchiperaseretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipMaxWriteRetries")
    {
        ciscoflashchipmaxwriteretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipMaxEraseRetries")
    {
        ciscoflashchipmaxeraseretries.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashChipTable::CiscoFlashChipEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashChipIndex" || name == "ciscoFlashChipCode" || name == "ciscoFlashChipDescr" || name == "ciscoFlashChipWriteRetries" || name == "ciscoFlashChipEraseRetries" || name == "ciscoFlashChipMaxWriteRetries" || name == "ciscoFlashChipMaxEraseRetries")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionTable()
    :
    ciscoflashpartitionentry(this, {"ciscoflashdeviceindex", "ciscoflashpartitionindex"})
{

    yang_name = "ciscoFlashPartitionTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashPartitionTable::~CiscoFlashPartitionTable()
{
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashpartitionentry.len(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitionentry.len(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashPartitionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashPartitionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashPartitionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashPartitionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashPartitionEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry>();
        c->parent = this;
        ciscoflashpartitionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashPartitionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashpartitionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashPartitionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashPartitionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitionEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionEntry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::uint32, "ciscoFlashPartitionIndex"},
    ciscoflashpartitionstartchip{YType::int32, "ciscoFlashPartitionStartChip"},
    ciscoflashpartitionendchip{YType::int32, "ciscoFlashPartitionEndChip"},
    ciscoflashpartitionsize{YType::uint32, "ciscoFlashPartitionSize"},
    ciscoflashpartitionfreespace{YType::uint32, "ciscoFlashPartitionFreeSpace"},
    ciscoflashpartitionfilecount{YType::uint32, "ciscoFlashPartitionFileCount"},
    ciscoflashpartitionchecksumalgorithm{YType::enumeration, "ciscoFlashPartitionChecksumAlgorithm"},
    ciscoflashpartitionstatus{YType::enumeration, "ciscoFlashPartitionStatus"},
    ciscoflashpartitionupgrademethod{YType::enumeration, "ciscoFlashPartitionUpgradeMethod"},
    ciscoflashpartitionname{YType::str, "ciscoFlashPartitionName"},
    ciscoflashpartitionneederasure{YType::boolean, "ciscoFlashPartitionNeedErasure"},
    ciscoflashpartitionfilenamelength{YType::int32, "ciscoFlashPartitionFileNameLength"},
    ciscoflashpartitionsizeextended{YType::uint64, "ciscoFlashPartitionSizeExtended"},
    ciscoflashpartitionfreespaceextended{YType::uint64, "ciscoFlashPartitionFreeSpaceExtended"},
    ciscoflashpartitionlowspacenotifthreshold{YType::int32, "ciscoFlashPartitionLowSpaceNotifThreshold"}
{

    yang_name = "ciscoFlashPartitionEntry"; yang_parent_name = "ciscoFlashPartitionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::~CiscoFlashPartitionEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashpartitionstartchip.is_set
	|| ciscoflashpartitionendchip.is_set
	|| ciscoflashpartitionsize.is_set
	|| ciscoflashpartitionfreespace.is_set
	|| ciscoflashpartitionfilecount.is_set
	|| ciscoflashpartitionchecksumalgorithm.is_set
	|| ciscoflashpartitionstatus.is_set
	|| ciscoflashpartitionupgrademethod.is_set
	|| ciscoflashpartitionname.is_set
	|| ciscoflashpartitionneederasure.is_set
	|| ciscoflashpartitionfilenamelength.is_set
	|| ciscoflashpartitionsizeextended.is_set
	|| ciscoflashpartitionfreespaceextended.is_set
	|| ciscoflashpartitionlowspacenotifthreshold.is_set;
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionstartchip.yfilter)
	|| ydk::is_set(ciscoflashpartitionendchip.yfilter)
	|| ydk::is_set(ciscoflashpartitionsize.yfilter)
	|| ydk::is_set(ciscoflashpartitionfreespace.yfilter)
	|| ydk::is_set(ciscoflashpartitionfilecount.yfilter)
	|| ydk::is_set(ciscoflashpartitionchecksumalgorithm.yfilter)
	|| ydk::is_set(ciscoflashpartitionstatus.yfilter)
	|| ydk::is_set(ciscoflashpartitionupgrademethod.yfilter)
	|| ydk::is_set(ciscoflashpartitionname.yfilter)
	|| ydk::is_set(ciscoflashpartitionneederasure.yfilter)
	|| ydk::is_set(ciscoflashpartitionfilenamelength.yfilter)
	|| ydk::is_set(ciscoflashpartitionsizeextended.yfilter)
	|| ydk::is_set(ciscoflashpartitionfreespaceextended.yfilter)
	|| ydk::is_set(ciscoflashpartitionlowspacenotifthreshold.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionEntry";
    ADD_KEY_TOKEN(ciscoflashdeviceindex, "ciscoFlashDeviceIndex");
    ADD_KEY_TOKEN(ciscoflashpartitionindex, "ciscoFlashPartitionIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashpartitionstartchip.is_set || is_set(ciscoflashpartitionstartchip.yfilter)) leaf_name_data.push_back(ciscoflashpartitionstartchip.get_name_leafdata());
    if (ciscoflashpartitionendchip.is_set || is_set(ciscoflashpartitionendchip.yfilter)) leaf_name_data.push_back(ciscoflashpartitionendchip.get_name_leafdata());
    if (ciscoflashpartitionsize.is_set || is_set(ciscoflashpartitionsize.yfilter)) leaf_name_data.push_back(ciscoflashpartitionsize.get_name_leafdata());
    if (ciscoflashpartitionfreespace.is_set || is_set(ciscoflashpartitionfreespace.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfreespace.get_name_leafdata());
    if (ciscoflashpartitionfilecount.is_set || is_set(ciscoflashpartitionfilecount.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfilecount.get_name_leafdata());
    if (ciscoflashpartitionchecksumalgorithm.is_set || is_set(ciscoflashpartitionchecksumalgorithm.yfilter)) leaf_name_data.push_back(ciscoflashpartitionchecksumalgorithm.get_name_leafdata());
    if (ciscoflashpartitionstatus.is_set || is_set(ciscoflashpartitionstatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitionstatus.get_name_leafdata());
    if (ciscoflashpartitionupgrademethod.is_set || is_set(ciscoflashpartitionupgrademethod.yfilter)) leaf_name_data.push_back(ciscoflashpartitionupgrademethod.get_name_leafdata());
    if (ciscoflashpartitionname.is_set || is_set(ciscoflashpartitionname.yfilter)) leaf_name_data.push_back(ciscoflashpartitionname.get_name_leafdata());
    if (ciscoflashpartitionneederasure.is_set || is_set(ciscoflashpartitionneederasure.yfilter)) leaf_name_data.push_back(ciscoflashpartitionneederasure.get_name_leafdata());
    if (ciscoflashpartitionfilenamelength.is_set || is_set(ciscoflashpartitionfilenamelength.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfilenamelength.get_name_leafdata());
    if (ciscoflashpartitionsizeextended.is_set || is_set(ciscoflashpartitionsizeextended.yfilter)) leaf_name_data.push_back(ciscoflashpartitionsizeextended.get_name_leafdata());
    if (ciscoflashpartitionfreespaceextended.is_set || is_set(ciscoflashpartitionfreespaceextended.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfreespaceextended.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifthreshold.is_set || is_set(ciscoflashpartitionlowspacenotifthreshold.yfilter)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifthreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
        ciscoflashpartitionindex.value_namespace = name_space;
        ciscoflashpartitionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionStartChip")
    {
        ciscoflashpartitionstartchip = value;
        ciscoflashpartitionstartchip.value_namespace = name_space;
        ciscoflashpartitionstartchip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionEndChip")
    {
        ciscoflashpartitionendchip = value;
        ciscoflashpartitionendchip.value_namespace = name_space;
        ciscoflashpartitionendchip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionSize")
    {
        ciscoflashpartitionsize = value;
        ciscoflashpartitionsize.value_namespace = name_space;
        ciscoflashpartitionsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFreeSpace")
    {
        ciscoflashpartitionfreespace = value;
        ciscoflashpartitionfreespace.value_namespace = name_space;
        ciscoflashpartitionfreespace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFileCount")
    {
        ciscoflashpartitionfilecount = value;
        ciscoflashpartitionfilecount.value_namespace = name_space;
        ciscoflashpartitionfilecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionChecksumAlgorithm")
    {
        ciscoflashpartitionchecksumalgorithm = value;
        ciscoflashpartitionchecksumalgorithm.value_namespace = name_space;
        ciscoflashpartitionchecksumalgorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionStatus")
    {
        ciscoflashpartitionstatus = value;
        ciscoflashpartitionstatus.value_namespace = name_space;
        ciscoflashpartitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionUpgradeMethod")
    {
        ciscoflashpartitionupgrademethod = value;
        ciscoflashpartitionupgrademethod.value_namespace = name_space;
        ciscoflashpartitionupgrademethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionName")
    {
        ciscoflashpartitionname = value;
        ciscoflashpartitionname.value_namespace = name_space;
        ciscoflashpartitionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionNeedErasure")
    {
        ciscoflashpartitionneederasure = value;
        ciscoflashpartitionneederasure.value_namespace = name_space;
        ciscoflashpartitionneederasure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFileNameLength")
    {
        ciscoflashpartitionfilenamelength = value;
        ciscoflashpartitionfilenamelength.value_namespace = name_space;
        ciscoflashpartitionfilenamelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionSizeExtended")
    {
        ciscoflashpartitionsizeextended = value;
        ciscoflashpartitionsizeextended.value_namespace = name_space;
        ciscoflashpartitionsizeextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFreeSpaceExtended")
    {
        ciscoflashpartitionfreespaceextended = value;
        ciscoflashpartitionfreespaceextended.value_namespace = name_space;
        ciscoflashpartitionfreespaceextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifThreshold")
    {
        ciscoflashpartitionlowspacenotifthreshold = value;
        ciscoflashpartitionlowspacenotifthreshold.value_namespace = name_space;
        ciscoflashpartitionlowspacenotifthreshold.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionStartChip")
    {
        ciscoflashpartitionstartchip.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionEndChip")
    {
        ciscoflashpartitionendchip.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionSize")
    {
        ciscoflashpartitionsize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFreeSpace")
    {
        ciscoflashpartitionfreespace.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFileCount")
    {
        ciscoflashpartitionfilecount.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionChecksumAlgorithm")
    {
        ciscoflashpartitionchecksumalgorithm.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionStatus")
    {
        ciscoflashpartitionstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionUpgradeMethod")
    {
        ciscoflashpartitionupgrademethod.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionName")
    {
        ciscoflashpartitionname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionNeedErasure")
    {
        ciscoflashpartitionneederasure.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFileNameLength")
    {
        ciscoflashpartitionfilenamelength.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionSizeExtended")
    {
        ciscoflashpartitionsizeextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFreeSpaceExtended")
    {
        ciscoflashpartitionfreespaceextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifThreshold")
    {
        ciscoflashpartitionlowspacenotifthreshold.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashPartitionStartChip" || name == "ciscoFlashPartitionEndChip" || name == "ciscoFlashPartitionSize" || name == "ciscoFlashPartitionFreeSpace" || name == "ciscoFlashPartitionFileCount" || name == "ciscoFlashPartitionChecksumAlgorithm" || name == "ciscoFlashPartitionStatus" || name == "ciscoFlashPartitionUpgradeMethod" || name == "ciscoFlashPartitionName" || name == "ciscoFlashPartitionNeedErasure" || name == "ciscoFlashPartitionFileNameLength" || name == "ciscoFlashPartitionSizeExtended" || name == "ciscoFlashPartitionFreeSpaceExtended" || name == "ciscoFlashPartitionLowSpaceNotifThreshold")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileTable()
    :
    ciscoflashfileentry(this, {"ciscoflashdeviceindex", "ciscoflashpartitionindex", "ciscoflashfileindex"})
{

    yang_name = "ciscoFlashFileTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashFileTable::~CiscoFlashFileTable()
{
}

bool CISCOFLASHMIB::CiscoFlashFileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashfileentry.len(); index++)
    {
        if(ciscoflashfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashFileTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfileentry.len(); index++)
    {
        if(ciscoflashfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashFileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashFileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashFileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashFileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashFileEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry>();
        c->parent = this;
        ciscoflashfileentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashFileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashfileentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashFileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashFileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashFileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::CiscoFlashFileEntry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::str, "ciscoFlashPartitionIndex"},
    ciscoflashfileindex{YType::uint32, "ciscoFlashFileIndex"},
    ciscoflashfilesize{YType::uint32, "ciscoFlashFileSize"},
    ciscoflashfilechecksum{YType::str, "ciscoFlashFileChecksum"},
    ciscoflashfilestatus{YType::enumeration, "ciscoFlashFileStatus"},
    ciscoflashfilename{YType::str, "ciscoFlashFileName"},
    ciscoflashfiletype{YType::enumeration, "ciscoFlashFileType"},
    ciscoflashfiledate{YType::str, "ciscoFlashFileDate"}
{

    yang_name = "ciscoFlashFileEntry"; yang_parent_name = "ciscoFlashFileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::~CiscoFlashFileEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashfileindex.is_set
	|| ciscoflashfilesize.is_set
	|| ciscoflashfilechecksum.is_set
	|| ciscoflashfilestatus.is_set
	|| ciscoflashfilename.is_set
	|| ciscoflashfiletype.is_set
	|| ciscoflashfiledate.is_set;
}

bool CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashfileindex.yfilter)
	|| ydk::is_set(ciscoflashfilesize.yfilter)
	|| ydk::is_set(ciscoflashfilechecksum.yfilter)
	|| ydk::is_set(ciscoflashfilestatus.yfilter)
	|| ydk::is_set(ciscoflashfilename.yfilter)
	|| ydk::is_set(ciscoflashfiletype.yfilter)
	|| ydk::is_set(ciscoflashfiledate.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileEntry";
    ADD_KEY_TOKEN(ciscoflashdeviceindex, "ciscoFlashDeviceIndex");
    ADD_KEY_TOKEN(ciscoflashpartitionindex, "ciscoFlashPartitionIndex");
    ADD_KEY_TOKEN(ciscoflashfileindex, "ciscoFlashFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.yfilter)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilesize.is_set || is_set(ciscoflashfilesize.yfilter)) leaf_name_data.push_back(ciscoflashfilesize.get_name_leafdata());
    if (ciscoflashfilechecksum.is_set || is_set(ciscoflashfilechecksum.yfilter)) leaf_name_data.push_back(ciscoflashfilechecksum.get_name_leafdata());
    if (ciscoflashfilestatus.is_set || is_set(ciscoflashfilestatus.yfilter)) leaf_name_data.push_back(ciscoflashfilestatus.get_name_leafdata());
    if (ciscoflashfilename.is_set || is_set(ciscoflashfilename.yfilter)) leaf_name_data.push_back(ciscoflashfilename.get_name_leafdata());
    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.yfilter)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());
    if (ciscoflashfiledate.is_set || is_set(ciscoflashfiledate.yfilter)) leaf_name_data.push_back(ciscoflashfiledate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
        ciscoflashpartitionindex.value_namespace = name_space;
        ciscoflashpartitionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex = value;
        ciscoflashfileindex.value_namespace = name_space;
        ciscoflashfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileSize")
    {
        ciscoflashfilesize = value;
        ciscoflashfilesize.value_namespace = name_space;
        ciscoflashfilesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileChecksum")
    {
        ciscoflashfilechecksum = value;
        ciscoflashfilechecksum.value_namespace = name_space;
        ciscoflashfilechecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileStatus")
    {
        ciscoflashfilestatus = value;
        ciscoflashfilestatus.value_namespace = name_space;
        ciscoflashfilestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileName")
    {
        ciscoflashfilename = value;
        ciscoflashfilename.value_namespace = name_space;
        ciscoflashfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype = value;
        ciscoflashfiletype.value_namespace = name_space;
        ciscoflashfiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileDate")
    {
        ciscoflashfiledate = value;
        ciscoflashfiledate.value_namespace = name_space;
        ciscoflashfiledate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileSize")
    {
        ciscoflashfilesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileChecksum")
    {
        ciscoflashfilechecksum.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileStatus")
    {
        ciscoflashfilestatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileName")
    {
        ciscoflashfilename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileDate")
    {
        ciscoflashfiledate.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashFileIndex" || name == "ciscoFlashFileSize" || name == "ciscoFlashFileChecksum" || name == "ciscoFlashFileStatus" || name == "ciscoFlashFileName" || name == "ciscoFlashFileType" || name == "ciscoFlashFileDate")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeTable()
    :
    ciscoflashfilebytypeentry(this, {"ciscoflashfiletype", "ciscoflashdeviceindex", "ciscoflashpartitionindex", "ciscoflashfileindex"})
{

    yang_name = "ciscoFlashFileByTypeTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashFileByTypeTable::~CiscoFlashFileByTypeTable()
{
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.len(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.len(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashFileByTypeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashFileByTypeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashFileByTypeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashFileByTypeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashFileByTypeEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry>();
        c->parent = this;
        ciscoflashfilebytypeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashFileByTypeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashfilebytypeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashFileByTypeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashFileByTypeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileByTypeEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::CiscoFlashFileByTypeEntry()
    :
    ciscoflashfiletype{YType::enumeration, "ciscoFlashFileType"},
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::str, "ciscoFlashPartitionIndex"},
    ciscoflashfileindex{YType::str, "ciscoFlashFileIndex"},
    ciscoflashfilebytypesize{YType::uint32, "ciscoFlashFileByTypeSize"},
    ciscoflashfilebytypechecksum{YType::str, "ciscoFlashFileByTypeChecksum"},
    ciscoflashfilebytypestatus{YType::enumeration, "ciscoFlashFileByTypeStatus"},
    ciscoflashfilebytypename{YType::str, "ciscoFlashFileByTypeName"},
    ciscoflashfilebytypedate{YType::str, "ciscoFlashFileByTypeDate"}
{

    yang_name = "ciscoFlashFileByTypeEntry"; yang_parent_name = "ciscoFlashFileByTypeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::~CiscoFlashFileByTypeEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashfiletype.is_set
	|| ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashfileindex.is_set
	|| ciscoflashfilebytypesize.is_set
	|| ciscoflashfilebytypechecksum.is_set
	|| ciscoflashfilebytypestatus.is_set
	|| ciscoflashfilebytypename.is_set
	|| ciscoflashfilebytypedate.is_set;
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashfiletype.yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashfileindex.yfilter)
	|| ydk::is_set(ciscoflashfilebytypesize.yfilter)
	|| ydk::is_set(ciscoflashfilebytypechecksum.yfilter)
	|| ydk::is_set(ciscoflashfilebytypestatus.yfilter)
	|| ydk::is_set(ciscoflashfilebytypename.yfilter)
	|| ydk::is_set(ciscoflashfilebytypedate.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileByTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeEntry";
    ADD_KEY_TOKEN(ciscoflashfiletype, "ciscoFlashFileType");
    ADD_KEY_TOKEN(ciscoflashdeviceindex, "ciscoFlashDeviceIndex");
    ADD_KEY_TOKEN(ciscoflashpartitionindex, "ciscoFlashPartitionIndex");
    ADD_KEY_TOKEN(ciscoflashfileindex, "ciscoFlashFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.yfilter)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());
    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.yfilter)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilebytypesize.is_set || is_set(ciscoflashfilebytypesize.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypesize.get_name_leafdata());
    if (ciscoflashfilebytypechecksum.is_set || is_set(ciscoflashfilebytypechecksum.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypechecksum.get_name_leafdata());
    if (ciscoflashfilebytypestatus.is_set || is_set(ciscoflashfilebytypestatus.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypestatus.get_name_leafdata());
    if (ciscoflashfilebytypename.is_set || is_set(ciscoflashfilebytypename.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypename.get_name_leafdata());
    if (ciscoflashfilebytypedate.is_set || is_set(ciscoflashfilebytypedate.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypedate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype = value;
        ciscoflashfiletype.value_namespace = name_space;
        ciscoflashfiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
        ciscoflashpartitionindex.value_namespace = name_space;
        ciscoflashpartitionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex = value;
        ciscoflashfileindex.value_namespace = name_space;
        ciscoflashfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeSize")
    {
        ciscoflashfilebytypesize = value;
        ciscoflashfilebytypesize.value_namespace = name_space;
        ciscoflashfilebytypesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeChecksum")
    {
        ciscoflashfilebytypechecksum = value;
        ciscoflashfilebytypechecksum.value_namespace = name_space;
        ciscoflashfilebytypechecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeStatus")
    {
        ciscoflashfilebytypestatus = value;
        ciscoflashfilebytypestatus.value_namespace = name_space;
        ciscoflashfilebytypestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeName")
    {
        ciscoflashfilebytypename = value;
        ciscoflashfilebytypename.value_namespace = name_space;
        ciscoflashfilebytypename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeDate")
    {
        ciscoflashfilebytypedate = value;
        ciscoflashfilebytypedate.value_namespace = name_space;
        ciscoflashfilebytypedate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeSize")
    {
        ciscoflashfilebytypesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeChecksum")
    {
        ciscoflashfilebytypechecksum.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeStatus")
    {
        ciscoflashfilebytypestatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeName")
    {
        ciscoflashfilebytypename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeDate")
    {
        ciscoflashfilebytypedate.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileType" || name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashFileIndex" || name == "ciscoFlashFileByTypeSize" || name == "ciscoFlashFileByTypeChecksum" || name == "ciscoFlashFileByTypeStatus" || name == "ciscoFlashFileByTypeName" || name == "ciscoFlashFileByTypeDate")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyTable()
    :
    ciscoflashcopyentry(this, {"ciscoflashcopyserialnumber"})
{

    yang_name = "ciscoFlashCopyTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashCopyTable::~CiscoFlashCopyTable()
{
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashcopyentry.len(); index++)
    {
        if(ciscoflashcopyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashcopyentry.len(); index++)
    {
        if(ciscoflashcopyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashCopyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashCopyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashCopyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashCopyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashCopyEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry>();
        c->parent = this;
        ciscoflashcopyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashCopyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashcopyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashCopyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashCopyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCopyEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyEntry()
    :
    ciscoflashcopyserialnumber{YType::int32, "ciscoFlashCopySerialNumber"},
    ciscoflashcopycommand{YType::enumeration, "ciscoFlashCopyCommand"},
    ciscoflashcopyprotocol{YType::enumeration, "ciscoFlashCopyProtocol"},
    ciscoflashcopyserveraddress{YType::str, "ciscoFlashCopyServerAddress"},
    ciscoflashcopysourcename{YType::str, "ciscoFlashCopySourceName"},
    ciscoflashcopydestinationname{YType::str, "ciscoFlashCopyDestinationName"},
    ciscoflashcopyremoteusername{YType::str, "ciscoFlashCopyRemoteUserName"},
    ciscoflashcopystatus{YType::enumeration, "ciscoFlashCopyStatus"},
    ciscoflashcopynotifyoncompletion{YType::boolean, "ciscoFlashCopyNotifyOnCompletion"},
    ciscoflashcopytime{YType::uint32, "ciscoFlashCopyTime"},
    ciscoflashcopyentrystatus{YType::enumeration, "ciscoFlashCopyEntryStatus"},
    ciscoflashcopyverify{YType::boolean, "ciscoFlashCopyVerify"},
    ciscoflashcopyserveraddrtype{YType::enumeration, "ciscoFlashCopyServerAddrType"},
    ciscoflashcopyserveraddrrev1{YType::str, "ciscoFlashCopyServerAddrRev1"},
    ciscoflashcopyremotepassword{YType::str, "ciscoFlashCopyRemotePassword"}
{

    yang_name = "ciscoFlashCopyEntry"; yang_parent_name = "ciscoFlashCopyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::~CiscoFlashCopyEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashcopyserialnumber.is_set
	|| ciscoflashcopycommand.is_set
	|| ciscoflashcopyprotocol.is_set
	|| ciscoflashcopyserveraddress.is_set
	|| ciscoflashcopysourcename.is_set
	|| ciscoflashcopydestinationname.is_set
	|| ciscoflashcopyremoteusername.is_set
	|| ciscoflashcopystatus.is_set
	|| ciscoflashcopynotifyoncompletion.is_set
	|| ciscoflashcopytime.is_set
	|| ciscoflashcopyentrystatus.is_set
	|| ciscoflashcopyverify.is_set
	|| ciscoflashcopyserveraddrtype.is_set
	|| ciscoflashcopyserveraddrrev1.is_set
	|| ciscoflashcopyremotepassword.is_set;
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashcopyserialnumber.yfilter)
	|| ydk::is_set(ciscoflashcopycommand.yfilter)
	|| ydk::is_set(ciscoflashcopyprotocol.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddress.yfilter)
	|| ydk::is_set(ciscoflashcopysourcename.yfilter)
	|| ydk::is_set(ciscoflashcopydestinationname.yfilter)
	|| ydk::is_set(ciscoflashcopyremoteusername.yfilter)
	|| ydk::is_set(ciscoflashcopystatus.yfilter)
	|| ydk::is_set(ciscoflashcopynotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashcopytime.yfilter)
	|| ydk::is_set(ciscoflashcopyentrystatus.yfilter)
	|| ydk::is_set(ciscoflashcopyverify.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddrtype.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddrrev1.yfilter)
	|| ydk::is_set(ciscoflashcopyremotepassword.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashCopyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyEntry";
    ADD_KEY_TOKEN(ciscoflashcopyserialnumber, "ciscoFlashCopySerialNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcopyserialnumber.is_set || is_set(ciscoflashcopyserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashcopyserialnumber.get_name_leafdata());
    if (ciscoflashcopycommand.is_set || is_set(ciscoflashcopycommand.yfilter)) leaf_name_data.push_back(ciscoflashcopycommand.get_name_leafdata());
    if (ciscoflashcopyprotocol.is_set || is_set(ciscoflashcopyprotocol.yfilter)) leaf_name_data.push_back(ciscoflashcopyprotocol.get_name_leafdata());
    if (ciscoflashcopyserveraddress.is_set || is_set(ciscoflashcopyserveraddress.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddress.get_name_leafdata());
    if (ciscoflashcopysourcename.is_set || is_set(ciscoflashcopysourcename.yfilter)) leaf_name_data.push_back(ciscoflashcopysourcename.get_name_leafdata());
    if (ciscoflashcopydestinationname.is_set || is_set(ciscoflashcopydestinationname.yfilter)) leaf_name_data.push_back(ciscoflashcopydestinationname.get_name_leafdata());
    if (ciscoflashcopyremoteusername.is_set || is_set(ciscoflashcopyremoteusername.yfilter)) leaf_name_data.push_back(ciscoflashcopyremoteusername.get_name_leafdata());
    if (ciscoflashcopystatus.is_set || is_set(ciscoflashcopystatus.yfilter)) leaf_name_data.push_back(ciscoflashcopystatus.get_name_leafdata());
    if (ciscoflashcopynotifyoncompletion.is_set || is_set(ciscoflashcopynotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashcopynotifyoncompletion.get_name_leafdata());
    if (ciscoflashcopytime.is_set || is_set(ciscoflashcopytime.yfilter)) leaf_name_data.push_back(ciscoflashcopytime.get_name_leafdata());
    if (ciscoflashcopyentrystatus.is_set || is_set(ciscoflashcopyentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashcopyentrystatus.get_name_leafdata());
    if (ciscoflashcopyverify.is_set || is_set(ciscoflashcopyverify.yfilter)) leaf_name_data.push_back(ciscoflashcopyverify.get_name_leafdata());
    if (ciscoflashcopyserveraddrtype.is_set || is_set(ciscoflashcopyserveraddrtype.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddrtype.get_name_leafdata());
    if (ciscoflashcopyserveraddrrev1.is_set || is_set(ciscoflashcopyserveraddrrev1.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddrrev1.get_name_leafdata());
    if (ciscoflashcopyremotepassword.is_set || is_set(ciscoflashcopyremotepassword.yfilter)) leaf_name_data.push_back(ciscoflashcopyremotepassword.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashCopySerialNumber")
    {
        ciscoflashcopyserialnumber = value;
        ciscoflashcopyserialnumber.value_namespace = name_space;
        ciscoflashcopyserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyCommand")
    {
        ciscoflashcopycommand = value;
        ciscoflashcopycommand.value_namespace = name_space;
        ciscoflashcopycommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyProtocol")
    {
        ciscoflashcopyprotocol = value;
        ciscoflashcopyprotocol.value_namespace = name_space;
        ciscoflashcopyprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddress")
    {
        ciscoflashcopyserveraddress = value;
        ciscoflashcopyserveraddress.value_namespace = name_space;
        ciscoflashcopyserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopySourceName")
    {
        ciscoflashcopysourcename = value;
        ciscoflashcopysourcename.value_namespace = name_space;
        ciscoflashcopysourcename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyDestinationName")
    {
        ciscoflashcopydestinationname = value;
        ciscoflashcopydestinationname.value_namespace = name_space;
        ciscoflashcopydestinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyRemoteUserName")
    {
        ciscoflashcopyremoteusername = value;
        ciscoflashcopyremoteusername.value_namespace = name_space;
        ciscoflashcopyremoteusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyStatus")
    {
        ciscoflashcopystatus = value;
        ciscoflashcopystatus.value_namespace = name_space;
        ciscoflashcopystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyNotifyOnCompletion")
    {
        ciscoflashcopynotifyoncompletion = value;
        ciscoflashcopynotifyoncompletion.value_namespace = name_space;
        ciscoflashcopynotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyTime")
    {
        ciscoflashcopytime = value;
        ciscoflashcopytime.value_namespace = name_space;
        ciscoflashcopytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyEntryStatus")
    {
        ciscoflashcopyentrystatus = value;
        ciscoflashcopyentrystatus.value_namespace = name_space;
        ciscoflashcopyentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyVerify")
    {
        ciscoflashcopyverify = value;
        ciscoflashcopyverify.value_namespace = name_space;
        ciscoflashcopyverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddrType")
    {
        ciscoflashcopyserveraddrtype = value;
        ciscoflashcopyserveraddrtype.value_namespace = name_space;
        ciscoflashcopyserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddrRev1")
    {
        ciscoflashcopyserveraddrrev1 = value;
        ciscoflashcopyserveraddrrev1.value_namespace = name_space;
        ciscoflashcopyserveraddrrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyRemotePassword")
    {
        ciscoflashcopyremotepassword = value;
        ciscoflashcopyremotepassword.value_namespace = name_space;
        ciscoflashcopyremotepassword.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashCopySerialNumber")
    {
        ciscoflashcopyserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyCommand")
    {
        ciscoflashcopycommand.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyProtocol")
    {
        ciscoflashcopyprotocol.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddress")
    {
        ciscoflashcopyserveraddress.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopySourceName")
    {
        ciscoflashcopysourcename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyDestinationName")
    {
        ciscoflashcopydestinationname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyRemoteUserName")
    {
        ciscoflashcopyremoteusername.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyStatus")
    {
        ciscoflashcopystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyNotifyOnCompletion")
    {
        ciscoflashcopynotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyTime")
    {
        ciscoflashcopytime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyEntryStatus")
    {
        ciscoflashcopyentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyVerify")
    {
        ciscoflashcopyverify.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddrType")
    {
        ciscoflashcopyserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddrRev1")
    {
        ciscoflashcopyserveraddrrev1.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyRemotePassword")
    {
        ciscoflashcopyremotepassword.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCopySerialNumber" || name == "ciscoFlashCopyCommand" || name == "ciscoFlashCopyProtocol" || name == "ciscoFlashCopyServerAddress" || name == "ciscoFlashCopySourceName" || name == "ciscoFlashCopyDestinationName" || name == "ciscoFlashCopyRemoteUserName" || name == "ciscoFlashCopyStatus" || name == "ciscoFlashCopyNotifyOnCompletion" || name == "ciscoFlashCopyTime" || name == "ciscoFlashCopyEntryStatus" || name == "ciscoFlashCopyVerify" || name == "ciscoFlashCopyServerAddrType" || name == "ciscoFlashCopyServerAddrRev1" || name == "ciscoFlashCopyRemotePassword")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningTable()
    :
    ciscoflashpartitioningentry(this, {"ciscoflashpartitioningserialnumber"})
{

    yang_name = "ciscoFlashPartitioningTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashPartitioningTable::~CiscoFlashPartitioningTable()
{
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashpartitioningentry.len(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitioningentry.len(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashPartitioningTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashPartitioningTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashPartitioningTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashPartitioningTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashPartitioningEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry>();
        c->parent = this;
        ciscoflashpartitioningentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashPartitioningTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashpartitioningentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashPartitioningTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashPartitioningTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitioningEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningEntry()
    :
    ciscoflashpartitioningserialnumber{YType::int32, "ciscoFlashPartitioningSerialNumber"},
    ciscoflashpartitioningcommand{YType::enumeration, "ciscoFlashPartitioningCommand"},
    ciscoflashpartitioningdestinationname{YType::str, "ciscoFlashPartitioningDestinationName"},
    ciscoflashpartitioningpartitioncount{YType::uint32, "ciscoFlashPartitioningPartitionCount"},
    ciscoflashpartitioningpartitionsizes{YType::str, "ciscoFlashPartitioningPartitionSizes"},
    ciscoflashpartitioningstatus{YType::enumeration, "ciscoFlashPartitioningStatus"},
    ciscoflashpartitioningnotifyoncompletion{YType::boolean, "ciscoFlashPartitioningNotifyOnCompletion"},
    ciscoflashpartitioningtime{YType::uint32, "ciscoFlashPartitioningTime"},
    ciscoflashpartitioningentrystatus{YType::enumeration, "ciscoFlashPartitioningEntryStatus"}
{

    yang_name = "ciscoFlashPartitioningEntry"; yang_parent_name = "ciscoFlashPartitioningTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::~CiscoFlashPartitioningEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashpartitioningserialnumber.is_set
	|| ciscoflashpartitioningcommand.is_set
	|| ciscoflashpartitioningdestinationname.is_set
	|| ciscoflashpartitioningpartitioncount.is_set
	|| ciscoflashpartitioningpartitionsizes.is_set
	|| ciscoflashpartitioningstatus.is_set
	|| ciscoflashpartitioningnotifyoncompletion.is_set
	|| ciscoflashpartitioningtime.is_set
	|| ciscoflashpartitioningentrystatus.is_set;
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashpartitioningserialnumber.yfilter)
	|| ydk::is_set(ciscoflashpartitioningcommand.yfilter)
	|| ydk::is_set(ciscoflashpartitioningdestinationname.yfilter)
	|| ydk::is_set(ciscoflashpartitioningpartitioncount.yfilter)
	|| ydk::is_set(ciscoflashpartitioningpartitionsizes.yfilter)
	|| ydk::is_set(ciscoflashpartitioningstatus.yfilter)
	|| ydk::is_set(ciscoflashpartitioningnotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashpartitioningtime.yfilter)
	|| ydk::is_set(ciscoflashpartitioningentrystatus.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitioningTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningEntry";
    ADD_KEY_TOKEN(ciscoflashpartitioningserialnumber, "ciscoFlashPartitioningSerialNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashpartitioningserialnumber.is_set || is_set(ciscoflashpartitioningserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningserialnumber.get_name_leafdata());
    if (ciscoflashpartitioningcommand.is_set || is_set(ciscoflashpartitioningcommand.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningcommand.get_name_leafdata());
    if (ciscoflashpartitioningdestinationname.is_set || is_set(ciscoflashpartitioningdestinationname.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningdestinationname.get_name_leafdata());
    if (ciscoflashpartitioningpartitioncount.is_set || is_set(ciscoflashpartitioningpartitioncount.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningpartitioncount.get_name_leafdata());
    if (ciscoflashpartitioningpartitionsizes.is_set || is_set(ciscoflashpartitioningpartitionsizes.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningpartitionsizes.get_name_leafdata());
    if (ciscoflashpartitioningstatus.is_set || is_set(ciscoflashpartitioningstatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningstatus.get_name_leafdata());
    if (ciscoflashpartitioningnotifyoncompletion.is_set || is_set(ciscoflashpartitioningnotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningnotifyoncompletion.get_name_leafdata());
    if (ciscoflashpartitioningtime.is_set || is_set(ciscoflashpartitioningtime.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningtime.get_name_leafdata());
    if (ciscoflashpartitioningentrystatus.is_set || is_set(ciscoflashpartitioningentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashPartitioningSerialNumber")
    {
        ciscoflashpartitioningserialnumber = value;
        ciscoflashpartitioningserialnumber.value_namespace = name_space;
        ciscoflashpartitioningserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningCommand")
    {
        ciscoflashpartitioningcommand = value;
        ciscoflashpartitioningcommand.value_namespace = name_space;
        ciscoflashpartitioningcommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningDestinationName")
    {
        ciscoflashpartitioningdestinationname = value;
        ciscoflashpartitioningdestinationname.value_namespace = name_space;
        ciscoflashpartitioningdestinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningPartitionCount")
    {
        ciscoflashpartitioningpartitioncount = value;
        ciscoflashpartitioningpartitioncount.value_namespace = name_space;
        ciscoflashpartitioningpartitioncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningPartitionSizes")
    {
        ciscoflashpartitioningpartitionsizes = value;
        ciscoflashpartitioningpartitionsizes.value_namespace = name_space;
        ciscoflashpartitioningpartitionsizes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningStatus")
    {
        ciscoflashpartitioningstatus = value;
        ciscoflashpartitioningstatus.value_namespace = name_space;
        ciscoflashpartitioningstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningNotifyOnCompletion")
    {
        ciscoflashpartitioningnotifyoncompletion = value;
        ciscoflashpartitioningnotifyoncompletion.value_namespace = name_space;
        ciscoflashpartitioningnotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningTime")
    {
        ciscoflashpartitioningtime = value;
        ciscoflashpartitioningtime.value_namespace = name_space;
        ciscoflashpartitioningtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningEntryStatus")
    {
        ciscoflashpartitioningentrystatus = value;
        ciscoflashpartitioningentrystatus.value_namespace = name_space;
        ciscoflashpartitioningentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashPartitioningSerialNumber")
    {
        ciscoflashpartitioningserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningCommand")
    {
        ciscoflashpartitioningcommand.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningDestinationName")
    {
        ciscoflashpartitioningdestinationname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningPartitionCount")
    {
        ciscoflashpartitioningpartitioncount.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningPartitionSizes")
    {
        ciscoflashpartitioningpartitionsizes.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningStatus")
    {
        ciscoflashpartitioningstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningNotifyOnCompletion")
    {
        ciscoflashpartitioningnotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningTime")
    {
        ciscoflashpartitioningtime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningEntryStatus")
    {
        ciscoflashpartitioningentrystatus.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitioningSerialNumber" || name == "ciscoFlashPartitioningCommand" || name == "ciscoFlashPartitioningDestinationName" || name == "ciscoFlashPartitioningPartitionCount" || name == "ciscoFlashPartitioningPartitionSizes" || name == "ciscoFlashPartitioningStatus" || name == "ciscoFlashPartitioningNotifyOnCompletion" || name == "ciscoFlashPartitioningTime" || name == "ciscoFlashPartitioningEntryStatus")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpTable()
    :
    ciscoflashmiscopentry(this, {"ciscoflashmiscopserialnumber"})
{

    yang_name = "ciscoFlashMiscOpTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashMiscOpTable::~CiscoFlashMiscOpTable()
{
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoflashmiscopentry.len(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashmiscopentry.len(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashMiscOpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashMiscOpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashMiscOpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashMiscOpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashMiscOpEntry")
    {
        auto c = std::make_shared<CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry>();
        c->parent = this;
        ciscoflashmiscopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashMiscOpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoflashmiscopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOFLASHMIB::CiscoFlashMiscOpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::CiscoFlashMiscOpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashMiscOpEntry")
        return true;
    return false;
}

CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpEntry()
    :
    ciscoflashmiscopserialnumber{YType::int32, "ciscoFlashMiscOpSerialNumber"},
    ciscoflashmiscopcommand{YType::enumeration, "ciscoFlashMiscOpCommand"},
    ciscoflashmiscopdestinationname{YType::str, "ciscoFlashMiscOpDestinationName"},
    ciscoflashmiscopstatus{YType::enumeration, "ciscoFlashMiscOpStatus"},
    ciscoflashmiscopnotifyoncompletion{YType::boolean, "ciscoFlashMiscOpNotifyOnCompletion"},
    ciscoflashmiscoptime{YType::uint32, "ciscoFlashMiscOpTime"},
    ciscoflashmiscopentrystatus{YType::enumeration, "ciscoFlashMiscOpEntryStatus"}
{

    yang_name = "ciscoFlashMiscOpEntry"; yang_parent_name = "ciscoFlashMiscOpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::~CiscoFlashMiscOpEntry()
{
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoflashmiscopserialnumber.is_set
	|| ciscoflashmiscopcommand.is_set
	|| ciscoflashmiscopdestinationname.is_set
	|| ciscoflashmiscopstatus.is_set
	|| ciscoflashmiscopnotifyoncompletion.is_set
	|| ciscoflashmiscoptime.is_set
	|| ciscoflashmiscopentrystatus.is_set;
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashmiscopserialnumber.yfilter)
	|| ydk::is_set(ciscoflashmiscopcommand.yfilter)
	|| ydk::is_set(ciscoflashmiscopdestinationname.yfilter)
	|| ydk::is_set(ciscoflashmiscopstatus.yfilter)
	|| ydk::is_set(ciscoflashmiscopnotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashmiscoptime.yfilter)
	|| ydk::is_set(ciscoflashmiscopentrystatus.yfilter);
}

std::string CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashMiscOpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpEntry";
    ADD_KEY_TOKEN(ciscoflashmiscopserialnumber, "ciscoFlashMiscOpSerialNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashmiscopserialnumber.is_set || is_set(ciscoflashmiscopserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashmiscopserialnumber.get_name_leafdata());
    if (ciscoflashmiscopcommand.is_set || is_set(ciscoflashmiscopcommand.yfilter)) leaf_name_data.push_back(ciscoflashmiscopcommand.get_name_leafdata());
    if (ciscoflashmiscopdestinationname.is_set || is_set(ciscoflashmiscopdestinationname.yfilter)) leaf_name_data.push_back(ciscoflashmiscopdestinationname.get_name_leafdata());
    if (ciscoflashmiscopstatus.is_set || is_set(ciscoflashmiscopstatus.yfilter)) leaf_name_data.push_back(ciscoflashmiscopstatus.get_name_leafdata());
    if (ciscoflashmiscopnotifyoncompletion.is_set || is_set(ciscoflashmiscopnotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashmiscopnotifyoncompletion.get_name_leafdata());
    if (ciscoflashmiscoptime.is_set || is_set(ciscoflashmiscoptime.yfilter)) leaf_name_data.push_back(ciscoflashmiscoptime.get_name_leafdata());
    if (ciscoflashmiscopentrystatus.is_set || is_set(ciscoflashmiscopentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashmiscopentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashMiscOpSerialNumber")
    {
        ciscoflashmiscopserialnumber = value;
        ciscoflashmiscopserialnumber.value_namespace = name_space;
        ciscoflashmiscopserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpCommand")
    {
        ciscoflashmiscopcommand = value;
        ciscoflashmiscopcommand.value_namespace = name_space;
        ciscoflashmiscopcommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpDestinationName")
    {
        ciscoflashmiscopdestinationname = value;
        ciscoflashmiscopdestinationname.value_namespace = name_space;
        ciscoflashmiscopdestinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpStatus")
    {
        ciscoflashmiscopstatus = value;
        ciscoflashmiscopstatus.value_namespace = name_space;
        ciscoflashmiscopstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpNotifyOnCompletion")
    {
        ciscoflashmiscopnotifyoncompletion = value;
        ciscoflashmiscopnotifyoncompletion.value_namespace = name_space;
        ciscoflashmiscopnotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpTime")
    {
        ciscoflashmiscoptime = value;
        ciscoflashmiscoptime.value_namespace = name_space;
        ciscoflashmiscoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpEntryStatus")
    {
        ciscoflashmiscopentrystatus = value;
        ciscoflashmiscopentrystatus.value_namespace = name_space;
        ciscoflashmiscopentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashMiscOpSerialNumber")
    {
        ciscoflashmiscopserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpCommand")
    {
        ciscoflashmiscopcommand.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpDestinationName")
    {
        ciscoflashmiscopdestinationname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpStatus")
    {
        ciscoflashmiscopstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpNotifyOnCompletion")
    {
        ciscoflashmiscopnotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpTime")
    {
        ciscoflashmiscoptime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpEntryStatus")
    {
        ciscoflashmiscopentrystatus.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashMiscOpSerialNumber" || name == "ciscoFlashMiscOpCommand" || name == "ciscoFlashMiscOpDestinationName" || name == "ciscoFlashMiscOpStatus" || name == "ciscoFlashMiscOpNotifyOnCompletion" || name == "ciscoFlashMiscOpTime" || name == "ciscoFlashMiscOpEntryStatus")
        return true;
    return false;
}

const Enum::YLeaf FlashFileType::unknown {1, "unknown"};
const Enum::YLeaf FlashFileType::config {2, "config"};
const Enum::YLeaf FlashFileType::image {3, "image"};
const Enum::YLeaf FlashFileType::directory {4, "directory"};
const Enum::YLeaf FlashFileType::crashinfo {5, "crashinfo"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::CiscoFlashDeviceProgrammingJumper::installed {1, "installed"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::CiscoFlashDeviceProgrammingJumper::notInstalled {2, "notInstalled"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashDeviceTable::CiscoFlashDeviceEntry::CiscoFlashDeviceProgrammingJumper::unknown {3, "unknown"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionChecksumAlgorithm::simpleChecksum {1, "simpleChecksum"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionChecksumAlgorithm::undefined {2, "undefined"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionChecksumAlgorithm::simpleCRC {3, "simpleCRC"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionStatus::readOnly {1, "readOnly"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionStatus::runFromFlash {2, "runFromFlash"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionStatus::readWrite {3, "readWrite"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionUpgradeMethod::unknown {1, "unknown"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionUpgradeMethod::rxbootFLH {2, "rxbootFLH"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitionTable::CiscoFlashPartitionEntry::CiscoFlashPartitionUpgradeMethod::direct {3, "direct"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::CiscoFlashFileStatus::deleted {1, "deleted"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::CiscoFlashFileStatus::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileTable::CiscoFlashFileEntry::CiscoFlashFileStatus::valid {3, "valid"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::CiscoFlashFileByTypeStatus::deleted {1, "deleted"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::CiscoFlashFileByTypeStatus::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashFileByTypeTable::CiscoFlashFileByTypeEntry::CiscoFlashFileByTypeStatus::valid {3, "valid"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyCommand::copyToFlashWithErase {1, "copyToFlashWithErase"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyCommand::copyToFlashWithoutErase {2, "copyToFlashWithoutErase"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyCommand::copyFromFlash {3, "copyFromFlash"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyCommand::copyFromFlhLog {4, "copyFromFlhLog"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::tftp {1, "tftp"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::rcp {2, "rcp"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::lex {3, "lex"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::ftp {4, "ftp"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::scp {5, "scp"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyProtocol::sftp {6, "sftp"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyOperationPending {0, "copyOperationPending"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInProgress {1, "copyInProgress"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyOperationSuccess {2, "copyOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidOperation {3, "copyInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidProtocol {4, "copyInvalidProtocol"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidSourceName {5, "copyInvalidSourceName"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidDestName {6, "copyInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidServerAddress {7, "copyInvalidServerAddress"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyDeviceBusy {8, "copyDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyDeviceOpenError {9, "copyDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyDeviceError {10, "copyDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyDeviceNotProgrammable {11, "copyDeviceNotProgrammable"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyDeviceFull {12, "copyDeviceFull"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyFileOpenError {13, "copyFileOpenError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyFileTransferError {14, "copyFileTransferError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyFileChecksumError {15, "copyFileChecksumError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyNoMemory {16, "copyNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyUnknownFailure {17, "copyUnknownFailure"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyInvalidSignature {18, "copyInvalidSignature"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashCopyTable::CiscoFlashCopyEntry::CiscoFlashCopyStatus::copyProhibited {19, "copyProhibited"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningCommand::partition {1, "partition"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningInProgress {1, "partitioningInProgress"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningOperationSuccess {2, "partitioningOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningInvalidOperation {3, "partitioningInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningInvalidDestName {4, "partitioningInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningInvalidPartitionCount {5, "partitioningInvalidPartitionCount"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningInvalidPartitionSizes {6, "partitioningInvalidPartitionSizes"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningDeviceBusy {7, "partitioningDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningDeviceOpenError {8, "partitioningDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningDeviceError {9, "partitioningDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningNoMemory {10, "partitioningNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashPartitioningTable::CiscoFlashPartitioningEntry::CiscoFlashPartitioningStatus::partitioningUnknownFailure {11, "partitioningUnknownFailure"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::erase {1, "erase"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::verify {2, "verify"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::delete_ {3, "delete"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::undelete {4, "undelete"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::squeeze {5, "squeeze"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpCommand::format {6, "format"};

const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpInProgress {1, "miscOpInProgress"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpOperationSuccess {2, "miscOpOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpInvalidOperation {3, "miscOpInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpInvalidDestName {4, "miscOpInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpDeviceBusy {5, "miscOpDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpDeviceOpenError {6, "miscOpDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpDeviceError {7, "miscOpDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpDeviceNotProgrammable {8, "miscOpDeviceNotProgrammable"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpFileOpenError {9, "miscOpFileOpenError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpFileDeleteFailure {10, "miscOpFileDeleteFailure"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpFileUndeleteFailure {11, "miscOpFileUndeleteFailure"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpFileChecksumError {12, "miscOpFileChecksumError"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpNoMemory {13, "miscOpNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpUnknownFailure {14, "miscOpUnknownFailure"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpSqueezeFailure {18, "miscOpSqueezeFailure"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpNoSuchFile {19, "miscOpNoSuchFile"};
const Enum::YLeaf CISCOFLASHMIB::CiscoFlashMiscOpTable::CiscoFlashMiscOpEntry::CiscoFlashMiscOpStatus::miscOpFormatFailure {20, "miscOpFormatFailure"};


}
}

